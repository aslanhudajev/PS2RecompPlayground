#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerGiveGargItem
// Address: 0x276fb0 - 0x2770c0
void PlayerGiveGargItem_0x276fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x276fb0u;

    // 0x276fb0: 0x27bdffe0
    ctx->pc = 0x276fb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276fb4: 0xffb10010
    ctx->pc = 0x276fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x276fb8: 0x4810004
    ctx->pc = 0x276FB8u;
    {
        const bool branch_taken_0x276fb8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x276FBCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x276fb8) {
            ctx->pc = 0x276FCCu;
            goto label_276fcc;
        }
    }
    ctx->pc = 0x276FC0u;
    // 0x276fc0: 0x102d
    ctx->pc = 0x276fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276fc4: 0x10000002
    ctx->pc = 0x276FC4u;
    {
        const bool branch_taken_0x276fc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x276FC8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x276fc4) {
            ctx->pc = 0x276FD0u;
            goto label_276fd0;
        }
    }
    ctx->pc = 0x276FCCu;
label_276fcc:
    // 0x276fcc: 0x80102d
    ctx->pc = 0x276fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_276fd0:
    // 0x276fd0: 0x40502d
    ctx->pc = 0x276fd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276fd4: 0x8a102a
    ctx->pc = 0x276fd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 10)));
    // 0x276fd8: 0x14400036
    ctx->pc = 0x276FD8u;
    {
        const bool branch_taken_0x276fd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x276FDCu;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x276fd8) {
            ctx->pc = 0x2770B4u;
            goto label_2770b4;
        }
    }
    ctx->pc = 0x276FE0u;
    // 0x276fe0: 0x24102b00
    ctx->pc = 0x276fe0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x276fe4: 0x3c020032
    ctx->pc = 0x276fe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x276fe8: 0x24511bc0
    ctx->pc = 0x276fe8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x276fec: 0x24190001
    ctx->pc = 0x276fecu;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 1));
    // 0x276ff0: 0x24180004
    ctx->pc = 0x276ff0u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 4));
    // 0x276ff4: 0x3c020034
    ctx->pc = 0x276ff4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x276ff8: 0x2442fc08
    ctx->pc = 0x276ff8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966280));
    // 0x276ffc: 0x51880
    ctx->pc = 0x276ffcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x277000: 0x627021
    ctx->pc = 0x277000u;
    SET_GPR_U32(ctx, 14, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x277004: 0x3c020034
    ctx->pc = 0x277004u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x277008: 0x8c4de7f0
    ctx->pc = 0x277008u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x27700c: 0x240f000d
    ctx->pc = 0x27700cu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 13));
    // 0x277010: 0x24ac0100
    ctx->pc = 0x277010u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 5), 256));
    // 0x277014: 0x3c014040
    ctx->pc = 0x277014u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x277018: 0x44810000
    ctx->pc = 0x277018u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27701c: 0x1501018
    ctx->pc = 0x27701cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_277020:
    // 0x277020: 0x513821
    ctx->pc = 0x277020u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x277024: 0x8ce200fc
    ctx->pc = 0x277024u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 252)));
    // 0x277028: 0x10590004
    ctx->pc = 0x277028u;
    {
        const bool branch_taken_0x277028 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 25));
        ctx->pc = 0x27702Cu;
        SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x277028) {
            ctx->pc = 0x27703Cu;
            goto label_27703c;
        }
    }
    ctx->pc = 0x277030u;
    // 0x277030: 0x5458001c
    ctx->pc = 0x277030u;
    {
        const bool branch_taken_0x277030 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 24));
        if (branch_taken_0x277030) {
            ctx->pc = 0x277034u;
            SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
            ctx->pc = 0x2770A4u;
            goto label_2770a4;
        }
    }
    ctx->pc = 0x277038u;
    // 0x277038: 0x54840
    ctx->pc = 0x277038u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 5), 1));
label_27703c:
    // 0x27703c: 0x8ce3000c
    ctx->pc = 0x27703cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x277040: 0x240b00b4
    ctx->pc = 0x277040u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 180));
    // 0x277044: 0x6b1818
    ctx->pc = 0x277044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x277048: 0x1231821
    ctx->pc = 0x277048u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x27704c: 0x24e20d04
    ctx->pc = 0x27704cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 3332));
    // 0x277050: 0x433021
    ctx->pc = 0x277050u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277054: 0x84c30000
    ctx->pc = 0x277054u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277058: 0x460000f
    ctx->pc = 0x277058u;
    {
        const bool branch_taken_0x277058 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27705Cu;
        SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        if (branch_taken_0x277058) {
            ctx->pc = 0x277098u;
            goto label_277098;
        }
    }
    ctx->pc = 0x277060u;
    // 0x277060: 0x8dc20000
    ctx->pc = 0x277060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x277064: 0x62102a
    ctx->pc = 0x277064u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x277068: 0x1040000b
    ctx->pc = 0x277068u;
    {
        const bool branch_taken_0x277068 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27706Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x277068) {
            ctx->pc = 0x277098u;
            goto label_277098;
        }
    }
    ctx->pc = 0x277070u;
    // 0x277070: 0x15af0009
    ctx->pc = 0x277070u;
    {
        const bool branch_taken_0x277070 = (GPR_U32(ctx, 13) != GPR_U32(ctx, 15));
        ctx->pc = 0x277074u;
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x277070) {
            ctx->pc = 0x277098u;
            goto label_277098;
        }
    }
    ctx->pc = 0x277078u;
    // 0x277078: 0x8ce2000c
    ctx->pc = 0x277078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x27707c: 0x4b1818
    ctx->pc = 0x27707cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x277080: 0x691021
    ctx->pc = 0x277080u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x277084: 0x24e31d90
    ctx->pc = 0x277084u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 7568));
    // 0x277088: 0x621821
    ctx->pc = 0x277088u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27708c: 0x94620000
    ctx->pc = 0x27708cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x277090: 0x24420001
    ctx->pc = 0x277090u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x277094: 0xa4620000
    ctx->pc = 0x277094u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_277098:
    // 0x277098: 0xacec0900
    ctx->pc = 0x277098u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2304), GPR_U32(ctx, 12));
    // 0x27709c: 0xe4e00904
    ctx->pc = 0x27709cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 2308), bits); }
    // 0x2770a0: 0x254a0001
    ctx->pc = 0x2770a0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_2770a4:
    // 0x2770a4: 0x8a102a
    ctx->pc = 0x2770a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 10)));
    // 0x2770a8: 0x1040ffdd
    ctx->pc = 0x2770A8u;
    {
        const bool branch_taken_0x2770a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2770ACu;
        { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2770a8) {
            ctx->pc = 0x277020u;
            goto label_277020;
        }
    }
    ctx->pc = 0x2770B0u;
    // 0x2770b0: 0xdfb10010
    ctx->pc = 0x2770b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2770b4:
    // 0x2770b4: 0xdfb00000
    ctx->pc = 0x2770b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2770b8: 0x3e00008
    ctx->pc = 0x2770B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2770BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276FCCu: goto label_276fcc;
            case 0x276FD0u: goto label_276fd0;
            case 0x277020u: goto label_277020;
            case 0x27703Cu: goto label_27703c;
            case 0x277098u: goto label_277098;
            case 0x2770A4u: goto label_2770a4;
            case 0x2770B4u: goto label_2770b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2770C0u;
}
