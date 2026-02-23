#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsje_get_pcm_data
// Address: 0x16ef88 - 0x16f0e8
void adxsje_get_pcm_data_0x16ef88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsje_get_pcm_data");


    ctx->pc = 0x16ef88u;

label_16ef88:
    // 0x16ef88: 0x27bdff50
    ctx->pc = 0x16ef88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
label_16ef8c:
    // 0x16ef8c: 0xffbe0090
    ctx->pc = 0x16ef8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_16ef90:
    // 0x16ef90: 0xffb70080
    ctx->pc = 0x16ef90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_16ef94:
    // 0x16ef94: 0xe0f02d
    ctx->pc = 0x16ef94u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_16ef98:
    // 0x16ef98: 0xffb60070
    ctx->pc = 0x16ef98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_16ef9c:
    // 0x16ef9c: 0xffb30040
    ctx->pc = 0x16ef9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_16efa0:
    // 0x16efa0: 0x80b02d
    ctx->pc = 0x16efa0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16efa4:
    // 0x16efa4: 0xffb10020
    ctx->pc = 0x16efa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_16efa8:
    // 0x16efa8: 0xc0982d
    ctx->pc = 0x16efa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16efac:
    // 0x16efac: 0xffb00010
    ctx->pc = 0x16efacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_16efb0:
    // 0x16efb0: 0x26d70004
    ctx->pc = 0x16efb0u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 22), 4));
label_16efb4:
    // 0x16efb4: 0xffbf00a0
    ctx->pc = 0x16efb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_16efb8:
    // 0x16efb8: 0x802d
    ctx->pc = 0x16efb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16efbc:
    // 0x16efbc: 0xffb50060
    ctx->pc = 0x16efbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_16efc0:
    // 0x16efc0: 0xffb40050
    ctx->pc = 0x16efc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_16efc4:
    // 0x16efc4: 0xffb20030
    ctx->pc = 0x16efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_16efc8:
    // 0x16efc8: 0x8ec30058
    ctx->pc = 0x16efc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 88)));
label_16efcc:
    // 0x16efcc: 0x18600010
label_16efd0:
    if (ctx->pc == 0x16EFD0u) {
        ctx->pc = 0x16EFD0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EFD4u;
        goto label_16efd4;
    }
    ctx->pc = 0x16EFCCu;
    {
        const bool branch_taken_0x16efcc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x16EFD0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16efcc) {
            ctx->pc = 0x16F010u;
            goto label_16f010;
        }
    }
    ctx->pc = 0x16EFD4u;
label_16efd4:
    // 0x16efd4: 0x2e0902d
    ctx->pc = 0x16efd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_16efd8:
    // 0x16efd8: 0x8e440000
    ctx->pc = 0x16efd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16efdc:
    // 0x16efdc: 0x8c830000
    ctx->pc = 0x16efdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16efe0:
    // 0x16efe0: 0x8c620024
    ctx->pc = 0x16efe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_16efe4:
    // 0x16efe4: 0x40f809
