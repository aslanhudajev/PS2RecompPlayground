#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setD4_CHCR
// Address: 0x2df200 - 0x2df270
void setD4_CHCR_0x2df200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2df200u;

    // 0x2df200: 0x80302d
    ctx->pc = 0x2df200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df204: 0x3c030001
    ctx->pc = 0x2df204u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
label_2df208:
    // 0x2df208: 0x42000039
    ctx->pc = 0x2df208u;
    ctx->cop0_status &= ~0x1; // Disable interrupts
    // 0x2df20c: 0x40f
    ctx->pc = 0x2df20cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2df210: 0x40026000
    ctx->pc = 0x2df210u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x2df214: 0x431024
    ctx->pc = 0x2df214u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df218: 0x0
    ctx->pc = 0x2df218u;
    // NOP
    // 0x2df21c: 0x1440fffa
    ctx->pc = 0x2DF21Cu;
    {
        const bool branch_taken_0x2df21c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2df21c) {
            ctx->pc = 0x2DF208u;
            goto label_2df208;
        }
    }
    ctx->pc = 0x2DF224u;
    // 0x2df224: 0x3c051000
    ctx->pc = 0x2df224u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x2df228: 0x34a5f590
    ctx->pc = 0x2df228u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 62864));
    // 0x2df22c: 0x3c041000
    ctx->pc = 0x2df22cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2df230: 0x3484f520
    ctx->pc = 0x2df230u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 62752));
    // 0x2df234: 0x8c820000
    ctx->pc = 0x2df234u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x2df238: 0x3c030001
    ctx->pc = 0x2df238u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x2df23c: 0x431025
    ctx->pc = 0x2df23cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df240: 0xaca20000
    ctx->pc = 0x2df240u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2df244: 0x3c021000
    ctx->pc = 0x2df244u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2df248: 0x3442b400
    ctx->pc = 0x2df248u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46080));
    // 0x2df24c: 0xac460000
    ctx->pc = 0x2df24cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x2df250: 0x8c820000
    ctx->pc = 0x2df250u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2df254: 0x3c03fffe
    ctx->pc = 0x2df254u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65534 << 16));
    // 0x2df258: 0x3463ffff
    ctx->pc = 0x2df258u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2df25c: 0x431024
    ctx->pc = 0x2df25cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df260: 0xaca20000
    ctx->pc = 0x2df260u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2df264: 0x42000038
    ctx->pc = 0x2df264u;
    ctx->cop0_status |= 0x1; // Enable interrupts
    // 0x2df268: 0x3e00008
    ctx->pc = 0x2DF268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DF208u: goto label_2df208;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DF270u;
}
