#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ServeFireScroll
// Address: 0x229160 - 0x2292bc
void ServeFireScroll_0x229160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x229160u;

    // 0x229160: 0x27bdffc0
    ctx->pc = 0x229160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x229164: 0xffbf0030
    ctx->pc = 0x229164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x229168: 0xffb20020
    ctx->pc = 0x229168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22916c: 0xffb10010
    ctx->pc = 0x22916cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x229170: 0xffb00000
    ctx->pc = 0x229170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x229174: 0x3c020032
    ctx->pc = 0x229174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229178: 0x8c420ac0
    ctx->pc = 0x229178u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2752)));
    // 0x22917c: 0x14400003
    ctx->pc = 0x22917Cu;
    {
        const bool branch_taken_0x22917c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x229180u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x22917c) {
            ctx->pc = 0x22918Cu;
            goto label_22918c;
        }
    }
    ctx->pc = 0x229184u;
    // 0x229184: 0x10000047
    ctx->pc = 0x229184u;
    {
        const bool branch_taken_0x229184 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x229188u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x229184) {
            ctx->pc = 0x2292A4u;
            goto label_2292a4;
        }
    }
    ctx->pc = 0x22918Cu;
label_22918c:
    // 0x22918c: 0xdc420e28
    ctx->pc = 0x22918cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x229190: 0x30420008
    ctx->pc = 0x229190u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x229194: 0x10400010
    ctx->pc = 0x229194u;
    {
        const bool branch_taken_0x229194 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x229198u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x229194) {
            ctx->pc = 0x2291D8u;
            goto label_2291d8;
        }
    }
    ctx->pc = 0x22919Cu;
    // 0x22919c: 0x8c421b38
    ctx->pc = 0x22919cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6968)));
    // 0x2291a0: 0x3c030200
    ctx->pc = 0x2291a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x2291a4: 0x431024
    ctx->pc = 0x2291a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2291a8: 0x14400007
    ctx->pc = 0x2291A8u;
    {
        const bool branch_taken_0x2291a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2291ACu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x2291a8) {
            ctx->pc = 0x2291C8u;
            goto label_2291c8;
        }
    }
    ctx->pc = 0x2291B0u;
    // 0x2291b0: 0x3c020031
    ctx->pc = 0x2291b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2291b4: 0x8c421b20
    ctx->pc = 0x2291b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6944)));
    // 0x2291b8: 0x3c030100
    ctx->pc = 0x2291b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x2291bc: 0x431024
    ctx->pc = 0x2291bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2291c0: 0x1040000b
    ctx->pc = 0x2291C0u;
    {
        const bool branch_taken_0x2291c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2291C4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x2291c0) {
            ctx->pc = 0x2291F0u;
            goto label_2291f0;
        }
    }
    ctx->pc = 0x2291C8u;
label_2291c8:
    // 0x2291c8: 0x8c621898
    ctx->pc = 0x2291c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 6296)));
    // 0x2291cc: 0x24420002
    ctx->pc = 0x2291ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x2291d0: 0x10000007
    ctx->pc = 0x2291D0u;
    {
        const bool branch_taken_0x2291d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2291D4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 6296), GPR_U32(ctx, 2));
        if (branch_taken_0x2291d0) {
            ctx->pc = 0x2291F0u;
            goto label_2291f0;
        }
    }
    ctx->pc = 0x2291D8u;
label_2291d8:
    // 0x2291d8: 0x3c04003c
    ctx->pc = 0x2291d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2291dc: 0x3c030031
    ctx->pc = 0x2291dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2291e0: 0x8c821898
    ctx->pc = 0x2291e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 6296)));
    // 0x2291e4: 0x8c63ffc0
    ctx->pc = 0x2291e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967232)));
    // 0x2291e8: 0x431021
    ctx->pc = 0x2291e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2291ec: 0xac821898
    ctx->pc = 0x2291ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6296), GPR_U32(ctx, 2));
label_2291f0:
    // 0x2291f0: 0x3c02003c
    ctx->pc = 0x2291f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2291f4: 0x8c421898
    ctx->pc = 0x2291f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6296)));
    // 0x2291f8: 0x29043
    ctx->pc = 0x2291f8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2291fc: 0x2a420015
    ctx->pc = 0x2291fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 21));
    // 0x229200: 0x14400005
    ctx->pc = 0x229200u;
    {
        const bool branch_taken_0x229200 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x229204u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x229200) {
            ctx->pc = 0x229218u;
            goto label_229218;
        }
    }
    ctx->pc = 0x229208u;
    // 0x229208: 0xc08a42c
    ctx->pc = 0x229208u;
    SET_GPR_U32(ctx, 31, 0x229210u);
    ctx->pc = 0x2290B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EndFireScroll_0x2290b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229210u; }
    }
    if (ctx->pc != 0x229210u) { return; }
    ctx->pc = 0x229210u;
    // 0x229210: 0x10000024
    ctx->pc = 0x229210u;
    {
        const bool branch_taken_0x229210 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x229214u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x229210) {
            ctx->pc = 0x2292A4u;
            goto label_2292a4;
        }
    }
    ctx->pc = 0x229218u;
