#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: inflate_fast
// Address: 0x2daef0 - 0x2db2ac
void inflate_fast_0x2daef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2daef0u;

    // 0x2daef0: 0x27bdffe0
    ctx->pc = 0x2daef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2daef4: 0xffb10010
    ctx->pc = 0x2daef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2daef8: 0xffb00000
    ctx->pc = 0x2daef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2daefc: 0x80182d
    ctx->pc = 0x2daefcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf00: 0xc0882d
    ctx->pc = 0x2daf00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf04: 0x8d380000
    ctx->pc = 0x2daf04u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2daf08: 0x8d390004
    ctx->pc = 0x2daf08u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2daf0c: 0x8d0e0020
    ctx->pc = 0x2daf0cu;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x2daf10: 0x8d0f0030
    ctx->pc = 0x2daf10u;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x2daf14: 0x8d0a002c
    ctx->pc = 0x2daf14u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x2daf18: 0x1ea102b
    ctx->pc = 0x2daf18u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x2daf1c: 0x10400016
    ctx->pc = 0x2DAF1Cu;
    {
        const bool branch_taken_0x2daf1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAF20u;
        SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 8), 28)));
        if (branch_taken_0x2daf1c) {
            ctx->pc = 0x2DAF78u;
            goto label_2daf78;
        }
    }
    ctx->pc = 0x2DAF24u;
    // 0x2daf24: 0x14f2023
    ctx->pc = 0x2daf24u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 15)));
    // 0x2daf28: 0x10000015
    ctx->pc = 0x2DAF28u;
    {
        const bool branch_taken_0x2daf28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAF2Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
        if (branch_taken_0x2daf28) {
            ctx->pc = 0x2DAF80u;
            goto label_2daf80;
        }
    }
    ctx->pc = 0x2DAF30u;
label_2daf30:
    // 0x2daf30: 0x32dc821
    ctx->pc = 0x2daf30u;
    SET_GPR_U32(ctx, 25, ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x2daf34: 0x30dc023
    ctx->pc = 0x2daf34u;
    SET_GPR_U32(ctx, 24, SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 13)));
    // 0x2daf38: 0x318c0007
    ctx->pc = 0x2daf38u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), 7));
    // 0x2daf3c: 0xad0e0020
    ctx->pc = 0x2daf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 14));
    // 0x2daf40: 0xad0c001c
    ctx->pc = 0x2daf40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 12));
    // 0x2daf44: 0xad390004
    ctx->pc = 0x2daf44u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 25));
    // 0x2daf48: 0x8d220000
    ctx->pc = 0x2daf48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2daf4c: 0x3021023
    ctx->pc = 0x2daf4cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x2daf50: 0x8d230008
    ctx->pc = 0x2daf50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2daf54: 0x431021
    ctx->pc = 0x2daf54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2daf58: 0xad220008
    ctx->pc = 0x2daf58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x2daf5c: 0xad380000
    ctx->pc = 0x2daf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 24));
    // 0x2daf60: 0xad0f0030
    ctx->pc = 0x2daf60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 15));
    // 0x2daf64: 0x100000cd
    ctx->pc = 0x2DAF64u;
    {
        const bool branch_taken_0x2daf64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAF68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2daf64) {
            ctx->pc = 0x2DB29Cu;
            goto label_2db29c;
        }
    }
    ctx->pc = 0x2DAF6Cu;
label_2daf6c:
    // 0x2daf6c: 0x24428238
    ctx->pc = 0x2daf6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935096));
    // 0x2daf70: 0x1000003a
    ctx->pc = 0x2DAF70u;
    {
        const bool branch_taken_0x2daf70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAF74u;
        WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x2daf70) {
            ctx->pc = 0x2DB05Cu;
            goto label_2db05c;
        }
    }
    ctx->pc = 0x2DAF78u;
label_2daf78:
    // 0x2daf78: 0x8d020028
    ctx->pc = 0x2daf78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x2daf7c: 0x4f2023
    ctx->pc = 0x2daf7cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
