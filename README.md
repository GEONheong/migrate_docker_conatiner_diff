# Migration container (diff version)

1. 가상머신 1,2번에 각각 migrate_docker_container_diff 을 clone 합니다
![image](https://user-images.githubusercontent.com/83600412/124562875-7da0d200-de7a-11eb-9878-46d4368e3dcf.png)

2. 1번 가상머신 에서 해당 사진과 같이 준비 해줍니다 
![image](https://user-images.githubusercontent.com/83600412/124564688-47645200-de7c-11eb-8485-95e3fbf8db2b.png)

3. 2번 가상머신 에서 해당 사진과 같이 준비 해줍니다
![image](https://user-images.githubusercontent.com/83600412/124564963-898d9380-de7c-11eb-91b2-d9eea1cf9eaf.png)

4. 1번 가상 머신에서 먼저 'ubuntu:latest' 를 base로 한 "ub" 라는 이름으로 컨테이너를 생성 합니다 (생성시 터미널을 켜서 윈하는 위치에 다른 파일을 만들면 구분이쉽습니다)
![image](https://user-images.githubusercontent.com/83600412/124565659-3f58e200-de7d-11eb-887d-7e9bef3b1308.png)
저는 최상위(.)에 add라는 디렉토리와 add.txt를 만들어 놓았습니다 
![image](https://user-images.githubusercontent.com/83600412/124566484-0b31f100-de7e-11eb-98bd-6fa59e6b8c0f.png)

5. 1번 가상머신에서 ./start.sh 를 실행 시킨뒤 controller 와 연결할 포트(9999), 2번 가상 머신과 연결할 포트(9998)을 입력 해줍니다 (백그라운드로 controller 와 vm1이 실행중인 상태)  
![image](https://user-images.githubusercontent.com/83600412/124567070-990ddc00-de7e-11eb-9fb4-3df6c6cb9c81.png)

6. 2번 가상머신에서 ./second.sh 를 실행 시킨뒤 위와 같이 포트 번호를 입력 해줍니다 (백드라운드로 vm2 가 실행 중인 상태)
![image](https://user-images.githubusercontent.com/83600412/124567663-2ea96b80-de7f-11eb-9fe6-ceb8ea37436a.png)
1번 가상머신에서 보면 1-connect 가 된 것을 볼수 있습니다
![image](https://user-images.githubusercontent.com/83600412/124568407-d757cb00-de7f-11eb-9556-cca740cc3181.png)


7. 1번 가상머신 /host_user로 들어 와있는 곳에서 ./user 9999(controller 포트) 실행 시켜주고 아래 와 같이 명령어를 입력해줍니다 
![image](https://user-images.githubusercontent.com/83600412/124591049-cd8d9200-de96-11eb-89f6-502a8fff9709.png)
1번 가상머신에서 2-connect 가 된것을 볼수 있습니다
![image](https://user-images.githubusercontent.com/83600412/124591005-bea6df80-de96-11eb-9487-b1b7d8ac25bf.png)

8. 1번 가상머신 /host_user에서 아래와 같은 명령어를 입력 해줍니다
![image](https://user-images.githubusercontent.com/83600412/124591169-f31a9b80-de96-11eb-8cc3-3e10eca93fa4.png)

9. 명령어를 입력하면 /host_user쪽 에선 완료 매세지와 전송시 걸린 시간을 보여 줍니다 
![image](https://user-images.githubusercontent.com/83600412/124591626-7a680f00-de97-11eb-8064-33ba3a5c2a8a.png)

10. 전송시 1번 가상머신에서는 이와 같이 나옵니다
![image](https://user-images.githubusercontent.com/83600412/124591916-d6329800-de97-11eb-849a-6dc640208025.png)

11. 전송시 2번 가상머신에서는 이와 같이 나옵니다
![image](https://user-images.githubusercontent.com/83600412/124591989-ecd8ef00-de97-11eb-9acd-ad1c25cdde70.png)

12. 2번 가상머신에 제대로 옮겨진 것을 확인 할수 있습니다
![image](https://user-images.githubusercontent.com/83600412/124592090-07ab6380-de98-11eb-8b46-8beb21f07cf2.png)
![image](https://user-images.githubusercontent.com/83600412/124592189-26a9f580-de98-11eb-841f-434e417bb16e.png)

# 참고
<hr>
![image](https://user-images.githubusercontent.com/83600412/124592440-7092db80-de98-11eb-86c2-ea02df298013.png)






