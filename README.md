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


