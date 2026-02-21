#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SfxSetMat
// Address: 0x27dd20 - 0x27dd9c
void SfxSetMat_0x27dd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27dd20u;

    // 0x27dd20: 0x27bdffd0
    ctx->pc = 0x27dd20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27dd24: 0xffbf0020
    ctx->pc = 0x27dd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27dd28: 0xffb10010
    ctx->pc = 0x27dd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27dd2c: 0xffb00000
    ctx->pc = 0x27dd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27dd30: 0x4800015
    ctx->pc = 0x27DD30u;
    {
        const bool branch_taken_0x27dd30 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27DD34u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27dd30) {
            ctx->pc = 0x27DD88u;
            goto label_27dd88;
        }
    }
    ctx->pc = 0x27DD38u;
    // 0x27dd38: 0x240300f0
    ctx->pc = 0x27dd38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27dd3c: 0x831818
    ctx->pc = 0x27dd3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27dd40: 0x3c020034
    ctx->pc = 0x27dd40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27dd44: 0x24420eb0
    ctx->pc = 0x27dd44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27dd48: 0x10a00004
    ctx->pc = 0x27DD48u;
    {
        const bool branch_taken_0x27dd48 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x27DD4Cu;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x27dd48) {
            ctx->pc = 0x27DD5Cu;
            goto label_27dd5c;
        }
    }
    ctx->pc = 0x27DD50u;
    // 0x27dd50: 0xa0202d
    ctx->pc = 0x27dd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd54: 0xc0b549e
    ctx->pc = 0x27DD54u;
    SET_GPR_U32(ctx, 31, 0x27DD5Cu);
    ctx->pc = 0x27DD58u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DD5Cu; }
    }
    if (ctx->pc != 0x27DD5Cu) { return; }
    ctx->pc = 0x27DD5Cu;
label_27dd5c:
    // 0x27dd5c: 0x1220000b
    ctx->pc = 0x27DD5Cu;
    {
        const bool branch_taken_0x27dd5c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x27DD60u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x27dd5c) {
            ctx->pc = 0x27DD8Cu;
            goto label_27dd8c;
        }
    }
    ctx->pc = 0x27DD64u;
    // 0x27dd64: 0x8e020014
    ctx->pc = 0x27dd64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27dd68: 0xc6200000
    ctx->pc = 0x27dd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dd6c: 0xe4400030
    ctx->pc = 0x27dd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x27dd70: 0x8e020014
    ctx->pc = 0x27dd70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27dd74: 0xc6200004
    ctx->pc = 0x27dd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dd78: 0xe4400034
    ctx->pc = 0x27dd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x27dd7c: 0x8e020014
    ctx->pc = 0x27dd7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27dd80: 0xc6200008
    ctx->pc = 0x27dd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dd84: 0xe4400038
    ctx->pc = 0x27dd84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_27dd88:
    // 0x27dd88: 0xdfbf0020
    ctx->pc = 0x27dd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27dd8c:
    // 0x27dd8c: 0xdfb10010
    ctx->pc = 0x27dd8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27dd90: 0xdfb00000
    ctx->pc = 0x27dd90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27dd94: 0x3e00008
    ctx->pc = 0x27DD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DD98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DD5Cu: goto label_27dd5c;
            case 0x27DD88u: goto label_27dd88;
            case 0x27DD8Cu: goto label_27dd8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27DD9Cu;
}
