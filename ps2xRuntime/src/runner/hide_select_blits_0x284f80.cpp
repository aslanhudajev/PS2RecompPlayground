#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: hide_select_blits
// Address: 0x284f80 - 0x2850b8
void hide_select_blits_0x284f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x284f80u;

    // 0x284f80: 0x27bdff60
    ctx->pc = 0x284f80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x284f84: 0xffbf0090
    ctx->pc = 0x284f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x284f88: 0xffbe0080
    ctx->pc = 0x284f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x284f8c: 0xffb70070
    ctx->pc = 0x284f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x284f90: 0xffb60060
    ctx->pc = 0x284f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x284f94: 0xffb50050
    ctx->pc = 0x284f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x284f98: 0xffb40040
    ctx->pc = 0x284f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x284f9c: 0xffb30030
    ctx->pc = 0x284f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x284fa0: 0xffb20020
    ctx->pc = 0x284fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x284fa4: 0xffb10010
    ctx->pc = 0x284fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x284fa8: 0xffb00000
    ctx->pc = 0x284fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x284fac: 0x4810004
    ctx->pc = 0x284FACu;
    {
        const bool branch_taken_0x284fac = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x284FB0u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x284fac) {
            ctx->pc = 0x284FC0u;
            goto label_284fc0;
        }
    }
    ctx->pc = 0x284FB4u;
    // 0x284fb4: 0x102d
    ctx->pc = 0x284fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284fb8: 0x10000003
    ctx->pc = 0x284FB8u;
    {
        const bool branch_taken_0x284fb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x284FBCu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x284fb8) {
            ctx->pc = 0x284FC8u;
            goto label_284fc8;
        }
    }
    ctx->pc = 0x284FC0u;
label_284fc0:
    // 0x284fc0: 0x80b02d
    ctx->pc = 0x284fc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284fc4: 0x2c0102d
    ctx->pc = 0x284fc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_284fc8:
    // 0x284fc8: 0x40902d
    ctx->pc = 0x284fc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284fcc: 0x2d2102a
    ctx->pc = 0x284fccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 18)));
    // 0x284fd0: 0x1440002e
    ctx->pc = 0x284FD0u;
    {
        const bool branch_taken_0x284fd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x284FD4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x284fd0) {
            ctx->pc = 0x28508Cu;
            goto label_28508c;
        }
    }
    ctx->pc = 0x284FD8u;
    // 0x284fd8: 0x3c02003c
    ctx->pc = 0x284fd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x284fdc: 0x24543b88
    ctx->pc = 0x284fdcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 15240));
    // 0x284fe0: 0x2413000c
    ctx->pc = 0x284fe0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 12));
    // 0x284fe4: 0x241e0084
    ctx->pc = 0x284fe4u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 132));
    // 0x284fe8: 0x3c02003c
    ctx->pc = 0x284fe8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x284fec: 0x24573b8c
    ctx->pc = 0x284fecu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 15244));
    // 0x284ff0: 0x802d
    ctx->pc = 0x284ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ff4: 0x0
    ctx->pc = 0x284ff4u;
    // NOP
label_284ff8:
    // 0x284ff8: 0x25e8818
    ctx->pc = 0x284ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x284ffc: 0x2131818
    ctx->pc = 0x284ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_285000:
    // 0x285000: 0x711021
    ctx->pc = 0x285000u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x285004: 0x541021
    ctx->pc = 0x285004u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x285008: 0x8c420000
    ctx->pc = 0x285008u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28500c: 0x50400017
    ctx->pc = 0x28500Cu;
    {
        const bool branch_taken_0x28500c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x28500c) {
            ctx->pc = 0x285010u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x28506Cu;
            goto label_28506c;
        }
    }
    ctx->pc = 0x285014u;
    // 0x285014: 0x16a00005
    ctx->pc = 0x285014u;
    {
        const bool branch_taken_0x285014 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x285018u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x285014) {
            ctx->pc = 0x28502Cu;
            goto label_28502c;
        }
    }
    ctx->pc = 0x28501Cu;
    // 0x28501c: 0x2602fffe
    ctx->pc = 0x28501cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x285020: 0x2c420007
    ctx->pc = 0x285020u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 7));
    // 0x285024: 0x10400008
    ctx->pc = 0x285024u;
    {
        const bool branch_taken_0x285024 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x285028u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        if (branch_taken_0x285024) {
            ctx->pc = 0x285048u;
            goto label_285048;
        }
    }
    ctx->pc = 0x28502Cu;