label_16efe8:
    if (ctx->pc == 0x16EFE8u) {
        ctx->pc = 0x16EFE8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16EFECu;
        goto label_16efec;
    }
    ctx->pc = 0x16EFE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16EFECu);
        ctx->pc = 0x16EFE8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EF88u: goto label_16ef88;
            case 0x16EF8Cu: goto label_16ef8c;
            case 0x16EF90u: goto label_16ef90;
            case 0x16EF94u: goto label_16ef94;
            case 0x16EF98u: goto label_16ef98;
            case 0x16EF9Cu: goto label_16ef9c;
            case 0x16EFA0u: goto label_16efa0;
            case 0x16EFA4u: goto label_16efa4;
            case 0x16EFA8u: goto label_16efa8;
            case 0x16EFACu: goto label_16efac;
            case 0x16EFB0u: goto label_16efb0;
            case 0x16EFB4u: goto label_16efb4;
            case 0x16EFB8u: goto label_16efb8;
            case 0x16EFBCu: goto label_16efbc;
            case 0x16EFC0u: goto label_16efc0;
            case 0x16EFC4u: goto label_16efc4;
            case 0x16EFC8u: goto label_16efc8;
            case 0x16EFCCu: goto label_16efcc;
            case 0x16EFD0u: goto label_16efd0;
            case 0x16EFD4u: goto label_16efd4;
            case 0x16EFD8u: goto label_16efd8;
            case 0x16EFDCu: goto label_16efdc;
            case 0x16EFE0u: goto label_16efe0;
            case 0x16EFE4u: goto label_16efe4;
            case 0x16EFE8u: goto label_16efe8;
            case 0x16EFECu: goto label_16efec;
            case 0x16EFF0u: goto label_16eff0;
            case 0x16EFF4u: goto label_16eff4;
            case 0x16EFF8u: goto label_16eff8;
            case 0x16EFFCu: goto label_16effc;
            case 0x16F000u: goto label_16f000;
            case 0x16F004u: goto label_16f004;
            case 0x16F008u: goto label_16f008;
            case 0x16F00Cu: goto label_16f00c;
            case 0x16F010u: goto label_16f010;
            case 0x16F014u: goto label_16f014;
            case 0x16F018u: goto label_16f018;
            case 0x16F01Cu: goto label_16f01c;
            case 0x16F020u: goto label_16f020;
            case 0x16F024u: goto label_16f024;
            case 0x16F028u: goto label_16f028;
            case 0x16F02Cu: goto label_16f02c;
            case 0x16F030u: goto label_16f030;
            case 0x16F034u: goto label_16f034;
            case 0x16F038u: goto label_16f038;
            case 0x16F03Cu: goto label_16f03c;
            case 0x16F040u: goto label_16f040;
            case 0x16F044u: goto label_16f044;
            case 0x16F048u: goto label_16f048;
            case 0x16F04Cu: goto label_16f04c;
            case 0x16F050u: goto label_16f050;
            case 0x16F054u: goto label_16f054;
            case 0x16F058u: goto label_16f058;
            case 0x16F05Cu: goto label_16f05c;
            case 0x16F060u: goto label_16f060;
            case 0x16F064u: goto label_16f064;
            case 0x16F068u: goto label_16f068;
            case 0x16F06Cu: goto label_16f06c;
            case 0x16F070u: goto label_16f070;
            case 0x16F074u: goto label_16f074;
            case 0x16F078u: goto label_16f078;
            case 0x16F07Cu: goto label_16f07c;
            case 0x16F080u: goto label_16f080;
            case 0x16F084u: goto label_16f084;
            case 0x16F088u: goto label_16f088;
            case 0x16F08Cu: goto label_16f08c;
            case 0x16F090u: goto label_16f090;
            case 0x16F094u: goto label_16f094;
            case 0x16F098u: goto label_16f098;
            case 0x16F09Cu: goto label_16f09c;
            case 0x16F0A0u: goto label_16f0a0;
            case 0x16F0A4u: goto label_16f0a4;
            case 0x16F0A8u: goto label_16f0a8;
            case 0x16F0ACu: goto label_16f0ac;
            case 0x16F0B0u: goto label_16f0b0;
            case 0x16F0B4u: goto label_16f0b4;
            case 0x16F0B8u: goto label_16f0b8;
            case 0x16F0BCu: goto label_16f0bc;
            case 0x16F0C0u: goto label_16f0c0;
            case 0x16F0C4u: goto label_16f0c4;
            case 0x16F0C8u: goto label_16f0c8;
            case 0x16F0CCu: goto label_16f0cc;
            case 0x16F0D0u: goto label_16f0d0;
            case 0x16F0D4u: goto label_16f0d4;
            case 0x16F0D8u: goto label_16f0d8;
            case 0x16F0DCu: goto label_16f0dc;
            case 0x16F0E0u: goto label_16f0e0;
            case 0x16F0E4u: goto label_16f0e4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16EFECu; }
            if (ctx->pc != 0x16EFECu) { return; }
        }
    }
    ctx->pc = 0x16EFECu;
