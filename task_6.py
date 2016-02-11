def bcof(n,m):
    if 0<=n<=m:
        if n==0 or n==m:
            return 1
        else:
            return bcof(n-1,m-1)+bcof(n,m-1)
    else:
        print '0<=n<=m'
print bcof(2,5)