label_2daf80:
    // 0x2daf80: 0x3c02003a
    ctx->pc = 0x2daf80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2daf84: 0x24422720
    ctx->pc = 0x2daf84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 10016));
    // 0x2daf88: 0x31880
    ctx->pc = 0x2daf88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2daf8c: 0x621821
    ctx->pc = 0x2daf8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2daf90: 0x8c700000
    ctx->pc = 0x2daf90u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2daf94: 0x51880
    ctx->pc = 0x2daf94u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2daf98: 0x621821
    ctx->pc = 0x2daf98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2daf9c: 0x1000000b
    ctx->pc = 0x2DAF9Cu;
    {
        const bool branch_taken_0x2daf9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAFA0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x2daf9c) {
            ctx->pc = 0x2DAFCCu;
            goto label_2dafcc;
        }
    }
    ctx->pc = 0x2DAFA4u;
    // 0x2dafa4: 0x0
    ctx->pc = 0x2dafa4u;
    // NOP
label_2dafa8:
    // 0x2dafa8: 0x144000ad
    ctx->pc = 0x2DAFA8u;
    {
        const bool branch_taken_0x2dafa8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DAFACu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 12), 20));
        if (branch_taken_0x2dafa8) {
            ctx->pc = 0x2DB260u;
            goto label_2db260;
        }
    }
    ctx->pc = 0x2DAFB0u;
    // 0x2dafb0: 0x10000007
    ctx->pc = 0x2DAFB0u;
    {
        const bool branch_taken_0x2dafb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dafb0) {
            ctx->pc = 0x2DAFD0u;
            goto label_2dafd0;
        }
    }
    ctx->pc = 0x2DAFB8u;
label_2dafb8:
    // 0x2dafb8: 0x93020000
    ctx->pc = 0x2dafb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2dafbc: 0x1821004
    ctx->pc = 0x2dafbcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 12) & 0x1F));
    // 0x2dafc0: 0x1c27025
    ctx->pc = 0x2dafc0u;
    SET_GPR_U32(ctx, 14, OR32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2dafc4: 0x27180001
    ctx->pc = 0x2dafc4u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 1));
    // 0x2dafc8: 0x258c0008
    ctx->pc = 0x2dafc8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 8));
label_2dafcc:
    // 0x2dafcc: 0x2d820014
    ctx->pc = 0x2dafccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 12), 20));
label_2dafd0:
    // 0x2dafd0: 0x5440fff9
    ctx->pc = 0x2DAFD0u;
    {
        const bool branch_taken_0x2dafd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2dafd0) {
            ctx->pc = 0x2DAFD4u;
            SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 4294967295));
            ctx->pc = 0x2DAFB8u;
            goto label_2dafb8;
        }
    }
    ctx->pc = 0x2DAFD8u;
    // 0x2dafd8: 0x1d01024
    ctx->pc = 0x2dafd8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x2dafdc: 0x210c0
    ctx->pc = 0x2dafdcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x2dafe0: 0x2225821
    ctx->pc = 0x2dafe0u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2dafe4: 0x916a0000
    ctx->pc = 0x2dafe4u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2dafe8: 0x11400011
    ctx->pc = 0x2DAFE8u;
    {
        const bool branch_taken_0x2dafe8 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAFECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2dafe8) {
            ctx->pc = 0x2DB030u;
            goto label_2db030;
        }
    }
    ctx->pc = 0x2DAFF0u;
    // 0x2daff0: 0x244d2720
    ctx->pc = 0x2daff0u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 2), 10016));
    // 0x2daff4: 0x3c02003c
    ctx->pc = 0x2daff4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2daff8: 0x10000028
    ctx->pc = 0x2DAFF8u;
    {
        const bool branch_taken_0x2daff8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DAFFCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294935120));
        if (branch_taken_0x2daff8) {
            ctx->pc = 0x2DB09Cu;
            goto label_2db09c;
        }
    }
    ctx->pc = 0x2DB000u;