label_16efec:
    // 0x16efec: 0x28842
    ctx->pc = 0x16efecu;
    SET_GPR_U32(ctx, 17, SRL32(GPR_U32(ctx, 2), 1));
label_16eff0:
    // 0x16eff0: 0x233102a
    ctx->pc = 0x16eff0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
label_16eff4:
    // 0x16eff4: 0x14400030
label_16eff8:
    if (ctx->pc == 0x16EFF8u) {
        ctx->pc = 0x16EFF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16EFFCu;
        goto label_16effc;
    }
    ctx->pc = 0x16EFF4u;
    {
        const bool branch_taken_0x16eff4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16EFF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16eff4) {
            ctx->pc = 0x16F0B8u;
            goto label_16f0b8;
        }
    }
    ctx->pc = 0x16EFFCu;
label_16effc:
    // 0x16effc: 0x8ec30058
    ctx->pc = 0x16effcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 88)));
label_16f000:
    // 0x16f000: 0x26100001
    ctx->pc = 0x16f000u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_16f004:
    // 0x16f004: 0x203102a
    ctx->pc = 0x16f004u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
label_16f008:
    // 0x16f008: 0x1440fff3
label_16f00c:
    if (ctx->pc == 0x16F00Cu) {
        ctx->pc = 0x16F00Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x16F010u;
        goto label_16f010;
    }
    ctx->pc = 0x16F008u;
    {
        const bool branch_taken_0x16f008 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16F00Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x16f008) {
            ctx->pc = 0x16EFD8u;
            goto label_16efd8;
        }
    }
    ctx->pc = 0x16F010u;
label_16f010:
    // 0x16f010: 0x18600028
label_16f014:
    if (ctx->pc == 0x16F014u) {
        ctx->pc = 0x16F014u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F018u;
        goto label_16f018;
    }
    ctx->pc = 0x16F010u;
    {
        const bool branch_taken_0x16f010 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x16F014u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16f010) {
            ctx->pc = 0x16F0B4u;
            goto label_16f0b4;
        }
    }
    ctx->pc = 0x16F018u;
label_16f018:
    // 0x16f018: 0x1a600021
label_16f01c:
    if (ctx->pc == 0x16F01Cu) {
        ctx->pc = 0x16F01Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F020u;
        goto label_16f020;
    }
    ctx->pc = 0x16F018u;
    {
        const bool branch_taken_0x16f018 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x16F01Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16f018) {
            ctx->pc = 0x16F0A0u;
            goto label_16f0a0;
        }
    }
    ctx->pc = 0x16F020u;
label_16f020:
    // 0x16f020: 0x26150001
    ctx->pc = 0x16f020u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 16), 1));
label_16f024:
    // 0x16f024: 0x109080
    ctx->pc = 0x16f024u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), 2));
label_16f028:
    // 0x16f028: 0x13a040
    ctx->pc = 0x16f028u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 19), 1));
label_16f02c:
    // 0x16f02c: 0x2578021
    ctx->pc = 0x16f02cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
label_16f030:
    // 0x16f030: 0x24050001
    ctx->pc = 0x16f030u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_16f034:
    // 0x16f034: 0x8e040000
    ctx->pc = 0x16f034u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16f038:
    // 0x16f038: 0x280302d
    ctx->pc = 0x16f038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16f03c:
    // 0x16f03c: 0x8c830000
    ctx->pc = 0x16f03cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f040:
    // 0x16f040: 0x8c620018
    ctx->pc = 0x16f040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_16f044:
    // 0x16f044: 0x40f809
