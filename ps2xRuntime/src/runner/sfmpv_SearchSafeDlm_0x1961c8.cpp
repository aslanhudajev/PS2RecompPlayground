#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_SearchSafeDlm
// Address: 0x1961c8 - 0x196344
void sfmpv_SearchSafeDlm_0x1961c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_SearchSafeDlm");


    ctx->pc = 0x1961c8u;

    // 0x1961c8: 0x27bdff60
    ctx->pc = 0x1961c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1961cc: 0xffb50050
    ctx->pc = 0x1961ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1961d0: 0xffbf0090
    ctx->pc = 0x1961d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1961d4: 0xc0a82d
    ctx->pc = 0x1961d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1961d8: 0xffbe0080
    ctx->pc = 0x1961d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1961dc: 0xffb70070
    ctx->pc = 0x1961dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1961e0: 0xffb60060
    ctx->pc = 0x1961e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1961e4: 0xffb40040
    ctx->pc = 0x1961e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1961e8: 0xffb30030
    ctx->pc = 0x1961e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1961ec: 0xffb20020
    ctx->pc = 0x1961ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1961f0: 0xffb10010
    ctx->pc = 0x1961f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1961f4: 0xffb00000
    ctx->pc = 0x1961f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1961f8: 0x8ea20000
    ctx->pc = 0x1961f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1961fc: 0x8ca30004
    ctx->pc = 0x1961fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x196200: 0x10400005
    ctx->pc = 0x196200u;
    {
        const bool branch_taken_0x196200 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x196204u;
        SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        if (branch_taken_0x196200) {
            ctx->pc = 0x196218u;
            goto label_196218;
        }
    }
    ctx->pc = 0x196208u;
    // 0x196208: 0x541023
    ctx->pc = 0x196208u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x19620c: 0x28420005
    ctx->pc = 0x19620cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 5));
    // 0x196210: 0x10400040
    ctx->pc = 0x196210u;
    {
        const bool branch_taken_0x196210 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x196214u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196210) {
            ctx->pc = 0x196314u;
            goto label_196314;
        }
    }
    ctx->pc = 0x196218u;
label_196218:
    // 0x196218: 0x29040004
    ctx->pc = 0x196218u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 8), 4));
    // 0x19621c: 0x24020003
    ctx->pc = 0x19621cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x196220: 0x104100b
    ctx->pc = 0x196220u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 8));
    // 0x196224: 0x2831821
    ctx->pc = 0x196224u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x196228: 0x8ce40000
    ctx->pc = 0x196228u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19622c: 0x621821
    ctx->pc = 0x19622cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x196230: 0x10640037
    ctx->pc = 0x196230u;
    {
        const bool branch_taken_0x196230 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x196234u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196230) {
            ctx->pc = 0x196310u;
            goto label_196310;
        }
    }
    ctx->pc = 0x196238u;
    // 0x196238: 0xace30000
    ctx->pc = 0x196238u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x19623c: 0x982d
    ctx->pc = 0x19623cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196240: 0x2349023
    ctx->pc = 0x196240u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x196244: 0x241e0004
    ctx->pc = 0x196244u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 4));
    // 0x196248: 0x24170040
    ctx->pc = 0x196248u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 64));
    // 0x19624c: 0x1000001c
    ctx->pc = 0x19624Cu;
    {
        const bool branch_taken_0x19624c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196250u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 128));
        if (branch_taken_0x19624c) {
            ctx->pc = 0x1962C0u;
            goto label_1962c0;
        }
    }
    ctx->pc = 0x196254u;
    // 0x196254: 0x0
    ctx->pc = 0x196254u;
    // NOP