label_2db000:
    // 0x2db000: 0x14400013
    ctx->pc = 0x2DB000u;
    {
        const bool branch_taken_0x2db000 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DB004u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 10), 32));
        if (branch_taken_0x2db000) {
            ctx->pc = 0x2DB050u;
            goto label_2db050;
        }
    }
    ctx->pc = 0x2DB008u;
    // 0x2db008: 0xa1080
    ctx->pc = 0x2db008u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 2));
    // 0x2db00c: 0x4d1021
    ctx->pc = 0x2db00cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2db010: 0x8c420000
    ctx->pc = 0x2db010u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db014: 0x1c21024
    ctx->pc = 0x2db014u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2db018: 0x210c0
    ctx->pc = 0x2db018u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x2db01c: 0x8d630004
    ctx->pc = 0x2db01cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2db020: 0x435821
    ctx->pc = 0x2db020u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2db024: 0x916a0000
    ctx->pc = 0x2db024u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2db028: 0x5540001d
    ctx->pc = 0x2DB028u;
    {
        const bool branch_taken_0x2db028 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        if (branch_taken_0x2db028) {
            ctx->pc = 0x2DB02Cu;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
            ctx->pc = 0x2DB0A0u;
            goto label_2db0a0;
        }
    }
    ctx->pc = 0x2DB030u;
label_2db030:
    // 0x2db030: 0x91620001
    ctx->pc = 0x2db030u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x2db034: 0x4e7006
    ctx->pc = 0x2db034u;
    SET_GPR_U32(ctx, 14, SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 2) & 0x1F));
    // 0x2db038: 0x1826023
    ctx->pc = 0x2db038u;
    SET_GPR_U32(ctx, 12, SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2db03c: 0x91620004
    ctx->pc = 0x2db03cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2db040: 0xa1e20000
    ctx->pc = 0x2db040u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2db044: 0x25ef0001
    ctx->pc = 0x2db044u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 1));
    // 0x2db048: 0x10000082
    ctx->pc = 0x2DB048u;
    {
        const bool branch_taken_0x2db048 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB04Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
        if (branch_taken_0x2db048) {
            ctx->pc = 0x2DB254u;
            goto label_2db254;
        }
    }
    ctx->pc = 0x2DB050u;
label_2db050:
    // 0x2db050: 0x1440ffb7
    ctx->pc = 0x2DB050u;
    {
        const bool branch_taken_0x2db050 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DB054u;
        SET_GPR_U32(ctx, 13, SRL32(GPR_U32(ctx, 12), 3));
        if (branch_taken_0x2db050) {
            ctx->pc = 0x2DAF30u;
            goto label_2daf30;
        }
    }
    ctx->pc = 0x2DB058u;
    // 0x2db058: 0xad250018
    ctx->pc = 0x2db058u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 5));
label_2db05c:
    // 0x2db05c: 0xc68c2
    ctx->pc = 0x2db05cu;
    SET_GPR_U32(ctx, 13, SRL32(GPR_U32(ctx, 12), 3));
    // 0x2db060: 0x32dc821
    ctx->pc = 0x2db060u;
    SET_GPR_U32(ctx, 25, ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x2db064: 0x30dc023
    ctx->pc = 0x2db064u;
    SET_GPR_U32(ctx, 24, SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 13)));
    // 0x2db068: 0x318c0007
    ctx->pc = 0x2db068u;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), 7));
    // 0x2db06c: 0xad0e0020
    ctx->pc = 0x2db06cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 14));
    // 0x2db070: 0xad0c001c
    ctx->pc = 0x2db070u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 12));
    // 0x2db074: 0xad390004
    ctx->pc = 0x2db074u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 25));
    // 0x2db078: 0x8d220000
    ctx->pc = 0x2db078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2db07c: 0x3021023
    ctx->pc = 0x2db07cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x2db080: 0x8d230008
    ctx->pc = 0x2db080u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2db084: 0x431021
    ctx->pc = 0x2db084u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2db088: 0xad220008
    ctx->pc = 0x2db088u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x2db08c: 0xad380000
    ctx->pc = 0x2db08cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 24));
    // 0x2db090: 0xad0f0030
    ctx->pc = 0x2db090u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 15));
    // 0x2db094: 0x10000081
    ctx->pc = 0x2DB094u;
    {
        const bool branch_taken_0x2db094 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB098u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x2db094) {
            ctx->pc = 0x2DB29Cu;
            goto label_2db29c;
        }
    }
    ctx->pc = 0x2DB09Cu;