label_16f048:
    if (ctx->pc == 0x16F048u) {
        ctx->pc = 0x16F048u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F04Cu;
        goto label_16f04c;
    }
    ctx->pc = 0x16F044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16F04Cu);
        ctx->pc = 0x16F048u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EF88u: goto label_16ef88;
            case 0x16EF8Cu: goto label_16ef8c;
            case 0x16EF90u: goto label_16ef90;
            case 0x16EF94u: goto label_16ef94;
            case 0x16EF98u: goto label_16ef98;
            case 0x16EF9Cu: goto label_16ef9c;
            case 0x16EFA0u: goto label_16efa0;
            case 0x16EFA4u: goto label_16efa4;
            case 0x16EFA8u: goto label_16efa8;
            case 0x16EFACu: goto label_16efac;
            case 0x16EFB0u: goto label_16efb0;
            case 0x16EFB4u: goto label_16efb4;
            case 0x16EFB8u: goto label_16efb8;
            case 0x16EFBCu: goto label_16efbc;
            case 0x16EFC0u: goto label_16efc0;
            case 0x16EFC4u: goto label_16efc4;
            case 0x16EFC8u: goto label_16efc8;
            case 0x16EFCCu: goto label_16efcc;
            case 0x16EFD0u: goto label_16efd0;
            case 0x16EFD4u: goto label_16efd4;
            case 0x16EFD8u: goto label_16efd8;
            case 0x16EFDCu: goto label_16efdc;
            case 0x16EFE0u: goto label_16efe0;
            case 0x16EFE4u: goto label_16efe4;
            case 0x16EFE8u: goto label_16efe8;
            case 0x16EFECu: goto label_16efec;
            case 0x16EFF0u: goto label_16eff0;
            case 0x16EFF4u: goto label_16eff4;
            case 0x16EFF8u: goto label_16eff8;
            case 0x16EFFCu: goto label_16effc;
            case 0x16F000u: goto label_16f000;
            case 0x16F004u: goto label_16f004;
            case 0x16F008u: goto label_16f008;
            case 0x16F00Cu: goto label_16f00c;
            case 0x16F010u: goto label_16f010;
            case 0x16F014u: goto label_16f014;
            case 0x16F018u: goto label_16f018;
            case 0x16F01Cu: goto label_16f01c;
            case 0x16F020u: goto label_16f020;
            case 0x16F024u: goto label_16f024;
            case 0x16F028u: goto label_16f028;
            case 0x16F02Cu: goto label_16f02c;
            case 0x16F030u: goto label_16f030;
            case 0x16F034u: goto label_16f034;
            case 0x16F038u: goto label_16f038;
            case 0x16F03Cu: goto label_16f03c;
            case 0x16F040u: goto label_16f040;
            case 0x16F044u: goto label_16f044;
            case 0x16F048u: goto label_16f048;
            case 0x16F04Cu: goto label_16f04c;
            case 0x16F050u: goto label_16f050;
            case 0x16F054u: goto label_16f054;
            case 0x16F058u: goto label_16f058;
            case 0x16F05Cu: goto label_16f05c;
            case 0x16F060u: goto label_16f060;
            case 0x16F064u: goto label_16f064;
            case 0x16F068u: goto label_16f068;
            case 0x16F06Cu: goto label_16f06c;
            case 0x16F070u: goto label_16f070;
            case 0x16F074u: goto label_16f074;
            case 0x16F078u: goto label_16f078;
            case 0x16F07Cu: goto label_16f07c;
            case 0x16F080u: goto label_16f080;
            case 0x16F084u: goto label_16f084;
            case 0x16F088u: goto label_16f088;
            case 0x16F08Cu: goto label_16f08c;
            case 0x16F090u: goto label_16f090;
            case 0x16F094u: goto label_16f094;
            case 0x16F098u: goto label_16f098;
            case 0x16F09Cu: goto label_16f09c;
            case 0x16F0A0u: goto label_16f0a0;
            case 0x16F0A4u: goto label_16f0a4;
            case 0x16F0A8u: goto label_16f0a8;
            case 0x16F0ACu: goto label_16f0ac;
            case 0x16F0B0u: goto label_16f0b0;
            case 0x16F0B4u: goto label_16f0b4;
            case 0x16F0B8u: goto label_16f0b8;
            case 0x16F0BCu: goto label_16f0bc;
            case 0x16F0C0u: goto label_16f0c0;
            case 0x16F0C4u: goto label_16f0c4;
            case 0x16F0C8u: goto label_16f0c8;
            case 0x16F0CCu: goto label_16f0cc;
            case 0x16F0D0u: goto label_16f0d0;
            case 0x16F0D4u: goto label_16f0d4;
            case 0x16F0D8u: goto label_16f0d8;
            case 0x16F0DCu: goto label_16f0dc;
            case 0x16F0E0u: goto label_16f0e0;
            case 0x16F0E4u: goto label_16f0e4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F04Cu; }
            if (ctx->pc != 0x16F04Cu) { return; }
        }
    }
    ctx->pc = 0x16F04Cu;
