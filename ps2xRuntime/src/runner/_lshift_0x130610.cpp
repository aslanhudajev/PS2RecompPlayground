#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _lshift
// Address: 0x130610 - 0x130788
void _lshift_0x130610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130610u;

    // 0x130610: 0x27bdff80
    ctx->pc = 0x130610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x130614: 0xffb60060
    ctx->pc = 0x130614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x130618: 0xffb40040
    ctx->pc = 0x130618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x13061c: 0x80b02d
    ctx->pc = 0x13061cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130620: 0xffb10010
    ctx->pc = 0x130620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x130624: 0x6a143
    ctx->pc = 0x130624u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 6), 5));
    // 0x130628: 0xffb00000
    ctx->pc = 0x130628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13062c: 0xa0882d
    ctx->pc = 0x13062cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130630: 0xffbf0070
    ctx->pc = 0x130630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x130634: 0xffb50050
    ctx->pc = 0x130634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x130638: 0xffb30030
    ctx->pc = 0x130638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x13063c: 0xffb20020
    ctx->pc = 0x13063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x130640: 0x8e230010
    ctx->pc = 0x130640u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x130644: 0x8e270008
    ctx->pc = 0x130644u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x130648: 0x2831821
    ctx->pc = 0x130648u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x13064c: 0x24700001
    ctx->pc = 0x13064cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 1));
    // 0x130650: 0xf0102a
    ctx->pc = 0x130650u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 16)));
    // 0x130654: 0x1040000d
    ctx->pc = 0x130654u;
    {
        const bool branch_taken_0x130654 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x130658u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        if (branch_taken_0x130654) {
            ctx->pc = 0x13068Cu;
            goto label_13068c;
        }
    }
    ctx->pc = 0x13065Cu;
    // 0x13065c: 0x30d3001f
    ctx->pc = 0x13065cu;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 6), 31));
    // 0x130660: 0x26320014
    ctx->pc = 0x130660u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 20));
    // 0x130664: 0x0
    ctx->pc = 0x130664u;
    // NOP
label_130668:
    // 0x130668: 0x73840
    ctx->pc = 0x130668u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
    // 0x13066c: 0x24a50001
    ctx->pc = 0x13066cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x130670: 0xf0102a
    ctx->pc = 0x130670u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 16)));
    // 0x130674: 0x0
    ctx->pc = 0x130674u;
    // NOP
    // 0x130678: 0x0
    ctx->pc = 0x130678u;
    // NOP
    // 0x13067c: 0x1440fffa
    ctx->pc = 0x13067Cu;
    {
        const bool branch_taken_0x13067c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x13067c) {
            ctx->pc = 0x130668u;
            goto label_130668;
        }
    }
    ctx->pc = 0x130684u;
    // 0x130684: 0x10000003
    ctx->pc = 0x130684u;
    {
        const bool branch_taken_0x130684 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x130684) {
            ctx->pc = 0x130694u;
            goto label_130694;
        }
    }
    ctx->pc = 0x13068Cu;
label_13068c:
    // 0x13068c: 0x30d3001f
    ctx->pc = 0x13068cu;
    SET_GPR_U32(ctx, 19, AND32(GPR_U32(ctx, 6), 31));
    // 0x130690: 0x26320014
    ctx->pc = 0x130690u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 20));
label_130694:
    // 0x130694: 0xc04bf8a
    ctx->pc = 0x130694u;
    SET_GPR_U32(ctx, 31, 0x13069Cu);
    ctx->pc = 0x130698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FE28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x12fe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13069Cu; }
    }
    if (ctx->pc != 0x13069Cu) { return; }
    ctx->pc = 0x13069Cu;
    // 0x13069c: 0x40a82d
    ctx->pc = 0x13069cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306a0: 0x1a80000a
    ctx->pc = 0x1306A0u;
    {
        const bool branch_taken_0x1306a0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1306A4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 21), 20));
        if (branch_taken_0x1306a0) {
            ctx->pc = 0x1306CCu;
            goto label_1306cc;
        }
    }
    ctx->pc = 0x1306A8u;
    // 0x1306a8: 0x280382d
    ctx->pc = 0x1306a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306ac: 0x0
    ctx->pc = 0x1306acu;
    // NOP
label_1306b0:
    // 0x1306b0: 0xacc00000
    ctx->pc = 0x1306b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1306b4: 0x24e7ffff
    ctx->pc = 0x1306b4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1306b8: 0x24c60004
    ctx->pc = 0x1306b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x1306bc: 0x0
    ctx->pc = 0x1306bcu;
    // NOP
    // 0x1306c0: 0x0
    ctx->pc = 0x1306c0u;
    // NOP
    // 0x1306c4: 0x14e0fffa
    ctx->pc = 0x1306C4u;
    {
        const bool branch_taken_0x1306c4 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        if (branch_taken_0x1306c4) {
            ctx->pc = 0x1306B0u;
            goto label_1306b0;
        }
    }
    ctx->pc = 0x1306CCu;