label_2db09c:
    // 0x2db09c: 0x91620001
    ctx->pc = 0x2db09cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
label_2db0a0:
    // 0x2db0a0: 0x4e7006
    ctx->pc = 0x2db0a0u;
    SET_GPR_U32(ctx, 14, SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 2) & 0x1F));
    // 0x2db0a4: 0x1826023
    ctx->pc = 0x2db0a4u;
    SET_GPR_U32(ctx, 12, SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2db0a8: 0x31420010
    ctx->pc = 0x2db0a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 10), 16));
    // 0x2db0ac: 0x1040ffd4
    ctx->pc = 0x2DB0ACu;
    {
        const bool branch_taken_0x2db0ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB0B0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 10), 64));
        if (branch_taken_0x2db0ac) {
            ctx->pc = 0x2DB000u;
            goto label_2db000;
        }
    }
    ctx->pc = 0x2DB0B4u;
    // 0x2db0b4: 0x314a000f
    ctx->pc = 0x2db0b4u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 10), 15));
    // 0x2db0b8: 0xa1080
    ctx->pc = 0x2db0b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 2));
    // 0x2db0bc: 0x4d1021
    ctx->pc = 0x2db0bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x2db0c0: 0x8c420000
    ctx->pc = 0x2db0c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db0c4: 0x1c21024
    ctx->pc = 0x2db0c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2db0c8: 0x8d630004
    ctx->pc = 0x2db0c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2db0cc: 0x436821
    ctx->pc = 0x2db0ccu;
    SET_GPR_U32(ctx, 13, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2db0d0: 0x18a6023
    ctx->pc = 0x2db0d0u;
    SET_GPR_U32(ctx, 12, SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x2db0d4: 0x2d82000f
    ctx->pc = 0x2db0d4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 12), 15));
    // 0x2db0d8: 0x10400009
    ctx->pc = 0x2DB0D8u;
    {
        const bool branch_taken_0x2db0d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB0DCu;
        SET_GPR_U32(ctx, 14, SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 10) & 0x1F));
        if (branch_taken_0x2db0d8) {
            ctx->pc = 0x2DB100u;
            goto label_2db100;
        }
    }
    ctx->pc = 0x2DB0E0u;
label_2db0e0:
    // 0x2db0e0: 0x2739ffff
    ctx->pc = 0x2db0e0u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x2db0e4: 0x93020000
    ctx->pc = 0x2db0e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2db0e8: 0x1821004
    ctx->pc = 0x2db0e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 12) & 0x1F));
    // 0x2db0ec: 0x1c27025
    ctx->pc = 0x2db0ecu;
    SET_GPR_U32(ctx, 14, OR32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2db0f0: 0x258c0008
    ctx->pc = 0x2db0f0u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 8));
    // 0x2db0f4: 0x2d82000f
    ctx->pc = 0x2db0f4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 12), 15));
    // 0x2db0f8: 0x1440fff9
    ctx->pc = 0x2DB0F8u;
    {
        const bool branch_taken_0x2db0f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DB0FCu;
        SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 1));
        if (branch_taken_0x2db0f8) {
            ctx->pc = 0x2DB0E0u;
            goto label_2db0e0;
        }
    }
    ctx->pc = 0x2DB100u;
label_2db100:
    // 0x2db100: 0x1c61024
    ctx->pc = 0x2db100u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x2db104: 0x210c0
    ctx->pc = 0x2db104u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x2db108: 0xe25821
    ctx->pc = 0x2db108u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2db10c: 0x916a0000
    ctx->pc = 0x2db10cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2db110: 0x3c02003a
    ctx->pc = 0x2db110u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2db114: 0x1000000c
    ctx->pc = 0x2DB114u;
    {
        const bool branch_taken_0x2db114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB118u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 10016));
        if (branch_taken_0x2db114) {
            ctx->pc = 0x2DB148u;
            goto label_2db148;
        }
    }
    ctx->pc = 0x2DB11Cu;
    // 0x2db11c: 0x0
    ctx->pc = 0x2db11cu;
    // NOP