label_28502c:
    // 0x28502c: 0x711021
    ctx->pc = 0x28502cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x285030: 0x541021
    ctx->pc = 0x285030u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x285034: 0x8c440000
    ctx->pc = 0x285034u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285038: 0xc0b0ce8
    ctx->pc = 0x285038u;
    SET_GPR_U32(ctx, 31, 0x285040u);
    ctx->pc = 0x28503Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285040u; }
    }
    if (ctx->pc != 0x285040u) { return; }
    ctx->pc = 0x285040u;
    // 0x285040: 0x10000006
    ctx->pc = 0x285040u;
    {
        const bool branch_taken_0x285040 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x285044u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x285040) {
            ctx->pc = 0x28505Cu;
            goto label_28505c;
        }
    }
    ctx->pc = 0x285048u;
label_285048:
    // 0x285048: 0x541021
    ctx->pc = 0x285048u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x28504c: 0x8c440000
    ctx->pc = 0x28504cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285050: 0xc0b0ce8
    ctx->pc = 0x285050u;
    SET_GPR_U32(ctx, 31, 0x285058u);
    ctx->pc = 0x285054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285058u; }
    }
    if (ctx->pc != 0x285058u) { return; }
    ctx->pc = 0x285058u;
    // 0x285058: 0x2131818
    ctx->pc = 0x285058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_28505c:
    // 0x28505c: 0x711021
    ctx->pc = 0x28505cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x285060: 0x571021
    ctx->pc = 0x285060u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x285064: 0xac400000
    ctx->pc = 0x285064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x285068: 0x26100001
    ctx->pc = 0x285068u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_28506c:
    // 0x28506c: 0x2a02000b
    ctx->pc = 0x28506cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 11));
    // 0x285070: 0x5440ffe3
    ctx->pc = 0x285070u;
    {
        const bool branch_taken_0x285070 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x285070) {
            ctx->pc = 0x285074u;
            { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
            ctx->pc = 0x285000u;
            goto label_285000;
        }
    }
    ctx->pc = 0x285078u;
    // 0x285078: 0x26520001
    ctx->pc = 0x285078u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x28507c: 0x2d2102a
    ctx->pc = 0x28507cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), GPR_S32(ctx, 18)));
    // 0x285080: 0x1040ffdd
    ctx->pc = 0x285080u;
    {
        const bool branch_taken_0x285080 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x285084u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x285080) {
            ctx->pc = 0x284FF8u;
            goto label_284ff8;
        }
    }
    ctx->pc = 0x285088u;
    // 0x285088: 0xdfbf0090
    ctx->pc = 0x285088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_28508c:
    // 0x28508c: 0xdfbe0080
    ctx->pc = 0x28508cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x285090: 0xdfb70070
    ctx->pc = 0x285090u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x285094: 0xdfb60060
    ctx->pc = 0x285094u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x285098: 0xdfb50050
    ctx->pc = 0x285098u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28509c: 0xdfb40040
    ctx->pc = 0x28509cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2850a0: 0xdfb30030
    ctx->pc = 0x2850a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2850a4: 0xdfb20020
    ctx->pc = 0x2850a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2850a8: 0xdfb10010
    ctx->pc = 0x2850a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2850ac: 0xdfb00000
    ctx->pc = 0x2850acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2850b0: 0x3e00008
    ctx->pc = 0x2850B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2850B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284FC0u: goto label_284fc0;
            case 0x284FC8u: goto label_284fc8;
            case 0x284FF8u: goto label_284ff8;
            case 0x285000u: goto label_285000;
            case 0x28502Cu: goto label_28502c;
            case 0x285048u: goto label_285048;
            case 0x28505Cu: goto label_28505c;
            case 0x28506Cu: goto label_28506c;
            case 0x28508Cu: goto label_28508c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2850B8u;
}