label_16f04c:
    // 0x16f04c: 0x25e1821
    ctx->pc = 0x16f04cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
label_16f050:
    // 0x16f050: 0x111040
    ctx->pc = 0x16f050u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 1));
label_16f054:
    // 0x16f054: 0x8c640000
    ctx->pc = 0x16f054u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16f058:
    // 0x16f058: 0x8fa50000
    ctx->pc = 0x16f058u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16f05c:
    // 0x16f05c: 0x8fa60004
    ctx->pc = 0x16f05cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16f060:
    // 0x16f060: 0xc050c90
label_16f064:
    if (ctx->pc == 0x16F064u) {
        ctx->pc = 0x16F064u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x16F068u;
        goto label_16f068;
    }
    ctx->pc = 0x16F060u;
    SET_GPR_U32(ctx, 31, 0x16F068u);
    ctx->pc = 0x16F064u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F068u; }
        else if (ctx->pc != 0x16F068u) { ctx->pc = 0x16F068u; }
    }
    if (ctx->pc != 0x16F068u) { return; }
    ctx->pc = 0x16F068u;
label_16f068:
    // 0x16f068: 0x8e040000
    ctx->pc = 0x16f068u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16f06c:
    // 0x16f06c: 0x282d
    ctx->pc = 0x16f06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f070:
    // 0x16f070: 0x8fa20004
    ctx->pc = 0x16f070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16f074:
    // 0x16f074: 0x3a0302d
    ctx->pc = 0x16f074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16f078:
    // 0x16f078: 0x8c870000
    ctx->pc = 0x16f078u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f07c:
    // 0x16f07c: 0x21042
    ctx->pc = 0x16f07cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_16f080:
    // 0x16f080: 0x8ce30020
    ctx->pc = 0x16f080u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_16f084:
    // 0x16f084: 0x60f809
