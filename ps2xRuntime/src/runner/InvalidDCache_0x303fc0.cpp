#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InvalidDCache
// Address: 0x303fc0 - 0x304034
void InvalidDCache_0x303fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303fc0u;

    // 0x303fc0: 0x27bdffe0
    ctx->pc = 0x303fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x303fc4: 0x80302d
    ctx->pc = 0x303fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303fc8: 0xffbf0010
    ctx->pc = 0x303fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x303fcc: 0xffb00000
    ctx->pc = 0x303fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x303fd0: 0x40106000
    ctx->pc = 0x303fd0u;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x303fd4: 0x3c020001
    ctx->pc = 0x303fd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x303fd8: 0x2028024
    ctx->pc = 0x303fd8u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x303fdc: 0x12000009
    ctx->pc = 0x303FDCu;
    {
        const bool branch_taken_0x303fdc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x303FE0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
        if (branch_taken_0x303fdc) {
            ctx->pc = 0x304004u;
            goto label_304004;
        }
    }
    ctx->pc = 0x303FE4u;
    // 0x303fe4: 0x0
    ctx->pc = 0x303fe4u;
    // NOP
label_303fe8:
    // 0x303fe8: 0x42000039
    ctx->pc = 0x303fe8u;
    ctx->cop0_status &= ~0x10000; // DI: clear EIE (R5900)
    // 0x303fec: 0x40f
    ctx->pc = 0x303fecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x303ff0: 0x40026000
    ctx->pc = 0x303ff0u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x303ff4: 0x431024
    ctx->pc = 0x303ff4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x303ff8: 0x0
    ctx->pc = 0x303ff8u;
    // NOP
    // 0x303ffc: 0x1440fffa
    ctx->pc = 0x303FFCu;
    {
        const bool branch_taken_0x303ffc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x303ffc) {
            ctx->pc = 0x303FE8u;
            goto label_303fe8;
        }
    }
    ctx->pc = 0x304004u;
label_304004:
    // 0x304004: 0x3c04ffff
    ctx->pc = 0x304004u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x304008: 0x3484ffc0
    ctx->pc = 0x304008u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65472));
    // 0x30400c: 0xa42824
    ctx->pc = 0x30400cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x304010: 0xc0c0fc6
    ctx->pc = 0x304010u;
    SET_GPR_U32(ctx, 31, 0x304018u);
    ctx->pc = 0x304014u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->pc = 0x303F18u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceIDC_0x303f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304018u; }
    }
    if (ctx->pc != 0x304018u) { return; }
    ctx->pc = 0x304018u;
    // 0x304018: 0x12000003
    ctx->pc = 0x304018u;
    {
        const bool branch_taken_0x304018 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x30401Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x304018) {
            ctx->pc = 0x304028u;
            goto label_304028;
        }
    }
    ctx->pc = 0x304020u;
    // 0x304020: 0x42000038
    ctx->pc = 0x304020u;
    ctx->cop0_status |= 0x10000; // EI: set EIE (R5900)
    // 0x304024: 0xdfbf0010
    ctx->pc = 0x304024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_304028:
    // 0x304028: 0xdfb00000
    ctx->pc = 0x304028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30402c: 0x3e00008
    ctx->pc = 0x30402Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304030u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x303FE8u: goto label_303fe8;
            case 0x304004u: goto label_304004;
            case 0x304028u: goto label_304028;
            default: break;
        }
        return;
    }
    ctx->pc = 0x304034u;
}
