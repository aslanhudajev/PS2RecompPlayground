#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TransHorz
// Address: 0x2690b8 - 0x2691d0
void TransHorz_0x2690b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2690b8u;

    // 0x2690b8: 0x27bdffc0
    ctx->pc = 0x2690b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2690bc: 0xffbf0020
    ctx->pc = 0x2690bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2690c0: 0xffb10010
    ctx->pc = 0x2690c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2690c4: 0xffb00000
    ctx->pc = 0x2690c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2690c8: 0xe7b40030
    ctx->pc = 0x2690c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2690cc: 0x46006506
    ctx->pc = 0x2690ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2690d0: 0x3c020034
    ctx->pc = 0x2690d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2690d4: 0xc441fa14
    ctx->pc = 0x2690d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2690d8: 0x44800000
    ctx->pc = 0x2690d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2690dc: 0x46010034
    ctx->pc = 0x2690dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2690e0: 0x0
    ctx->pc = 0x2690e0u;
    // NOP
    // 0x2690e4: 0x45000006
    ctx->pc = 0x2690E4u;
    {
        const bool branch_taken_0x2690e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2690E8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2690e4) {
            ctx->pc = 0x269100u;
            goto label_269100;
        }
    }
    ctx->pc = 0x2690ECu;
    // 0x2690ec: 0x3c013fc9
    ctx->pc = 0x2690ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x2690f0: 0x34210fdb
    ctx->pc = 0x2690f0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2690f4: 0x44810000
    ctx->pc = 0x2690f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2690f8: 0x10000005
    ctx->pc = 0x2690F8u;
    {
        const bool branch_taken_0x2690f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2690FCu;
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x2690f8) {
            ctx->pc = 0x269110u;
            goto label_269110;
        }
    }
    ctx->pc = 0x269100u;
label_269100:
    // 0x269100: 0x3c013fc9
    ctx->pc = 0x269100u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x269104: 0x34210fdb
    ctx->pc = 0x269104u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x269108: 0x44810000
    ctx->pc = 0x269108u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26910c: 0x4600a500
    ctx->pc = 0x26910cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_269110:
    // 0x269110: 0x3c014049
    ctx->pc = 0x269110u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x269114: 0x34210fdb
    ctx->pc = 0x269114u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x269118: 0x44810000
    ctx->pc = 0x269118u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26911c: 0x46140034
    ctx->pc = 0x26911cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269120: 0x45000006
    ctx->pc = 0x269120u;
    {
        const bool branch_taken_0x269120 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x269120) {
            ctx->pc = 0x26913Cu;
            goto label_26913c;
        }
    }
    ctx->pc = 0x269128u;
    // 0x269128: 0x3c0140c9
    ctx->pc = 0x269128u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26912c: 0x34210fdb
    ctx->pc = 0x26912cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x269130: 0x44810000
    ctx->pc = 0x269130u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x269134: 0x1000000c
    ctx->pc = 0x269134u;
    {
        const bool branch_taken_0x269134 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x269138u;
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x269134) {
            ctx->pc = 0x269168u;
            goto label_269168;
        }
    }
    ctx->pc = 0x26913Cu;
label_26913c:
    // 0x26913c: 0x3c01c049
    ctx->pc = 0x26913cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x269140: 0x34210fdb
    ctx->pc = 0x269140u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x269144: 0x44810000
    ctx->pc = 0x269144u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x269148: 0x4600a036
    ctx->pc = 0x269148u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26914c: 0x0
    ctx->pc = 0x26914cu;
    // NOP
    // 0x269150: 0x45020005
    ctx->pc = 0x269150u;
    {
        const bool branch_taken_0x269150 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x269150) {
            ctx->pc = 0x269154u;
            ctx->f[12] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x269168u;
            goto label_269168;
        }
    }
    ctx->pc = 0x269158u;
    // 0x269158: 0x3c0140c9
    ctx->pc = 0x269158u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26915c: 0x34210fdb
    ctx->pc = 0x26915cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x269160: 0x44810000
    ctx->pc = 0x269160u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x269164: 0x4600a300
    ctx->pc = 0x269164u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_269168:
    // 0x269168: 0xc0b9e4a
    ctx->pc = 0x269168u;
    SET_GPR_U32(ctx, 31, 0x269170u);
    ctx->pc = 0x26916Cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269170u; }
    }
    if (ctx->pc != 0x269170u) { return; }
    ctx->pc = 0x269170u;
    // 0x269170: 0x3c100034
    ctx->pc = 0x269170u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x269174: 0xc601fa14
    ctx->pc = 0x269174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294965780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269178: 0x46000845
    ctx->pc = 0x269178u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x26917c: 0x46010002
    ctx->pc = 0x26917cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x269180: 0xc6210000
    ctx->pc = 0x269180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269184: 0x46010000
    ctx->pc = 0x269184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x269188: 0xe6200000
    ctx->pc = 0x269188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x26918c: 0xc0b9dce
    ctx->pc = 0x26918Cu;
    SET_GPR_U32(ctx, 31, 0x269194u);
    ctx->pc = 0x269190u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269194u; }
    }
    if (ctx->pc != 0x269194u) { return; }
    ctx->pc = 0x269194u;
    // 0x269194: 0xc601fa14
    ctx->pc = 0x269194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294965780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269198: 0x46000845
    ctx->pc = 0x269198u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x26919c: 0x46010002
    ctx->pc = 0x26919cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2691a0: 0xc6210008
    ctx->pc = 0x2691a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2691a4: 0x46010000
    ctx->pc = 0x2691a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2691a8: 0xe6200008
    ctx->pc = 0x2691a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2691ac: 0x3c030034
    ctx->pc = 0x2691acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2691b0: 0x24020001
    ctx->pc = 0x2691b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2691b4: 0xac62fa04
    ctx->pc = 0x2691b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965764), GPR_U32(ctx, 2));
    // 0x2691b8: 0xdfbf0020
    ctx->pc = 0x2691b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2691bc: 0xdfb10010
    ctx->pc = 0x2691bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2691c0: 0xdfb00000
    ctx->pc = 0x2691c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2691c4: 0xc7b40030
    ctx->pc = 0x2691c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2691c8: 0x3e00008
    ctx->pc = 0x2691C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2691CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x269100u: goto label_269100;
            case 0x269110u: goto label_269110;
            case 0x26913Cu: goto label_26913c;
            case 0x269168u: goto label_269168;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2691D0u;
}
