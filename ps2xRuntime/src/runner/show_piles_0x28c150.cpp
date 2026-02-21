#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: show_piles
// Address: 0x28c150 - 0x28c450
void show_piles_0x28c150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28c150u;

    // 0x28c150: 0x27bdff20
    ctx->pc = 0x28c150u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x28c154: 0xffbf00c0
    ctx->pc = 0x28c154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x28c158: 0xffbe00b0
    ctx->pc = 0x28c158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x28c15c: 0xffb700a0
    ctx->pc = 0x28c15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x28c160: 0xffb60090
    ctx->pc = 0x28c160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x28c164: 0xffb50080
    ctx->pc = 0x28c164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x28c168: 0xffb40070
    ctx->pc = 0x28c168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x28c16c: 0xffb30060
    ctx->pc = 0x28c16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x28c170: 0xffb20050
    ctx->pc = 0x28c170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x28c174: 0xffb10040
    ctx->pc = 0x28c174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x28c178: 0xffb00030
    ctx->pc = 0x28c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x28c17c: 0xe7b500d8
    ctx->pc = 0x28c17cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x28c180: 0xe7b400d0
    ctx->pc = 0x28c180u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x28c184: 0xafa00020
    ctx->pc = 0x28c184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x28c188: 0x3c020031
    ctx->pc = 0x28c188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28c18c: 0x8c43ffbc
    ctx->pc = 0x28c18cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x28c190: 0x31042
    ctx->pc = 0x28c190u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 1));
    // 0x28c194: 0x431021
    ctx->pc = 0x28c194u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28c198: 0xafa20024
    ctx->pc = 0x28c198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x28c19c: 0x3c020035
    ctx->pc = 0x28c19cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28c1a0: 0x2442b3f0
    ctx->pc = 0x28c1a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947824));
    // 0x28c1a4: 0x41880
    ctx->pc = 0x28c1a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x28c1a8: 0x621021
    ctx->pc = 0x28c1a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c1ac: 0x8c420000
    ctx->pc = 0x28c1acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c1b0: 0xafa20028
    ctx->pc = 0x28c1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x28c1b4: 0x3c020035
    ctx->pc = 0x28c1b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28c1b8: 0x2442b3e0
    ctx->pc = 0x28c1b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947808));
    // 0x28c1bc: 0x621821
    ctx->pc = 0x28c1bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c1c0: 0x8c750000
    ctx->pc = 0x28c1c0u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c1c4: 0x982d
    ctx->pc = 0x28c1c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1c8: 0x3c02003c
    ctx->pc = 0x28c1c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28c1cc: 0x245e3e80
    ctx->pc = 0x28c1ccu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 16000));
    // 0x28c1d0: 0x2402000c
    ctx->pc = 0x28c1d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x28c1d4: 0x82a018
    ctx->pc = 0x28c1d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c1d8: 0x24020018
    ctx->pc = 0x28c1d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28c1dc: 0x821818
    ctx->pc = 0x28c1dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c1e0: 0xafa3002c
    ctx->pc = 0x28c1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x28c1e4: 0x3c02003c
    ctx->pc = 0x28c1e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28c1e8: 0x24573e20
    ctx->pc = 0x28c1e8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 15904));
    // 0x28c1ec: 0x4480a800
    ctx->pc = 0x28c1ecu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 0);
    // 0x28c1f0: 0x131880
    ctx->pc = 0x28c1f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x28c1f4: 0x0
    ctx->pc = 0x28c1f4u;
    // NOP
label_28c1f8:
    // 0x28c1f8: 0x741821
    ctx->pc = 0x28c1f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x28c1fc: 0x7e1021
    ctx->pc = 0x28c1fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x28c200: 0x8c420000
    ctx->pc = 0x28c200u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c204: 0x21080
    ctx->pc = 0x28c204u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x28c208: 0x8fa4002c
    ctx->pc = 0x28c208u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x28c20c: 0x441021
    ctx->pc = 0x28c20cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28c210: 0x3c040035
    ctx->pc = 0x28c210u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x28c214: 0x2484b4c8
    ctx->pc = 0x28c214u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948040));
    // 0x28c218: 0x441021
    ctx->pc = 0x28c218u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28c21c: 0x8c520000
    ctx->pc = 0x28c21cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c220: 0x771021
    ctx->pc = 0x28c220u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x28c224: 0x8c510000
    ctx->pc = 0x28c224u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c228: 0x3c02003c
    ctx->pc = 0x28c228u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28c22c: 0x24423df0
    ctx->pc = 0x28c22cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15856));
    // 0x28c230: 0x621821
    ctx->pc = 0x28c230u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c234: 0x8c700000
    ctx->pc = 0x28c234u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c238: 0x8fa30020
    ctx->pc = 0x28c238u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c23c: 0x10600006
    ctx->pc = 0x28C23Cu;
    {
        const bool branch_taken_0x28c23c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C240u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28c23c) {
            ctx->pc = 0x28C258u;
            goto label_28c258;
        }
    }
    ctx->pc = 0x28C244u;
    // 0x28c244: 0x240202d
    ctx->pc = 0x28c244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c248: 0xc0b0ce8
    ctx->pc = 0x28C248u;
    SET_GPR_U32(ctx, 31, 0x28C250u);
    ctx->pc = 0x28C24Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C250u; }
    }
    if (ctx->pc != 0x28C250u) { return; }
    ctx->pc = 0x28C250u;
    // 0x28c250: 0x10000029
    ctx->pc = 0x28C250u;
    {
        const bool branch_taken_0x28c250 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C254u;
        SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x28c250) {
            ctx->pc = 0x28C2F8u;
            goto label_28c2f8;
        }
    }
    ctx->pc = 0x28C258u;
