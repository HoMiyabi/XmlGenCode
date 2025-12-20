public abstract class BaseBlock : IASTNode
{
    public virtual string Name => GetType().Name;
    
    public abstract void ToCode(CodeBuilder cb);
}