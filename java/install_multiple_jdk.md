## Install Multiple JDK

##### **Install homebrew:**
```zsh
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

##### **Install java11:**
```shell
brew install java11
```

##### **symlink it:**
```shell
sudo ln -sfn /usr/local/opt/openjdk@11/libexec/openjdk.jdk /Library/Java/JavaVirtualMachines/openjdk-11.jdk
```

##### **check location of jdk:**
```
/Library/java/JavaVirtualMachines/openjdk-11.jdk/Contents/Home
/Library/java/JavaVirtualMachines/jdk-17.jdk/Contents/Home
```

##### **path setup:**

```shell
nano ~/.zprofile
``` 

```shell
export JAVA_HOME_11=/Library/java/JavaVirtualMachines/openjdk-11.jdk/Contents/Home
export JAVA_HOME_17=/Library/java/JavaVirtualMachines/jdk-17.jdk/Contents/Home

export PATH=$JAVA_HOME_11/bin:$JAVA_HOME_17/bin:$PATH

alias jdk11='export JAVA_HOME=$JAVA_HOME_11; export PATH=$JAVA_HOME/bin:$PATH'
alias jdk17='export JAVA_HOME=$JAVA_HOME_17; export PATH=$JAVA_HOME/bin:$PATH'
```

```shell
ctrl + o  
ctrl + x
``` 

```shell
source ~/.zprofile
``` 
