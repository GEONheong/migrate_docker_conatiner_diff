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

7. 1번 가상머신 /user_host로 들어 와있는 곳에서 ./user 9999(controller 포트) 실행 시켜주고 아래 와 같이 명령어를 입력해줍니다 
