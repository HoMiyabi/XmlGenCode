public class HttpResult<T>
{
    public int Code { get; set; }
    public string Msg { get; set; }
    public T Data { get; set; }

    public bool IsSuccess => Code == 0;
}