label_2db120:
    // 0x2db120: 0x1440ff92
    ctx->pc = 0x2DB120u;
    {
        const bool branch_taken_0x2db120 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DB124u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2db120) {
            ctx->pc = 0x2DAF6Cu;
            goto label_2daf6c;
        }
    }
    ctx->pc = 0x2DB128u;
    // 0x2db128: 0xa1080
    ctx->pc = 0x2db128u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 2));
    // 0x2db12c: 0x451021
    ctx->pc = 0x2db12cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2db130: 0x8c420000
    ctx->pc = 0x2db130u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db134: 0x1c21024
    ctx->pc = 0x2db134u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2db138: 0x210c0
    ctx->pc = 0x2db138u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x2db13c: 0x8d630004
    ctx->pc = 0x2db13cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2db140: 0x435821
    ctx->pc = 0x2db140u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2db144: 0x916a0000
    ctx->pc = 0x2db144u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_2db148:
    // 0x2db148: 0x91620001
    ctx->pc = 0x2db148u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x2db14c: 0x4e7006
    ctx->pc = 0x2db14cu;
    SET_GPR_U32(ctx, 14, SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 2) & 0x1F));
    // 0x2db150: 0x1826023
    ctx->pc = 0x2db150u;
    SET_GPR_U32(ctx, 12, SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2db154: 0x31420010
    ctx->pc = 0x2db154u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 10), 16));
    // 0x2db158: 0x1040fff1
    ctx->pc = 0x2DB158u;
    {
        const bool branch_taken_0x2db158 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB15Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 10), 64));
        if (branch_taken_0x2db158) {
            ctx->pc = 0x2DB120u;
            goto label_2db120;
        }
    }
    ctx->pc = 0x2DB160u;
    // 0x2db160: 0x314a000f
    ctx->pc = 0x2db160u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 10), 15));
    // 0x2db164: 0x18a102b
    ctx->pc = 0x2db164u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x2db168: 0x1040000a
    ctx->pc = 0x2DB168u;
    {
        const bool branch_taken_0x2db168 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB16Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 2));
        if (branch_taken_0x2db168) {
            ctx->pc = 0x2DB194u;
            goto label_2db194;
        }
    }
    ctx->pc = 0x2DB170u;
label_2db170:
    // 0x2db170: 0x2739ffff
    ctx->pc = 0x2db170u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x2db174: 0x93020000
    ctx->pc = 0x2db174u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x2db178: 0x1821004
    ctx->pc = 0x2db178u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 12) & 0x1F));
    // 0x2db17c: 0x1c27025
    ctx->pc = 0x2db17cu;
    SET_GPR_U32(ctx, 14, OR32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2db180: 0x258c0008
    ctx->pc = 0x2db180u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 8));
    // 0x2db184: 0x18a102b
    ctx->pc = 0x2db184u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x2db188: 0x1440fff9
    ctx->pc = 0x2DB188u;
    {
        const bool branch_taken_0x2db188 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DB18Cu;
        SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 24), 1));
        if (branch_taken_0x2db188) {
            ctx->pc = 0x2DB170u;
            goto label_2db170;
        }
    }
    ctx->pc = 0x2DB190u;
    // 0x2db190: 0xa1080
    ctx->pc = 0x2db190u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 2));
