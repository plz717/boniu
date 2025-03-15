# Git

如果用的shell是fish

## 1.生成新的ssh key

```fish
ssh-keygen -t ed25519 -C "panglinzhuo@gmail.com"
```

当提示选择保存密钥的文件路径时，别用默认的 `id_ed25519`，输入一个新的文件名，例如 `id_ed25519_plz`，避免覆盖已有的 SSH Key

## 2. 添加公钥到git的SSH key

`cat ~/.ssh/id_ed25519_plz.pub`	

内容复制到github settings-ssh中

## 3. 配置ssh config文件

编辑 `~/.ssh/config` 文件。若该文件不存在，可手动创建