label_196258:
    // 0x196258: 0xc061610
    ctx->pc = 0x196258u;
    SET_GPR_U32(ctx, 31, 0x196260u);
    ctx->pc = 0x19625Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x185840u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_CheckDelim_0x185840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196260u; }
        else if (ctx->pc != 0x196260u) { ctx->pc = 0x196260u; }
    }
    if (ctx->pc != 0x196260u) { return; }
    ctx->pc = 0x196260u;
    // 0x196260: 0x40182d
    ctx->pc = 0x196260u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196264: 0x24020008
    ctx->pc = 0x196264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x196268: 0x10620011
    ctx->pc = 0x196268u;
    {
        const bool branch_taken_0x196268 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x19626Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 9));
        if (branch_taken_0x196268) {
            ctx->pc = 0x1962B0u;
            goto label_1962b0;
        }
    }
    ctx->pc = 0x196270u;
    // 0x196270: 0x10400005
    ctx->pc = 0x196270u;
    {
        const bool branch_taken_0x196270 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x196270) {
            ctx->pc = 0x196288u;
            goto label_196288;
        }
    }
    ctx->pc = 0x196278u;
    // 0x196278: 0x107e000b
    ctx->pc = 0x196278u;
    {
        const bool branch_taken_0x196278 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 30));
        ctx->pc = 0x19627Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        if (branch_taken_0x196278) {
            ctx->pc = 0x1962A8u;
            goto label_1962a8;
        }
    }
    ctx->pc = 0x196280u;
    // 0x196280: 0x1000000e
    ctx->pc = 0x196280u;
    {
        const bool branch_taken_0x196280 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x196284u;
        SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        if (branch_taken_0x196280) {
            ctx->pc = 0x1962BCu;
            goto label_1962bc;
        }
    }
    ctx->pc = 0x196288u;
label_196288:
    // 0x196288: 0x50770004
    ctx->pc = 0x196288u;
    {
        const bool branch_taken_0x196288 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 23));
        if (branch_taken_0x196288) {
            ctx->pc = 0x19628Cu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4));
            ctx->pc = 0x19629Cu;
            goto label_19629c;
        }
    }
    ctx->pc = 0x196290u;
    // 0x196290: 0x14760009
    ctx->pc = 0x196290u;
    {
        const bool branch_taken_0x196290 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 22));
        ctx->pc = 0x196294u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        if (branch_taken_0x196290) {
            ctx->pc = 0x1962B8u;
            goto label_1962b8;
        }
    }
    ctx->pc = 0x196298u;
    // 0x196298: 0x26030004
    ctx->pc = 0x196298u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4));
label_19629c:
    // 0x19629c: 0x102d
    ctx->pc = 0x19629cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962a0: 0x1000001c
    ctx->pc = 0x1962A0u;
    {
        const bool branch_taken_0x1962a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1962A4u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1962a0) {
            ctx->pc = 0x196314u;
            goto label_196314;
        }
    }
    ctx->pc = 0x1962A8u;
label_1962a8:
    // 0x1962a8: 0x56600019
    ctx->pc = 0x1962A8u;
    {
        const bool branch_taken_0x1962a8 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x1962a8) {
            ctx->pc = 0x1962ACu;
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
            ctx->pc = 0x196310u;
            goto label_196310;
        }
    }
    ctx->pc = 0x1962B0u;
label_1962b0:
    // 0x1962b0: 0x26130004
    ctx->pc = 0x1962b0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 4));
    // 0x1962b4: 0x2301023
    ctx->pc = 0x1962b4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1962b8:
    // 0x1962b8: 0x2429023
    ctx->pc = 0x1962b8u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1962bc:
    // 0x1962bc: 0x2228823
    ctx->pc = 0x1962bcu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1962c0:
    // 0x1962c0: 0x2a420004
    ctx->pc = 0x1962c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x1962c4: 0x14400007
    ctx->pc = 0x1962C4u;
    {
        const bool branch_taken_0x1962c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1962C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1962c4) {
            ctx->pc = 0x1962E4u;
            goto label_1962e4;
        }
    }
    ctx->pc = 0x1962CCu;
    // 0x1962cc: 0x240282d
    ctx->pc = 0x1962ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962d0: 0xc06163a
    ctx->pc = 0x1962D0u;
    SET_GPR_U32(ctx, 31, 0x1962D8u);
    ctx->pc = 0x1962D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 204));
    ctx->pc = 0x1858E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_BsearchDelim_0x1858e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962D8u; }
        else if (ctx->pc != 0x1962D8u) { ctx->pc = 0x1962D8u; }
    }
    if (ctx->pc != 0x1962D8u) { return; }
    ctx->pc = 0x1962D8u;
    // 0x1962d8: 0x40802d
    ctx->pc = 0x1962d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962dc: 0x1600ffde
    ctx->pc = 0x1962DCu;
    {
        const bool branch_taken_0x1962dc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x1962dc) {
            ctx->pc = 0x196258u;
            goto label_196258;
        }
    }
    ctx->pc = 0x1962E4u;