label_16f088:
    if (ctx->pc == 0x16F088u) {
        ctx->pc = 0x16F088u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x16F08Cu;
        goto label_16f08c;
    }
    ctx->pc = 0x16F084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16F08Cu);
        ctx->pc = 0x16F088u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EF88u: goto label_16ef88;
            case 0x16EF8Cu: goto label_16ef8c;
            case 0x16EF90u: goto label_16ef90;
            case 0x16EF94u: goto label_16ef94;
            case 0x16EF98u: goto label_16ef98;
            case 0x16EF9Cu: goto label_16ef9c;
            case 0x16EFA0u: goto label_16efa0;
            case 0x16EFA4u: goto label_16efa4;
            case 0x16EFA8u: goto label_16efa8;
            case 0x16EFACu: goto label_16efac;
            case 0x16EFB0u: goto label_16efb0;
            case 0x16EFB4u: goto label_16efb4;
            case 0x16EFB8u: goto label_16efb8;
            case 0x16EFBCu: goto label_16efbc;
            case 0x16EFC0u: goto label_16efc0;
            case 0x16EFC4u: goto label_16efc4;
            case 0x16EFC8u: goto label_16efc8;
            case 0x16EFCCu: goto label_16efcc;
            case 0x16EFD0u: goto label_16efd0;
            case 0x16EFD4u: goto label_16efd4;
            case 0x16EFD8u: goto label_16efd8;
            case 0x16EFDCu: goto label_16efdc;
            case 0x16EFE0u: goto label_16efe0;
            case 0x16EFE4u: goto label_16efe4;
            case 0x16EFE8u: goto label_16efe8;
            case 0x16EFECu: goto label_16efec;
            case 0x16EFF0u: goto label_16eff0;
            case 0x16EFF4u: goto label_16eff4;
            case 0x16EFF8u: goto label_16eff8;
            case 0x16EFFCu: goto label_16effc;
            case 0x16F000u: goto label_16f000;
            case 0x16F004u: goto label_16f004;
            case 0x16F008u: goto label_16f008;
            case 0x16F00Cu: goto label_16f00c;
            case 0x16F010u: goto label_16f010;
            case 0x16F014u: goto label_16f014;
            case 0x16F018u: goto label_16f018;
            case 0x16F01Cu: goto label_16f01c;
            case 0x16F020u: goto label_16f020;
            case 0x16F024u: goto label_16f024;
            case 0x16F028u: goto label_16f028;
            case 0x16F02Cu: goto label_16f02c;
            case 0x16F030u: goto label_16f030;
            case 0x16F034u: goto label_16f034;
            case 0x16F038u: goto label_16f038;
            case 0x16F03Cu: goto label_16f03c;
            case 0x16F040u: goto label_16f040;
            case 0x16F044u: goto label_16f044;
            case 0x16F048u: goto label_16f048;
            case 0x16F04Cu: goto label_16f04c;
            case 0x16F050u: goto label_16f050;
            case 0x16F054u: goto label_16f054;
            case 0x16F058u: goto label_16f058;
            case 0x16F05Cu: goto label_16f05c;
            case 0x16F060u: goto label_16f060;
            case 0x16F064u: goto label_16f064;
            case 0x16F068u: goto label_16f068;
            case 0x16F06Cu: goto label_16f06c;
            case 0x16F070u: goto label_16f070;
            case 0x16F074u: goto label_16f074;
            case 0x16F078u: goto label_16f078;
            case 0x16F07Cu: goto label_16f07c;
            case 0x16F080u: goto label_16f080;
            case 0x16F084u: goto label_16f084;
            case 0x16F088u: goto label_16f088;
            case 0x16F08Cu: goto label_16f08c;
            case 0x16F090u: goto label_16f090;
            case 0x16F094u: goto label_16f094;
            case 0x16F098u: goto label_16f098;
            case 0x16F09Cu: goto label_16f09c;
            case 0x16F0A0u: goto label_16f0a0;
            case 0x16F0A4u: goto label_16f0a4;
            case 0x16F0A8u: goto label_16f0a8;
            case 0x16F0ACu: goto label_16f0ac;
            case 0x16F0B0u: goto label_16f0b0;
            case 0x16F0B4u: goto label_16f0b4;
            case 0x16F0B8u: goto label_16f0b8;
            case 0x16F0BCu: goto label_16f0bc;
            case 0x16F0C0u: goto label_16f0c0;
            case 0x16F0C4u: goto label_16f0c4;
            case 0x16F0C8u: goto label_16f0c8;
            case 0x16F0CCu: goto label_16f0cc;
            case 0x16F0D0u: goto label_16f0d0;
            case 0x16F0D4u: goto label_16f0d4;
            case 0x16F0D8u: goto label_16f0d8;
            case 0x16F0DCu: goto label_16f0dc;
            case 0x16F0E0u: goto label_16f0e0;
            case 0x16F0E4u: goto label_16f0e4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F08Cu; }
            if (ctx->pc != 0x16F08Cu) { return; }
        }
    }
    ctx->pc = 0x16F08Cu;
label_16f08c:
    // 0x16f08c: 0x233102a
    ctx->pc = 0x16f08cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
label_16f090:
    // 0x16f090: 0x1440ffe7
