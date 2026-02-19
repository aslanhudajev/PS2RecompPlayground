#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exprOpGe
// Address: 0x2b56b0 - 0x2b5718
void exprOpGe_0x2b56b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b56b0u;

    // 0x2b56b0: 0x8c830000
    ctx->pc = 0x2b56b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b56b4: 0x10600005
    ctx->pc = 0x2B56B4u;
    {
        const bool branch_taken_0x2b56b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B56B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b56b4) {
            ctx->pc = 0x2B56CCu;
            goto label_2b56cc;
        }
    }
    ctx->pc = 0x2B56BCu;
    // 0x2b56bc: 0x1062000b
    ctx->pc = 0x2B56BCu;
    {
        const bool branch_taken_0x2b56bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B56C0u;
        SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
        if (branch_taken_0x2b56bc) {
            ctx->pc = 0x2B56ECu;
            goto label_2b56ec;
        }
    }
    ctx->pc = 0x2B56C4u;
    // 0x2b56c4: 0x1000000f
    ctx->pc = 0x2B56C4u;
    {
        const bool branch_taken_0x2b56c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b56c4) {
            ctx->pc = 0x2B5704u;
            goto label_2b5704;
        }
    }
    ctx->pc = 0x2B56CCu;
label_2b56cc:
    // 0x2b56cc: 0xc4a10010
    ctx->pc = 0x2b56ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b56d0: 0xc4c00010
    ctx->pc = 0x2b56d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b56d4: 0x46010036
    ctx->pc = 0x2b56d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b56d8: 0x0
    ctx->pc = 0x2b56d8u;
    // NOP
    // 0x2b56dc: 0x4503000b
    ctx->pc = 0x2B56DCu;
    {
        const bool branch_taken_0x2b56dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b56dc) {
            ctx->pc = 0x2B56E0u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
            ctx->pc = 0x2B570Cu;
            goto label_2b570c;
        }
    }
    ctx->pc = 0x2B56E4u;
    // 0x2b56e4: 0x10000005
    ctx->pc = 0x2B56E4u;
    {
        const bool branch_taken_0x2b56e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B56E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b56e4) {
            ctx->pc = 0x2B56FCu;
            goto label_2b56fc;
        }
    }
    ctx->pc = 0x2B56ECu;
label_2b56ec:
    // 0x2b56ec: 0x8ca20010
    ctx->pc = 0x2b56ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b56f0: 0x8cc30010
    ctx->pc = 0x2b56f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2b56f4: 0x43102a
    ctx->pc = 0x2b56f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2b56f8: 0x38420001
    ctx->pc = 0x2b56f8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
label_2b56fc:
    // 0x2b56fc: 0x10000003
    ctx->pc = 0x2B56FCu;
    {
        const bool branch_taken_0x2b56fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5700u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b56fc) {
            ctx->pc = 0x2B570Cu;
            goto label_2b570c;
        }
    }
    ctx->pc = 0x2B5704u;
label_2b5704:
    // 0x2b5704: 0x80ad496
    ctx->pc = 0x2B5704u;
    ctx->pc = 0x2B5708u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 18920));
    ctx->pc = 0x2B5258u;
    typeError_0x2b5258(rdram, ctx, runtime); return;
    ctx->pc = 0x2B570Cu;
label_2b570c:
    // 0x2b570c: 0x24020001
    ctx->pc = 0x2b570cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5710: 0x3e00008
    ctx->pc = 0x2B5710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5714u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B56CCu: goto label_2b56cc;
            case 0x2B56ECu: goto label_2b56ec;
            case 0x2B56FCu: goto label_2b56fc;
            case 0x2B5704u: goto label_2b5704;
            case 0x2B570Cu: goto label_2b570c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B5718u;
}