label_28c258:
    // 0x28c258: 0x240202d
    ctx->pc = 0x28c258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c25c: 0xc0b0ce8
    ctx->pc = 0x28C25Cu;
    SET_GPR_U32(ctx, 31, 0x28C264u);
    ctx->pc = 0x28C260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C264u; }
    }
    if (ctx->pc != 0x28C264u) { return; }
    ctx->pc = 0x28C264u;
    // 0x28c264: 0x230102a
    ctx->pc = 0x28c264u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
    // 0x28c268: 0x10400008
    ctx->pc = 0x28C268u;
    {
        const bool branch_taken_0x28c268 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C26Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x28c268) {
            ctx->pc = 0x28C28Cu;
            goto label_28c28c;
        }
    }
    ctx->pc = 0x28C270u;
    // 0x28c270: 0x2248821
    ctx->pc = 0x28c270u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x28c274: 0x211102a
    ctx->pc = 0x28c274u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x28c278: 0x202880b
    ctx->pc = 0x28c278u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 16));
    // 0x28c27c: 0x26620001
    ctx->pc = 0x28c27cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 1));
    // 0x28c280: 0xafa20020
    ctx->pc = 0x28c280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x28c284: 0x10000002
    ctx->pc = 0x28C284u;
    {
        const bool branch_taken_0x28c284 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C288u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x28c284) {
            ctx->pc = 0x28C290u;
            goto label_28c290;
        }
    }
    ctx->pc = 0x28C28Cu;
label_28c28c:
    // 0x28c28c: 0x200882d
    ctx->pc = 0x28c28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c290:
    // 0x28c290: 0x4491a000
    ctx->pc = 0x28c290u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 17);
    // 0x28c294: 0x4680a520
    ctx->pc = 0x28c294u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x28c298: 0x3c013b80
    ctx->pc = 0x28c298u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x28c29c: 0x44810000
    ctx->pc = 0x28c29cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x28c2a0: 0x4600a502
    ctx->pc = 0x28c2a0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x28c2a4: 0x3c020035
    ctx->pc = 0x28c2a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28c2a8: 0x8c45b454
    ctx->pc = 0x28c2a8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294947924)));
    // 0x28c2ac: 0x240202d
    ctx->pc = 0x28c2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2b0: 0xc0b0dc6
    ctx->pc = 0x28C2B0u;
    SET_GPR_U32(ctx, 31, 0x28C2B8u);
    ctx->pc = 0x28C2B4u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->pc = 0x2C3718u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetY_0x2c3718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C2B8u; }
    }
    if (ctx->pc != 0x28C2B8u) { return; }
    ctx->pc = 0x28C2B8u;
    // 0x28c2b8: 0x240202d
    ctx->pc = 0x28c2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2bc: 0x282d
    ctx->pc = 0x28c2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2c0: 0xc0b0cf6
    ctx->pc = 0x28C2C0u;
    SET_GPR_U32(ctx, 31, 0x28C2C8u);
    ctx->pc = 0x28C2C4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C2C8u; }
    }
    if (ctx->pc != 0x28C2C8u) { return; }
    ctx->pc = 0x28C2C8u;
    // 0x28c2c8: 0x240202d
    ctx->pc = 0x28c2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2cc: 0x4600ab06
    ctx->pc = 0x28c2ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x28c2d0: 0x3c013f80
    ctx->pc = 0x28c2d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x28c2d4: 0x44816800
    ctx->pc = 0x28c2d4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x28c2d8: 0x4600ab86
    ctx->pc = 0x28c2d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x28c2dc: 0xc0b0e6a
    ctx->pc = 0x28C2DCu;
    SET_GPR_U32(ctx, 31, 0x28C2E4u);
    ctx->pc = 0x28C2E0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2C39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetCrop_0x2c39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C2E4u; }
    }
    if (ctx->pc != 0x28C2E4u) { return; }
    ctx->pc = 0x28C2E4u;
    // 0x28c2e4: 0x131080
    ctx->pc = 0x28c2e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 2));
    // 0x28c2e8: 0x541021
    ctx->pc = 0x28c2e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x28c2ec: 0x571021
    ctx->pc = 0x28c2ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x28c2f0: 0xac510000
    ctx->pc = 0x28c2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x28c2f4: 0x133880
    ctx->pc = 0x28c2f4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 19), 2));