label_16f094:
    if (ctx->pc == 0x16F094u) {
        ctx->pc = 0x16F094u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->pc = 0x16F098u;
        goto label_16f098;
    }
    ctx->pc = 0x16F090u;
    {
        const bool branch_taken_0x16f090 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16F094u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        if (branch_taken_0x16f090) {
            ctx->pc = 0x16F030u;
            goto label_16f030;
        }
    }
    ctx->pc = 0x16F098u;
label_16f098:
    // 0x16f098: 0x10000002
label_16f09c:
    if (ctx->pc == 0x16F09Cu) {
        ctx->pc = 0x16F09Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 88)));
        ctx->pc = 0x16F0A0u;
        goto label_16f0a0;
    }
    ctx->pc = 0x16F098u;
    {
        const bool branch_taken_0x16f098 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16F09Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 88)));
        if (branch_taken_0x16f098) {
            ctx->pc = 0x16F0A4u;
            goto label_16f0a4;
        }
    }
    ctx->pc = 0x16F0A0u;
label_16f0a0:
    // 0x16f0a0: 0x26150001
    ctx->pc = 0x16f0a0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 16), 1));
label_16f0a4:
    // 0x16f0a4: 0x2a0802d
    ctx->pc = 0x16f0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_16f0a8:
    // 0x16f0a8: 0x203102a
    ctx->pc = 0x16f0a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
label_16f0ac:
    // 0x16f0ac: 0x1440ffda
label_16f0b0:
    if (ctx->pc == 0x16F0B0u) {
        ctx->pc = 0x16F0B4u;
        goto label_16f0b4;
    }
    ctx->pc = 0x16F0ACu;
    {
        const bool branch_taken_0x16f0ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16f0ac) {
            ctx->pc = 0x16F018u;
            goto label_16f018;
        }
    }
    ctx->pc = 0x16F0B4u;
label_16f0b4:
    // 0x16f0b4: 0x220102d
    ctx->pc = 0x16f0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f0b8:
    // 0x16f0b8: 0xdfbf00a0
    ctx->pc = 0x16f0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_16f0bc:
    // 0x16f0bc: 0xdfbe0090
    ctx->pc = 0x16f0bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_16f0c0:
    // 0x16f0c0: 0xdfb70080
    ctx->pc = 0x16f0c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_16f0c4:
    // 0x16f0c4: 0xdfb60070
    ctx->pc = 0x16f0c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_16f0c8:
    // 0x16f0c8: 0xdfb50060
    ctx->pc = 0x16f0c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16f0cc:
    // 0x16f0cc: 0xdfb40050
    ctx->pc = 0x16f0ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16f0d0:
    // 0x16f0d0: 0xdfb30040
    ctx->pc = 0x16f0d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_16f0d4:
    // 0x16f0d4: 0xdfb20030
    ctx->pc = 0x16f0d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16f0d8:
    // 0x16f0d8: 0xdfb10020
    ctx->pc = 0x16f0d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16f0dc:
    // 0x16f0dc: 0xdfb00010
    ctx->pc = 0x16f0dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16f0e0:
    // 0x16f0e0: 0x3e00008
