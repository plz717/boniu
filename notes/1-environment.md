# 环境配置

## 代理

1.本地开启代理服务(1087端口)

`v2ray run -c ~/.local/share/v2ray/config.json`

2.打开terminal，配置terminal使shell全部走代理

`set -x all_proxy http://localhost:1087`







## Git

如果用的shell是fish

**1.生成新的ssh key**

```fish
ssh-keygen -t ed25519 -C "panglinzhuo@gmail.com"
```

当提示选择保存密钥的文件路径时，别用默认的 `id_ed25519`，输入一个新的文件名，例如 `id_ed25519_plz`，避免覆盖已有的 SSH Key

**2. 添加公钥到git的SSH key**

登录 GitHub 账户，点击右上角头像，选 “Settings” -> “SSH and GPG keys” -> “New SSH key”。把新生成的公钥（`~/.ssh/id_ed25519_plz.pub`）内容复制粘贴到 “Key” 字段，输入一个标题（如 “Your New Computer”），然后点击 “Add SSH key”

**3.配置ssh config文件****

编辑 `~/.ssh/config` 文件。若该文件不存在，可手动创建，输入下面内容

`IdentityFile ~/.ssh/id_ed25519_plz`

## docker

1.通过挂载卷（volume)的方式，将本地目录映射到 Docker 容器中，这样容器就能以相同的路径结构访问本地文件。使用ubuntu镜像启动一个docker，并让其在后台运行（-d）

`docker run -it --name boniu -d -v ~/Documents/workspace/boniu/:/root/boniu ubuntu`

2.查看一共有哪些容器

`docker ps -a`

3.进入docker容器

`docker attach boniu`

4.查看ubuntu版本，以便选择源

`cat /etc/lsb-release`

5.配置清华的源

6.