label_2db194:
    // 0x2db194: 0x451021
    ctx->pc = 0x2db194u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2db198: 0x8c430000
    ctx->pc = 0x2db198u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db19c: 0x1c31824
    ctx->pc = 0x2db19cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x2db1a0: 0x8d620004
    ctx->pc = 0x2db1a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2db1a4: 0x621821
    ctx->pc = 0x2db1a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2db1a8: 0x14e7006
    ctx->pc = 0x2db1a8u;
    SET_GPR_U32(ctx, 14, SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 10) & 0x1F));
    // 0x2db1ac: 0x18a6023
    ctx->pc = 0x2db1acu;
    SET_GPR_U32(ctx, 12, SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x2db1b0: 0x8d020024
    ctx->pc = 0x2db1b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x2db1b4: 0x1e21023
    ctx->pc = 0x2db1b4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x2db1b8: 0x43102b
    ctx->pc = 0x2db1b8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2db1bc: 0x1440000c
    ctx->pc = 0x2DB1BCu;
    {
        const bool branch_taken_0x2db1bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DB1C0u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
        if (branch_taken_0x2db1bc) {
            ctx->pc = 0x2DB1F0u;
            goto label_2db1f0;
        }
    }
    ctx->pc = 0x2DB1C4u;
    // 0x2db1c4: 0x1e31823
    ctx->pc = 0x2db1c4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x2db1c8: 0x90620000
    ctx->pc = 0x2db1c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db1cc: 0xa1e20000
    ctx->pc = 0x2db1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2db1d0: 0x24630001
    ctx->pc = 0x2db1d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2db1d4: 0x25ef0001
    ctx->pc = 0x2db1d4u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 1));
    // 0x2db1d8: 0x90620000
    ctx->pc = 0x2db1d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db1dc: 0xa1e20000
    ctx->pc = 0x2db1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2db1e0: 0x24630001
    ctx->pc = 0x2db1e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2db1e4: 0x25ef0001
    ctx->pc = 0x2db1e4u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 1));
    // 0x2db1e8: 0x10000013
    ctx->pc = 0x2DB1E8u;
    {
        const bool branch_taken_0x2db1e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB1ECu;
        SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 4294967294));
        if (branch_taken_0x2db1e8) {
            ctx->pc = 0x2DB238u;
            goto label_2db238;
        }
    }
    ctx->pc = 0x2DB1F0u;
label_2db1f0:
    // 0x2db1f0: 0x8d020024
    ctx->pc = 0x2db1f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x2db1f4: 0x1e21023
    ctx->pc = 0x2db1f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x2db1f8: 0x625023
    ctx->pc = 0x2db1f8u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2db1fc: 0x8d020028
    ctx->pc = 0x2db1fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x2db200: 0x4a1823
    ctx->pc = 0x2db200u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2db204: 0x14d102b
    ctx->pc = 0x2db204u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x2db208: 0x5040000c
    ctx->pc = 0x2DB208u;
    {
        const bool branch_taken_0x2db208 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2db208) {
            ctx->pc = 0x2DB20Cu;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->pc = 0x2DB23Cu;
            goto label_2db23c;
        }
    }
    ctx->pc = 0x2DB210u;
    // 0x2db210: 0x1aa6823
    ctx->pc = 0x2db210u;
    SET_GPR_U32(ctx, 13, SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x2db214: 0x0
    ctx->pc = 0x2db214u;
    // NOP
label_2db218:
    // 0x2db218: 0x90620000
    ctx->pc = 0x2db218u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2db21c: 0xa1e20000
    ctx->pc = 0x2db21cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2db220: 0x24630001
    ctx->pc = 0x2db220u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2db224: 0x25ef0001
    ctx->pc = 0x2db224u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 1));
    // 0x2db228: 0x254affff
    ctx->pc = 0x2db228u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2db22c: 0x1540fffa
    ctx->pc = 0x2DB22Cu;
    {
        const bool branch_taken_0x2db22c = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        if (branch_taken_0x2db22c) {
            ctx->pc = 0x2DB218u;
            goto label_2db218;
        }
    }
    ctx->pc = 0x2DB234u;
    // 0x2db234: 0x8d030024
    ctx->pc = 0x2db234u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 36)));
label_2db238:
    // 0x2db238: 0x90620000
    ctx->pc = 0x2db238u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2db23c:
    // 0x2db23c: 0xa1e20000
    ctx->pc = 0x2db23cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2db240: 0x24630001
    ctx->pc = 0x2db240u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2db244: 0x25ef0001
    ctx->pc = 0x2db244u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 1));
    // 0x2db248: 0x25adffff
    ctx->pc = 0x2db248u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x2db24c: 0x15a0fffa
    ctx->pc = 0x2DB24Cu;
    {
        const bool branch_taken_0x2db24c = (GPR_U32(ctx, 13) != GPR_U32(ctx, 0));
        if (branch_taken_0x2db24c) {
            ctx->pc = 0x2DB238u;
            goto label_2db238;
        }
    }
    ctx->pc = 0x2DB254u;