label_16f0e4:
    if (ctx->pc == 0x16F0E4u) {
        ctx->pc = 0x16F0E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x16F0E8u;
        goto label_fallthrough_0x16f0e0;
    }
    ctx->pc = 0x16F0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F0E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16EF88u: goto label_16ef88;
            case 0x16EF8Cu: goto label_16ef8c;
            case 0x16EF90u: goto label_16ef90;
            case 0x16EF94u: goto label_16ef94;
            case 0x16EF98u: goto label_16ef98;
            case 0x16EF9Cu: goto label_16ef9c;
            case 0x16EFA0u: goto label_16efa0;
            case 0x16EFA4u: goto label_16efa4;
            case 0x16EFA8u: goto label_16efa8;
            case 0x16EFACu: goto label_16efac;
            case 0x16EFB0u: goto label_16efb0;
            case 0x16EFB4u: goto label_16efb4;
            case 0x16EFB8u: goto label_16efb8;
            case 0x16EFBCu: goto label_16efbc;
            case 0x16EFC0u: goto label_16efc0;
            case 0x16EFC4u: goto label_16efc4;
            case 0x16EFC8u: goto label_16efc8;
            case 0x16EFCCu: goto label_16efcc;
            case 0x16EFD0u: goto label_16efd0;
            case 0x16EFD4u: goto label_16efd4;
            case 0x16EFD8u: goto label_16efd8;
            case 0x16EFDCu: goto label_16efdc;
            case 0x16EFE0u: goto label_16efe0;
            case 0x16EFE4u: goto label_16efe4;
            case 0x16EFE8u: goto label_16efe8;
            case 0x16EFECu: goto label_16efec;
            case 0x16EFF0u: goto label_16eff0;
            case 0x16EFF4u: goto label_16eff4;
            case 0x16EFF8u: goto label_16eff8;
            case 0x16EFFCu: goto label_16effc;
            case 0x16F000u: goto label_16f000;
            case 0x16F004u: goto label_16f004;
            case 0x16F008u: goto label_16f008;
            case 0x16F00Cu: goto label_16f00c;
            case 0x16F010u: goto label_16f010;
            case 0x16F014u: goto label_16f014;
            case 0x16F018u: goto label_16f018;
            case 0x16F01Cu: goto label_16f01c;
            case 0x16F020u: goto label_16f020;
            case 0x16F024u: goto label_16f024;
            case 0x16F028u: goto label_16f028;
            case 0x16F02Cu: goto label_16f02c;
            case 0x16F030u: goto label_16f030;
            case 0x16F034u: goto label_16f034;
            case 0x16F038u: goto label_16f038;
            case 0x16F03Cu: goto label_16f03c;
            case 0x16F040u: goto label_16f040;
            case 0x16F044u: goto label_16f044;
            case 0x16F048u: goto label_16f048;
            case 0x16F04Cu: goto label_16f04c;
            case 0x16F050u: goto label_16f050;
            case 0x16F054u: goto label_16f054;
            case 0x16F058u: goto label_16f058;
            case 0x16F05Cu: goto label_16f05c;
            case 0x16F060u: goto label_16f060;
            case 0x16F064u: goto label_16f064;
            case 0x16F068u: goto label_16f068;
            case 0x16F06Cu: goto label_16f06c;
            case 0x16F070u: goto label_16f070;
            case 0x16F074u: goto label_16f074;
            case 0x16F078u: goto label_16f078;
            case 0x16F07Cu: goto label_16f07c;
            case 0x16F080u: goto label_16f080;
            case 0x16F084u: goto label_16f084;
            case 0x16F088u: goto label_16f088;
            case 0x16F08Cu: goto label_16f08c;
            case 0x16F090u: goto label_16f090;
            case 0x16F094u: goto label_16f094;
            case 0x16F098u: goto label_16f098;
            case 0x16F09Cu: goto label_16f09c;
            case 0x16F0A0u: goto label_16f0a0;
            case 0x16F0A4u: goto label_16f0a4;
            case 0x16F0A8u: goto label_16f0a8;
            case 0x16F0ACu: goto label_16f0ac;
            case 0x16F0B0u: goto label_16f0b0;
            case 0x16F0B4u: goto label_16f0b4;
            case 0x16F0B8u: goto label_16f0b8;
            case 0x16F0BCu: goto label_16f0bc;
            case 0x16F0C0u: goto label_16f0c0;
            case 0x16F0C4u: goto label_16f0c4;
            case 0x16F0C8u: goto label_16f0c8;
            case 0x16F0CCu: goto label_16f0cc;
            case 0x16F0D0u: goto label_16f0d0;
            case 0x16F0D4u: goto label_16f0d4;
            case 0x16F0D8u: goto label_16f0d8;
            case 0x16F0DCu: goto label_16f0dc;
            case 0x16F0E0u: goto label_16f0e0;
            case 0x16F0E4u: goto label_16f0e4;
            default: break;
        }
        return;
    }
label_fallthrough_0x16f0e0:
    ctx->pc = 0x16F0E8u;
}
