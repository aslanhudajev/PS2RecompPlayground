#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: damagePlayer__10PeopleTaskFv
// Address: 0x20a700 - 0x20a81c
void damagePlayer__10PeopleTaskFv_0x20a700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("damagePlayer__10PeopleTaskFv");


    ctx->pc = 0x20a700u;

    // 0x20a700: 0x27bdfff0
    ctx->pc = 0x20a700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20a704: 0x7fbf0000
    ctx->pc = 0x20a704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20a708: 0x8f878c48
    ctx->pc = 0x20a708u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x20a70c: 0x24030002
    ctx->pc = 0x20a70cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a710: 0x8ce60004
    ctx->pc = 0x20a710u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x20a714: 0x62840
    ctx->pc = 0x20a714u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 1));
    // 0x20a718: 0xa62821
    ctx->pc = 0x20a718u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20a71c: 0x52880
    ctx->pc = 0x20a71cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20a720: 0xa62821
    ctx->pc = 0x20a720u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20a724: 0x52900
    ctx->pc = 0x20a724u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x20a728: 0xa72821
    ctx->pc = 0x20a728u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x20a72c: 0x80a500d2
    ctx->pc = 0x20a72cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 210)));
    // 0x20a730: 0x14a30037
    ctx->pc = 0x20A730u;
    {
        const bool branch_taken_0x20a730 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x20a730) {
            ctx->pc = 0x20A810u;
            goto label_20a810;
        }
    }
    ctx->pc = 0x20A738u;
    // 0x20a738: 0xc48102e8
    ctx->pc = 0x20a738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a73c: 0x3c05c120
    ctx->pc = 0x20a73cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)49440 << 16));
    // 0x20a740: 0x44850000
    ctx->pc = 0x20a740u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x20a744: 0x0
    ctx->pc = 0x20a744u;
    // NOP
    // 0x20a748: 0x46000836
    ctx->pc = 0x20a748u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a74c: 0x0
    ctx->pc = 0x20a74cu;
    // NOP
    // 0x20a750: 0x45010011
    ctx->pc = 0x20A750u;
    {
        const bool branch_taken_0x20a750 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A754u;
        SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x20a750) {
            ctx->pc = 0x20A798u;
            goto label_20a798;
        }
    }
    ctx->pc = 0x20A758u;
    // 0x20a758: 0x3c010050
    ctx->pc = 0x20a758u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20a75c: 0x8425e3e8
    ctx->pc = 0x20a75cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960104)));
    // 0x20a760: 0x24030001
    ctx->pc = 0x20a760u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a764: 0x14a30003
    ctx->pc = 0x20A764u;
    {
        const bool branch_taken_0x20a764 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x20a764) {
            ctx->pc = 0x20A774u;
            goto label_20a774;
        }
    }
    ctx->pc = 0x20A76Cu;
    // 0x20a76c: 0x10000009
    ctx->pc = 0x20A76Cu;
    {
        const bool branch_taken_0x20a76c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A770u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937484)));
        if (branch_taken_0x20a76c) {
            ctx->pc = 0x20A794u;
            goto label_20a794;
        }
    }
    ctx->pc = 0x20A774u;
label_20a774:
    // 0x20a774: 0xc48102e0
    ctx->pc = 0x20a774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a778: 0x44800000
    ctx->pc = 0x20a778u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x20a77c: 0x0
    ctx->pc = 0x20a77cu;
    // NOP
    // 0x20a780: 0x46000834
    ctx->pc = 0x20a780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a784: 0x0
    ctx->pc = 0x20a784u;
    // NOP
    // 0x20a788: 0x45000002
    ctx->pc = 0x20A788u;
    {
        const bool branch_taken_0x20a788 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a788) {
            ctx->pc = 0x20A794u;
            goto label_20a794;
        }
    }
    ctx->pc = 0x20A790u;
    // 0x20a790: 0x70001e28
    ctx->pc = 0x20a790u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20a794:
    // 0x20a794: 0x2c610002
    ctx->pc = 0x20a794u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 2));