label_2db254:
    // 0x2db254: 0x2c820102
    ctx->pc = 0x2db254u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 258));
    // 0x2db258: 0x1040ff53
    ctx->pc = 0x2DB258u;
    {
        const bool branch_taken_0x2db258 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DB25Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 25), 10));
        if (branch_taken_0x2db258) {
            ctx->pc = 0x2DAFA8u;
            goto label_2dafa8;
        }
    }
    ctx->pc = 0x2DB260u;
label_2db260:
    // 0x2db260: 0xc68c2
    ctx->pc = 0x2db260u;
    SET_GPR_U32(ctx, 13, SRL32(GPR_U32(ctx, 12), 3));
    // 0x2db264: 0x32dc821
    ctx->pc = 0x2db264u;
    SET_GPR_U32(ctx, 25, ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x2db268: 0x30dc023
    ctx->pc = 0x2db268u;
    SET_GPR_U32(ctx, 24, SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 13)));
    // 0x2db26c: 0x318c0007
    ctx->pc = 0x2db26cu;
    SET_GPR_U32(ctx, 12, AND32(GPR_U32(ctx, 12), 7));
    // 0x2db270: 0xad0e0020
    ctx->pc = 0x2db270u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 14));
    // 0x2db274: 0xad0c001c
    ctx->pc = 0x2db274u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 12));
    // 0x2db278: 0xad390004
    ctx->pc = 0x2db278u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 25));
    // 0x2db27c: 0x8d220000
    ctx->pc = 0x2db27cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2db280: 0x3021023
    ctx->pc = 0x2db280u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x2db284: 0x8d230008
    ctx->pc = 0x2db284u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2db288: 0x431021
    ctx->pc = 0x2db288u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2db28c: 0xad220008
    ctx->pc = 0x2db28cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x2db290: 0xad380000
    ctx->pc = 0x2db290u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 24));
    // 0x2db294: 0xad0f0030
    ctx->pc = 0x2db294u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 15));
    // 0x2db298: 0x102d
    ctx->pc = 0x2db298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db29c:
    // 0x2db29c: 0xdfb10010
    ctx->pc = 0x2db29cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db2a0: 0xdfb00000
    ctx->pc = 0x2db2a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db2a4: 0x3e00008
    ctx->pc = 0x2DB2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB2A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DAF30u: goto label_2daf30;
            case 0x2DAF6Cu: goto label_2daf6c;
            case 0x2DAF78u: goto label_2daf78;
            case 0x2DAF80u: goto label_2daf80;
            case 0x2DAFA8u: goto label_2dafa8;
            case 0x2DAFB8u: goto label_2dafb8;
            case 0x2DAFCCu: goto label_2dafcc;
            case 0x2DAFD0u: goto label_2dafd0;
            case 0x2DB000u: goto label_2db000;
            case 0x2DB030u: goto label_2db030;
            case 0x2DB050u: goto label_2db050;
            case 0x2DB05Cu: goto label_2db05c;
            case 0x2DB09Cu: goto label_2db09c;
            case 0x2DB0A0u: goto label_2db0a0;
            case 0x2DB0E0u: goto label_2db0e0;
            case 0x2DB100u: goto label_2db100;
            case 0x2DB120u: goto label_2db120;
            case 0x2DB148u: goto label_2db148;
            case 0x2DB170u: goto label_2db170;
            case 0x2DB194u: goto label_2db194;
            case 0x2DB1F0u: goto label_2db1f0;
            case 0x2DB218u: goto label_2db218;
            case 0x2DB238u: goto label_2db238;
            case 0x2DB23Cu: goto label_2db23c;
            case 0x2DB254u: goto label_2db254;
            case 0x2DB260u: goto label_2db260;
            case 0x2DB29Cu: goto label_2db29c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DB2ACu;
}