label_28c2f8:
    // 0x28c2f8: 0xf43821
    ctx->pc = 0x28c2f8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x28c2fc: 0xfe1021
    ctx->pc = 0x28c2fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 30)));
    // 0x28c300: 0x8c430000
    ctx->pc = 0x28c300u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c304: 0x31880
    ctx->pc = 0x28c304u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x28c308: 0x3c040035
    ctx->pc = 0x28c308u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x28c30c: 0x2484b430
    ctx->pc = 0x28c30cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294947888));
    // 0x28c310: 0x641021
    ctx->pc = 0x28c310u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28c314: 0x8c500000
    ctx->pc = 0x28c314u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c318: 0x3c020035
    ctx->pc = 0x28c318u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28c31c: 0x2442b420
    ctx->pc = 0x28c31cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947872));
    // 0x28c320: 0x621821
    ctx->pc = 0x28c320u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c324: 0x3c02003c
    ctx->pc = 0x28c324u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28c328: 0x24423e50
    ctx->pc = 0x28c328u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15952));
    // 0x28c32c: 0xe23821
    ctx->pc = 0x28c32cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x28c330: 0x3a0202d
    ctx->pc = 0x28c330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c334: 0x3c05003b
    ctx->pc = 0x28c334u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x28c338: 0x24a5da28
    ctx->pc = 0x28c338u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957608));
    // 0x28c33c: 0x8c660000
    ctx->pc = 0x28c33cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c340: 0xc0b6252
    ctx->pc = 0x28C340u;
    SET_GPR_U32(ctx, 31, 0x28C348u);
    ctx->pc = 0x28C344u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C348u; }
    }
    if (ctx->pc != 0x28C348u) { return; }
    ctx->pc = 0x28C348u;
    // 0x28c348: 0x12c00008
    ctx->pc = 0x28C348u;
    {
        const bool branch_taken_0x28c348 = (GPR_U32(ctx, 22) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C34Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 16));
        if (branch_taken_0x28c348) {
            ctx->pc = 0x28C36Cu;
            goto label_28c36c;
        }
    }
    ctx->pc = 0x28C350u;
    // 0x28c350: 0x200282d
    ctx->pc = 0x28c350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c354: 0x3c013f00
    ctx->pc = 0x28c354u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x28c358: 0x44816000
    ctx->pc = 0x28c358u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28c35c: 0xc080a9a
    ctx->pc = 0x28C35Cu;
    SET_GPR_U32(ctx, 31, 0x28C364u);
    ctx->pc = 0x28C360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C364u; }
    }
    if (ctx->pc != 0x28C364u) { return; }
    ctx->pc = 0x28C364u;
    // 0x28c364: 0x1000000a
    ctx->pc = 0x28C364u;
    {
        const bool branch_taken_0x28c364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C368u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x28c364) {
            ctx->pc = 0x28C390u;
            goto label_28c390;
        }
    }
    ctx->pc = 0x28C36Cu;