label_20a798:
    // 0x20a798: 0x1020001d
    ctx->pc = 0x20A798u;
    {
        const bool branch_taken_0x20a798 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A79Cu;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x20a798) {
            ctx->pc = 0x20A810u;
            goto label_20a810;
        }
    }
    ctx->pc = 0x20A7A0u;
    // 0x20a7a0: 0x832823
    ctx->pc = 0x20a7a0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20a7a4: 0x520c0
    ctx->pc = 0x20a7a4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 3));
    // 0x20a7a8: 0x852023
    ctx->pc = 0x20a7a8u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20a7ac: 0x430c0
    ctx->pc = 0x20a7acu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 4), 3));
    // 0x20a7b0: 0x3c040050
    ctx->pc = 0x20a7b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)80 << 16));
    // 0x20a7b4: 0x2484dd24
    ctx->pc = 0x20a7b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958372));
    // 0x20a7b8: 0x862021
    ctx->pc = 0x20a7b8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x20a7bc: 0x8c850000
    ctx->pc = 0x20a7bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a7c0: 0x24040005
    ctx->pc = 0x20a7c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x20a7c4: 0x10a40009
    ctx->pc = 0x20A7C4u;
    {
        const bool branch_taken_0x20a7c4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 4));
        if (branch_taken_0x20a7c4) {
            ctx->pc = 0x20A7ECu;
            goto label_20a7ec;
        }
    }
    ctx->pc = 0x20A7CCu;
    // 0x20a7cc: 0x24040004
    ctx->pc = 0x20a7ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x20a7d0: 0x10a40006
    ctx->pc = 0x20A7D0u;
    {
        const bool branch_taken_0x20a7d0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 4));
        if (branch_taken_0x20a7d0) {
            ctx->pc = 0x20A7ECu;
            goto label_20a7ec;
        }
    }
    ctx->pc = 0x20A7D8u;
    // 0x20a7d8: 0x24040001
    ctx->pc = 0x20a7d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a7dc: 0x10a40003
    ctx->pc = 0x20A7DCu;
    {
        const bool branch_taken_0x20a7dc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 4));
        if (branch_taken_0x20a7dc) {
            ctx->pc = 0x20A7ECu;
            goto label_20a7ec;
        }
    }
    ctx->pc = 0x20A7E4u;
    // 0x20a7e4: 0x1000000b
    ctx->pc = 0x20A7E4u;
    {
        const bool branch_taken_0x20a7e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20A7E8u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x20a7e4) {
            ctx->pc = 0x20A814u;
            goto label_20a814;
        }
    }
    ctx->pc = 0x20A7ECu;
label_20a7ec:
    // 0x20a7ec: 0x3c040050
    ctx->pc = 0x20a7ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)80 << 16));
    // 0x20a7f0: 0x2484dd30
    ctx->pc = 0x20a7f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958384));
    // 0x20a7f4: 0x862021
    ctx->pc = 0x20a7f4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x20a7f8: 0x8c840000
    ctx->pc = 0x20a7f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a7fc: 0x18800004
    ctx->pc = 0x20A7FCu;
    {
        const bool branch_taken_0x20a7fc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x20A800u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20a7fc) {
            ctx->pc = 0x20A810u;
            goto label_20a810;
        }
    }
    ctx->pc = 0x20A804u;
    // 0x20a804: 0x24050001
    ctx->pc = 0x20a804u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a808: 0xc084c6c
    ctx->pc = 0x20A808u;
    SET_GPR_U32(ctx, 31, 0x20A810u);
    ctx->pc = 0x20A80Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x2131B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DecPlayerLife__Fiii_0x2131b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A810u; }
        else if (ctx->pc != 0x20A810u) { ctx->pc = 0x20A810u; }
    }
    if (ctx->pc != 0x20A810u) { return; }
    ctx->pc = 0x20A810u;
label_20a810:
    // 0x20a810: 0x7bbf0000
    ctx->pc = 0x20a810u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20a814:
    // 0x20a814: 0x3e00008
    ctx->pc = 0x20A814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A818u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A774u: goto label_20a774;
            case 0x20A794u: goto label_20a794;
            case 0x20A798u: goto label_20a798;
            case 0x20A7ECu: goto label_20a7ec;
            case 0x20A810u: goto label_20a810;
            case 0x20A814u: goto label_20a814;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A81Cu;
}