label_1306cc:
    // 0x1306cc: 0x8e220010
    ctx->pc = 0x1306ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1306d0: 0x240202d
    ctx->pc = 0x1306d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306d4: 0x21080
    ctx->pc = 0x1306d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1306d8: 0x12600013
    ctx->pc = 0x1306D8u;
    {
        const bool branch_taken_0x1306d8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x1306DCu;
        SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x1306d8) {
            ctx->pc = 0x130728u;
            goto label_130728;
        }
    }
    ctx->pc = 0x1306E0u;
    // 0x1306e0: 0x24020020
    ctx->pc = 0x1306e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1306e4: 0x182d
    ctx->pc = 0x1306e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306e8: 0x532823
    ctx->pc = 0x1306e8u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1306ec: 0x26080001
    ctx->pc = 0x1306ecu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 1));
label_1306f0:
    // 0x1306f0: 0x8c820000
    ctx->pc = 0x1306f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1306f4: 0x2621004
    ctx->pc = 0x1306f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x1306f8: 0x431025
    ctx->pc = 0x1306f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1306fc: 0xacc20000
    ctx->pc = 0x1306fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x130700: 0x24c60004
    ctx->pc = 0x130700u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x130704: 0x8c830000
    ctx->pc = 0x130704u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130708: 0x24840004
    ctx->pc = 0x130708u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x13070c: 0x87102b
    ctx->pc = 0x13070cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x130710: 0x1440fff7
    ctx->pc = 0x130710u;
    {
        const bool branch_taken_0x130710 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x130714u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x130710) {
            ctx->pc = 0x1306F0u;
            goto label_1306f0;
        }
    }
    ctx->pc = 0x130718u;
    // 0x130718: 0x103800b
    ctx->pc = 0x130718u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 8));
    // 0x13071c: 0xacc30000
    ctx->pc = 0x13071cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x130720: 0x1000000a
    ctx->pc = 0x130720u;
    {
        const bool branch_taken_0x130720 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x130724u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x130720) {
            ctx->pc = 0x13074Cu;
            goto label_13074c;
        }
    }
    ctx->pc = 0x130728u;
label_130728:
    // 0x130728: 0x2605ffff
    ctx->pc = 0x130728u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x13072c: 0x0
    ctx->pc = 0x13072cu;
    // NOP
label_130730:
    // 0x130730: 0x8c820000
    ctx->pc = 0x130730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130734: 0x24840004
    ctx->pc = 0x130734u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x130738: 0xacc20000
    ctx->pc = 0x130738u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x13073c: 0x87182b
    ctx->pc = 0x13073cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x130740: 0x24c60004
    ctx->pc = 0x130740u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x130744: 0x1460fffa
    ctx->pc = 0x130744u;
    {
        const bool branch_taken_0x130744 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x130744) {
            ctx->pc = 0x130730u;
            goto label_130730;
        }
    }
    ctx->pc = 0x13074Cu;
label_13074c:
    // 0x13074c: 0xaea50010
    ctx->pc = 0x13074cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 5));
    // 0x130750: 0x2c0202d
    ctx->pc = 0x130750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130754: 0xc04bfb4
    ctx->pc = 0x130754u;
    SET_GPR_U32(ctx, 31, 0x13075Cu);
    ctx->pc = 0x130758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12FED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x12fed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13075Cu; }
    }
    if (ctx->pc != 0x13075Cu) { return; }
    ctx->pc = 0x13075Cu;
    // 0x13075c: 0x2a0102d
    ctx->pc = 0x13075cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130760: 0xdfbf0070
    ctx->pc = 0x130760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x130764: 0xdfb60060
    ctx->pc = 0x130764u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130768: 0xdfb50050
    ctx->pc = 0x130768u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13076c: 0xdfb40040
    ctx->pc = 0x13076cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130770: 0xdfb30030
    ctx->pc = 0x130770u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130774: 0xdfb20020
    ctx->pc = 0x130774u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130778: 0xdfb10010
    ctx->pc = 0x130778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13077c: 0xdfb00000
    ctx->pc = 0x13077cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130780: 0x3e00008
    ctx->pc = 0x130780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130784u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130668u: goto label_130668;
            case 0x13068Cu: goto label_13068c;
            case 0x130694u: goto label_130694;
            case 0x1306B0u: goto label_1306b0;
            case 0x1306CCu: goto label_1306cc;
            case 0x1306F0u: goto label_1306f0;
            case 0x130728u: goto label_130728;
            case 0x130730u: goto label_130730;
            case 0x13074Cu: goto label_13074c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130788u;
}