label_1962e4:
    // 0x1962e4: 0x26820004
    ctx->pc = 0x1962e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 4));
    // 0x1962e8: 0x52620009
    ctx->pc = 0x1962E8u;
    {
        const bool branch_taken_0x1962e8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        if (branch_taken_0x1962e8) {
            ctx->pc = 0x1962ECu;
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
            ctx->pc = 0x196310u;
            goto label_196310;
        }
    }
    ctx->pc = 0x1962F0u;
    // 0x1962f0: 0x12600008
    ctx->pc = 0x1962F0u;
    {
        const bool branch_taken_0x1962f0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x1962F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1962f0) {
            ctx->pc = 0x196314u;
            goto label_196314;
        }
    }
    ctx->pc = 0x1962F8u;
    // 0x1962f8: 0xc061610
    ctx->pc = 0x1962F8u;
    SET_GPR_U32(ctx, 31, 0x196300u);
    ctx->pc = 0x1962FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x185840u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_CheckDelim_0x185840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196300u; }
        else if (ctx->pc != 0x196300u) { ctx->pc = 0x196300u; }
    }
    if (ctx->pc != 0x196300u) { return; }
    ctx->pc = 0x196300u;
    // 0x196300: 0x30420002
    ctx->pc = 0x196300u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x196304: 0x10400003
    ctx->pc = 0x196304u;
    {
        const bool branch_taken_0x196304 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x196308u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x196304) {
            ctx->pc = 0x196314u;
            goto label_196314;
        }
    }
    ctx->pc = 0x19630Cu;
    // 0x19630c: 0xaeb30000
    ctx->pc = 0x19630cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
label_196310:
    // 0x196310: 0x102d
    ctx->pc = 0x196310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196314:
    // 0x196314: 0xdfbf0090
    ctx->pc = 0x196314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x196318: 0xdfbe0080
    ctx->pc = 0x196318u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19631c: 0xdfb70070
    ctx->pc = 0x19631cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x196320: 0xdfb60060
    ctx->pc = 0x196320u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x196324: 0xdfb50050
    ctx->pc = 0x196324u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x196328: 0xdfb40040
    ctx->pc = 0x196328u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19632c: 0xdfb30030
    ctx->pc = 0x19632cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196330: 0xdfb20020
    ctx->pc = 0x196330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196334: 0xdfb10010
    ctx->pc = 0x196334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196338: 0xdfb00000
    ctx->pc = 0x196338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19633c: 0x3e00008
    ctx->pc = 0x19633Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196340u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196218u: goto label_196218;
            case 0x196258u: goto label_196258;
            case 0x196288u: goto label_196288;
            case 0x19629Cu: goto label_19629c;
            case 0x1962A8u: goto label_1962a8;
            case 0x1962B0u: goto label_1962b0;
            case 0x1962B8u: goto label_1962b8;
            case 0x1962BCu: goto label_1962bc;
            case 0x1962C0u: goto label_1962c0;
            case 0x1962E4u: goto label_1962e4;
            case 0x196310u: goto label_196310;
            case 0x196314u: goto label_196314;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196344u;
}