label_229218:
    // 0x229218: 0x8c421890
    ctx->pc = 0x229218u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6288)));
    // 0x22921c: 0x2428821
    ctx->pc = 0x22921cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x229220: 0x3c020032
    ctx->pc = 0x229220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229224: 0x24500ac0
    ctx->pc = 0x229224u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 2752));
    // 0x229228: 0x8c440ac0
    ctx->pc = 0x229228u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2752)));
    // 0x22922c: 0x220282d
    ctx->pc = 0x22922cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229230: 0xc0b0ed6
    ctx->pc = 0x229230u;
    SET_GPR_U32(ctx, 31, 0x229238u);
    ctx->pc = 0x229234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229238u; }
    }
    if (ctx->pc != 0x229238u) { return; }
    ctx->pc = 0x229238u;
    // 0x229238: 0x8e040004
    ctx->pc = 0x229238u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22923c: 0x10800003
    ctx->pc = 0x22923Cu;
    {
        const bool branch_taken_0x22923c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x229240u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22923c) {
            ctx->pc = 0x22924Cu;
            goto label_22924c;
        }
    }
    ctx->pc = 0x229244u;
    // 0x229244: 0xc0b0ed6
    ctx->pc = 0x229244u;
    SET_GPR_U32(ctx, 31, 0x22924Cu);
    ctx->pc = 0x229248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22924Cu; }
    }
    if (ctx->pc != 0x22924Cu) { return; }
    ctx->pc = 0x22924Cu;
label_22924c:
    // 0x22924c: 0x3c02003c
    ctx->pc = 0x22924cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x229250: 0x8c421894
    ctx->pc = 0x229250u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6292)));
    // 0x229254: 0x2428821
    ctx->pc = 0x229254u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x229258: 0x3c020032
    ctx->pc = 0x229258u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22925c: 0x24500ab8
    ctx->pc = 0x22925cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 2744));
    // 0x229260: 0x8c440ab8
    ctx->pc = 0x229260u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 2744)));
    // 0x229264: 0x220282d
    ctx->pc = 0x229264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229268: 0xc0b0ed6
    ctx->pc = 0x229268u;
    SET_GPR_U32(ctx, 31, 0x229270u);
    ctx->pc = 0x22926Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229270u; }
    }
    if (ctx->pc != 0x229270u) { return; }
    ctx->pc = 0x229270u;
    // 0x229270: 0x8e040004
    ctx->pc = 0x229270u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x229274: 0x10800003
    ctx->pc = 0x229274u;
    {
        const bool branch_taken_0x229274 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x229278u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x229274) {
            ctx->pc = 0x229284u;
            goto label_229284;
        }
    }
    ctx->pc = 0x22927Cu;
    // 0x22927c: 0xc0b0ed6
    ctx->pc = 0x22927Cu;
    SET_GPR_U32(ctx, 31, 0x229284u);
    ctx->pc = 0x229280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229284u; }
    }
    if (ctx->pc != 0x229284u) { return; }
    ctx->pc = 0x229284u;
label_229284:
    // 0x229284: 0x3c020031
    ctx->pc = 0x229284u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x229288: 0xdc420e28
    ctx->pc = 0x229288u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x22928c: 0x30420008
    ctx->pc = 0x22928cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
    // 0x229290: 0x14400004
    ctx->pc = 0x229290u;
    {
        const bool branch_taken_0x229290 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x229294u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x229290) {
            ctx->pc = 0x2292A4u;
            goto label_2292a4;
        }
    }
    ctx->pc = 0x229298u;
    // 0x229298: 0xc0816cc
    ctx->pc = 0x229298u;
    SET_GPR_U32(ctx, 31, 0x2292A0u);
    ctx->pc = 0x22929Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x205B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearAllPlayerControls_0x205b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2292A0u; }
    }
    if (ctx->pc != 0x2292A0u) { return; }
    ctx->pc = 0x2292A0u;
    // 0x2292a0: 0x24020001
    ctx->pc = 0x2292a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2292a4:
    // 0x2292a4: 0xdfbf0030
    ctx->pc = 0x2292a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2292a8: 0xdfb20020
    ctx->pc = 0x2292a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2292ac: 0xdfb10010
    ctx->pc = 0x2292acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2292b0: 0xdfb00000
    ctx->pc = 0x2292b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2292b4: 0x3e00008
    ctx->pc = 0x2292B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2292B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22918Cu: goto label_22918c;
            case 0x2291C8u: goto label_2291c8;
            case 0x2291D8u: goto label_2291d8;
            case 0x2291F0u: goto label_2291f0;
            case 0x229218u: goto label_229218;
            case 0x22924Cu: goto label_22924c;
            case 0x229284u: goto label_229284;
            case 0x2292A4u: goto label_2292a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2292BCu;
}
