#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// sceGsPutIMR: call GsGetIMR (save return in v0), then GsPutIMR(a0), then return saved v0.
// MIPS: jal GsGetIMR; move s1,v0; jal GsPutIMR (a0=s0 from before); move v0,s1.
static constexpr uint32_t kGsGetIMR = 0x303900u;
static constexpr uint32_t kGsPutIMR = 0x303920u;

void sceGsPutIMR_0x2e1360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t __entryPc = ctx->pc;

    if (runtime && runtime->hasFunction(kGsGetIMR) && runtime->hasFunction(kGsPutIMR)) {
        auto getFn = runtime->lookupFunction(kGsGetIMR);
        auto putFn = runtime->lookupFunction(kGsPutIMR);
        getFn(rdram, ctx, runtime);
        uint32_t savedV0 = getRegU32(ctx, 2);
        putFn(rdram, ctx, runtime);
        setReturnU32(ctx, savedV0);
    }

    if (ctx->pc == __entryPc)
        ctx->pc = getRegU32(ctx, 31);
}
