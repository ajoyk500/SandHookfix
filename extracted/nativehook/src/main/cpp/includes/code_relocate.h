// The file's content goes here

// Updated methods
virtual void* Relocate(BaseInst *instruction, void *toPc) noexcept(false) = 0;

virtual void* Relocate(void *startPc, Addr len, void *toPc) noexcept(false) = 0;