label_28c36c:
    // 0x28c36c: 0x200282d
    ctx->pc = 0x28c36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c370: 0x24060006
    ctx->pc = 0x28c370u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28c374: 0x3c0700ff
    ctx->pc = 0x28c374u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x28c378: 0x34e7ffff
    ctx->pc = 0x28c378u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28c37c: 0x3c013f00
    ctx->pc = 0x28c37cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x28c380: 0x44816000
    ctx->pc = 0x28c380u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28c384: 0xc080510
    ctx->pc = 0x28C384u;
    SET_GPR_U32(ctx, 31, 0x28C38Cu);
    ctx->pc = 0x28C388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C38Cu; }
    }
    if (ctx->pc != 0x28C38Cu) { return; }
    ctx->pc = 0x28C38Cu;
    // 0x28c38c: 0x26730001
    ctx->pc = 0x28c38cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_28c390:
    // 0x28c390: 0x2a620003
    ctx->pc = 0x28c390u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 3));
    // 0x28c394: 0x1440ff98
    ctx->pc = 0x28C394u;
    {
        const bool branch_taken_0x28c394 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28C398u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
        if (branch_taken_0x28c394) {
            ctx->pc = 0x28C1F8u;
            goto label_28c1f8;
        }
    }
    ctx->pc = 0x28C39Cu;
    // 0x28c39c: 0x3c020035
    ctx->pc = 0x28c39cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28c3a0: 0x8c50b43c
    ctx->pc = 0x28c3a0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294947900)));
    // 0x28c3a4: 0x8fa20020
    ctx->pc = 0x28c3a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c3a8: 0x14400010
    ctx->pc = 0x28C3A8u;
    {
        const bool branch_taken_0x28c3a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28C3ACu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        if (branch_taken_0x28c3a8) {
            ctx->pc = 0x28C3ECu;
            goto label_28c3ec;
        }
    }
    ctx->pc = 0x28C3B0u;
    // 0x28c3b0: 0x26a40020
    ctx->pc = 0x28c3b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 32));
    // 0x28c3b4: 0x200282d
    ctx->pc = 0x28c3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c3b8: 0x3c013f00
    ctx->pc = 0x28c3b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x28c3bc: 0x44816000
    ctx->pc = 0x28c3bcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28c3c0: 0x3c06003b
    ctx->pc = 0x28c3c0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x28c3c4: 0xc080a9a
    ctx->pc = 0x28C3C4u;
    SET_GPR_U32(ctx, 31, 0x28C3CCu);
    ctx->pc = 0x28C3C8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957616));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C3CCu; }
    }
    if (ctx->pc != 0x28C3CCu) { return; }
    ctx->pc = 0x28C3CCu;
    // 0x28c3cc: 0x3c020038
    ctx->pc = 0x28c3ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x28c3d0: 0x8c44b154
    ctx->pc = 0x28c3d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947156)));
    // 0x28c3d4: 0x26a50010
    ctx->pc = 0x28c3d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 16));
    // 0x28c3d8: 0x2606fffd
    ctx->pc = 0x28c3d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x28c3dc: 0x24070014
    ctx->pc = 0x28c3dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 20));
    // 0x28c3e0: 0xc0b0c6a
    ctx->pc = 0x28C3E0u;
    SET_GPR_U32(ctx, 31, 0x28C3E8u);
    ctx->pc = 0x28C3E4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x2C31A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewTempBlit_0x2c31a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C3E8u; }
    }
    if (ctx->pc != 0x28C3E8u) { return; }
    ctx->pc = 0x28C3E8u;
    // 0x28c3e8: 0x8fa30028
    ctx->pc = 0x28c3e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_28c3ec:
    // 0x28c3ec: 0x32023
    ctx->pc = 0x28c3ecu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x28c3f0: 0x24050008
    ctx->pc = 0x28c3f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x28c3f4: 0x24060006
    ctx->pc = 0x28c3f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x28c3f8: 0x382d
    ctx->pc = 0x28c3f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c3fc: 0x3c013ee6
    ctx->pc = 0x28c3fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16102 << 16));
    // 0x28c400: 0x34216666
    ctx->pc = 0x28c400u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
    // 0x28c404: 0x44816000
    ctx->pc = 0x28c404u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28c408: 0x3c08003b
    ctx->pc = 0x28c408u;
    SET_GPR_U32(ctx, 8, ((uint32_t)59 << 16));
    // 0x28c40c: 0xc080510
    ctx->pc = 0x28C40Cu;
    SET_GPR_U32(ctx, 31, 0x28C414u);
    ctx->pc = 0x28C410u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294957632));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C414u; }
    }
    if (ctx->pc != 0x28C414u) { return; }
    ctx->pc = 0x28C414u;
    // 0x28c414: 0x8fa20020
    ctx->pc = 0x28c414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c418: 0xdfbf00c0
    ctx->pc = 0x28c418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28c41c: 0xdfbe00b0
    ctx->pc = 0x28c41cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28c420: 0xdfb700a0
    ctx->pc = 0x28c420u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28c424: 0xdfb60090
    ctx->pc = 0x28c424u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28c428: 0xdfb50080
    ctx->pc = 0x28c428u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28c42c: 0xdfb40070
    ctx->pc = 0x28c42cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28c430: 0xdfb30060
    ctx->pc = 0x28c430u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28c434: 0xdfb20050
    ctx->pc = 0x28c434u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28c438: 0xdfb10040
    ctx->pc = 0x28c438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28c43c: 0xdfb00030
    ctx->pc = 0x28c43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c440: 0xc7b500d8
    ctx->pc = 0x28c440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28c444: 0xc7b400d0
    ctx->pc = 0x28c444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28c448: 0x3e00008
    ctx->pc = 0x28C448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C44Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28C1F8u: goto label_28c1f8;
            case 0x28C258u: goto label_28c258;
            case 0x28C28Cu: goto label_28c28c;
            case 0x28C290u: goto label_28c290;
            case 0x28C2F8u: goto label_28c2f8;
            case 0x28C36Cu: goto label_28c36c;
            case 0x28C390u: goto label_28c390;
            case 0x28C3ECu: goto label_28c3ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28C450u;
}
