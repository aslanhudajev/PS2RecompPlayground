#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TransVert
// Address: 0x269248 - 0x269354
void TransVert_0x269248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x269248u;

    // 0x269248: 0x27bdffc0
    ctx->pc = 0x269248u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26924c: 0xffbf0020
    ctx->pc = 0x26924cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x269250: 0xffb10010
    ctx->pc = 0x269250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x269254: 0xffb00000
    ctx->pc = 0x269254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x269258: 0xe7b40030
    ctx->pc = 0x269258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26925c: 0x46006506
    ctx->pc = 0x26925cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x269260: 0x3c020034
    ctx->pc = 0x269260u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x269264: 0xc440fa18
    ctx->pc = 0x269264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269268: 0x44800800
    ctx->pc = 0x269268u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x26926c: 0x46000834
    ctx->pc = 0x26926cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269270: 0x0
    ctx->pc = 0x269270u;
    // NOP
    // 0x269274: 0x45000003
    ctx->pc = 0x269274u;
    {
        const bool branch_taken_0x269274 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269278u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x269274) {
            ctx->pc = 0x269284u;
            goto label_269284;
        }
    }
    ctx->pc = 0x26927Cu;
    // 0x26927c: 0x10000005
    ctx->pc = 0x26927Cu;
    {
        const bool branch_taken_0x26927c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x269280u;
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        if (branch_taken_0x26927c) {
            ctx->pc = 0x269294u;
            goto label_269294;
        }
    }
    ctx->pc = 0x269284u;
label_269284:
    // 0x269284: 0x3c014049
    ctx->pc = 0x269284u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x269288: 0x34210fdb
    ctx->pc = 0x269288u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26928c: 0x44810000
    ctx->pc = 0x26928cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x269290: 0x4600a500
    ctx->pc = 0x269290u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_269294:
    // 0x269294: 0x3c014049
    ctx->pc = 0x269294u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x269298: 0x34210fdb
    ctx->pc = 0x269298u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26929c: 0x44810000
    ctx->pc = 0x26929cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2692a0: 0x46140034
    ctx->pc = 0x2692a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2692a4: 0x45000006
    ctx->pc = 0x2692A4u;
    {
        const bool branch_taken_0x2692a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2692a4) {
            ctx->pc = 0x2692C0u;
            goto label_2692c0;
        }
    }
    ctx->pc = 0x2692ACu;
    // 0x2692ac: 0x3c0140c9
    ctx->pc = 0x2692acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2692b0: 0x34210fdb
    ctx->pc = 0x2692b0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2692b4: 0x44810000
    ctx->pc = 0x2692b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2692b8: 0x1000000c
    ctx->pc = 0x2692B8u;
    {
        const bool branch_taken_0x2692b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2692BCu;
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x2692b8) {
            ctx->pc = 0x2692ECu;
            goto label_2692ec;
        }
    }
    ctx->pc = 0x2692C0u;
label_2692c0:
    // 0x2692c0: 0x3c01c049
    ctx->pc = 0x2692c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2692c4: 0x34210fdb
    ctx->pc = 0x2692c4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2692c8: 0x44810000
    ctx->pc = 0x2692c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2692cc: 0x4600a036
    ctx->pc = 0x2692ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2692d0: 0x0
    ctx->pc = 0x2692d0u;
    // NOP
    // 0x2692d4: 0x45020005
    ctx->pc = 0x2692D4u;
    {
        const bool branch_taken_0x2692d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2692d4) {
            ctx->pc = 0x2692D8u;
            ctx->f[12] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x2692ECu;
            goto label_2692ec;
        }
    }
    ctx->pc = 0x2692DCu;
    // 0x2692dc: 0x3c0140c9
    ctx->pc = 0x2692dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2692e0: 0x34210fdb
    ctx->pc = 0x2692e0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2692e4: 0x44810000
    ctx->pc = 0x2692e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2692e8: 0x4600a300
    ctx->pc = 0x2692e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2692ec:
    // 0x2692ec: 0xc0b9e4a
    ctx->pc = 0x2692ECu;
    SET_GPR_U32(ctx, 31, 0x2692F4u);
    ctx->pc = 0x2692F0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2692F4u; }
    }
    if (ctx->pc != 0x2692F4u) { return; }
    ctx->pc = 0x2692F4u;
    // 0x2692f4: 0x3c100034
    ctx->pc = 0x2692f4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x2692f8: 0xc601fa18
    ctx->pc = 0x2692f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2692fc: 0x46000845
    ctx->pc = 0x2692fcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x269300: 0x46010002
    ctx->pc = 0x269300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x269304: 0xc6210000
    ctx->pc = 0x269304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269308: 0x46010000
    ctx->pc = 0x269308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26930c: 0xe6200000
    ctx->pc = 0x26930cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x269310: 0xc0b9dce
    ctx->pc = 0x269310u;
    SET_GPR_U32(ctx, 31, 0x269318u);
    ctx->pc = 0x269314u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269318u; }
    }
    if (ctx->pc != 0x269318u) { return; }
    ctx->pc = 0x269318u;
    // 0x269318: 0xc601fa18
    ctx->pc = 0x269318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294965784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26931c: 0x46000845
    ctx->pc = 0x26931cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x269320: 0x46010002
    ctx->pc = 0x269320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x269324: 0xc6210008
    ctx->pc = 0x269324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269328: 0x46010000
    ctx->pc = 0x269328u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26932c: 0xe6200008
    ctx->pc = 0x26932cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x269330: 0x3c030034
    ctx->pc = 0x269330u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x269334: 0x24020001
    ctx->pc = 0x269334u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x269338: 0xac62fa04
    ctx->pc = 0x269338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965764), GPR_U32(ctx, 2));
    // 0x26933c: 0xdfbf0020
    ctx->pc = 0x26933cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x269340: 0xdfb10010
    ctx->pc = 0x269340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269344: 0xdfb00000
    ctx->pc = 0x269344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269348: 0xc7b40030
    ctx->pc = 0x269348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26934c: 0x3e00008
    ctx->pc = 0x26934Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269350u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x269284u: goto label_269284;
            case 0x269294u: goto label_269294;
            case 0x2692C0u: goto label_2692c0;
            case 0x2692ECu: goto label_2692ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x269354u;
}
