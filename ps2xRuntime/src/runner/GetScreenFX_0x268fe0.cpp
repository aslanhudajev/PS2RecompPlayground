#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetScreenFX
// Address: 0x268fe0 - 0x269040
void GetScreenFX_0x268fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x268fe0u;

    // 0x268fe0: 0x3c020034
    ctx->pc = 0x268fe0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268fe4: 0x8c42f8fc
    ctx->pc = 0x268fe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x268fe8: 0x14400006
    ctx->pc = 0x268FE8u;
    {
        const bool branch_taken_0x268fe8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x268FECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x268fe8) {
            ctx->pc = 0x269004u;
            goto label_269004;
        }
    }
    ctx->pc = 0x268FF0u;
    // 0x268ff0: 0x44800000
    ctx->pc = 0x268ff0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x268ff4: 0x3e00008
    ctx->pc = 0x268FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x268FFCu: goto label_268ffc;
            case 0x269004u: goto label_269004;
            case 0x269010u: goto label_269010;
            case 0x269028u: goto label_269028;
            default: break;
        }
        return;
    }
    ctx->pc = 0x268FFCu;
label_268ffc:
    // 0x268ffc: 0x3e00008
    ctx->pc = 0x268FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269000u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x268FFCu: goto label_268ffc;
            case 0x269004u: goto label_269004;
            case 0x269010u: goto label_269010;
            case 0x269028u: goto label_269028;
            default: break;
        }
        return;
    }
    ctx->pc = 0x269004u;
label_269004:
    // 0x269004: 0x3c020034
    ctx->pc = 0x269004u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269008: 0x2443f530
    ctx->pc = 0x269008u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294964528));
    // 0x26900c: 0x0
    ctx->pc = 0x26900cu;
    // NOP
label_269010:
    // 0x269010: 0x8c620000
    ctx->pc = 0x269010u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269014: 0x10400004
    ctx->pc = 0x269014u;
    {
        const bool branch_taken_0x269014 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x269018u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x269014) {
            ctx->pc = 0x269028u;
            goto label_269028;
        }
    }
    ctx->pc = 0x26901Cu;
    // 0x26901c: 0x8c620004
    ctx->pc = 0x26901cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x269020: 0x1082fff6
    ctx->pc = 0x269020u;
    {
        const bool branch_taken_0x269020 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x269020) {
            ctx->pc = 0x268FFCu;
            goto label_268ffc;
        }
    }
    ctx->pc = 0x269028u;
label_269028:
    // 0x269028: 0x28a2000f
    ctx->pc = 0x269028u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 15));
    // 0x26902c: 0x1440fff8
    ctx->pc = 0x26902Cu;
    {
        const bool branch_taken_0x26902c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x269030u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x26902c) {
            ctx->pc = 0x269010u;
            goto label_269010;
        }
    }
    ctx->pc = 0x269034u;
    // 0x269034: 0x44800000
    ctx->pc = 0x269034u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x269038: 0x3e00008
    ctx->pc = 0x269038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x268FFCu: goto label_268ffc;
            case 0x269004u: goto label_269004;
            case 0x269010u: goto label_269010;
            case 0x269028u: goto label_269028;
            default: break;
        }
        return;
    }
    ctx->pc = 0x269040u;
}
