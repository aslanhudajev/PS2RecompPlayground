#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dpdiv
// Address: 0x2f9068 - 0x2f91d0
void dpdiv_0x2f9068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f9068u;

    // 0x2f9068: 0x27bdff90
    ctx->pc = 0x2f9068u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f906c: 0xffa40040
    ctx->pc = 0x2f906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x2f9070: 0xffa50048
    ctx->pc = 0x2f9070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x2f9074: 0x27a40040
    ctx->pc = 0x2f9074u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f9078: 0xffb00050
    ctx->pc = 0x2f9078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2f907c: 0xffbf0060
    ctx->pc = 0x2f907cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f9080: 0xc0be288
    ctx->pc = 0x2F9080u;
    SET_GPR_U32(ctx, 31, 0x2F9088u);
    ctx->pc = 0x2F9084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x2f8a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9088u; }
    }
    if (ctx->pc != 0x2F9088u) { return; }
    ctx->pc = 0x2F9088u;
    // 0x2f9088: 0x27b00020
    ctx->pc = 0x2f9088u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f908c: 0x27a40048
    ctx->pc = 0x2f908cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 72));
    // 0x2f9090: 0xc0be288
    ctx->pc = 0x2F9090u;
    SET_GPR_U32(ctx, 31, 0x2F9098u);
    ctx->pc = 0x2F9094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x2f8a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9098u; }
    }
    if (ctx->pc != 0x2F9098u) { return; }
    ctx->pc = 0x2F9098u;
    // 0x2f9098: 0x8fa70000
    ctx->pc = 0x2f9098u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f909c: 0x2ce20002
    ctx->pc = 0x2f909cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), 2));
    // 0x2f90a0: 0x10400003
    ctx->pc = 0x2F90A0u;
    {
        const bool branch_taken_0x2f90a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F90A4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f90a0) {
            ctx->pc = 0x2F90B0u;
            goto label_2f90b0;
        }
    }
    ctx->pc = 0x2F90A8u;
    // 0x2f90a8: 0x10000043
    ctx->pc = 0x2F90A8u;
    {
        const bool branch_taken_0x2f90a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F90ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f90a8) {
            ctx->pc = 0x2F91B8u;
            goto label_2f91b8;
        }
    }
    ctx->pc = 0x2F90B0u;
label_2f90b0:
    // 0x2f90b0: 0x8fa60020
    ctx->pc = 0x2f90b0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f90b4: 0x2cc20002
    ctx->pc = 0x2f90b4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 2));
    // 0x2f90b8: 0x1440003f
    ctx->pc = 0x2F90B8u;
    {
        const bool branch_taken_0x2f90b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F90BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f90b8) {
            ctx->pc = 0x2F91B8u;
            goto label_2f91b8;
        }
    }
    ctx->pc = 0x2F90C0u;
    // 0x2f90c0: 0x8fa20004
    ctx->pc = 0x2f90c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f90c4: 0x38e40004
    ctx->pc = 0x2f90c4u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 7), 4));
    // 0x2f90c8: 0x8fa30024
    ctx->pc = 0x2f90c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2f90cc: 0x431026
    ctx->pc = 0x2f90ccu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f90d0: 0x10800004
    ctx->pc = 0x2F90D0u;
    {
        const bool branch_taken_0x2f90d0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F90D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x2f90d0) {
            ctx->pc = 0x2F90E4u;
            goto label_2f90e4;
        }
    }
    ctx->pc = 0x2F90D8u;
    // 0x2f90d8: 0x38e20002
    ctx->pc = 0x2f90d8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 7), 2));
    // 0x2f90dc: 0x14400006
    ctx->pc = 0x2F90DCu;
    {
        const bool branch_taken_0x2f90dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F90E0u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x2f90dc) {
            ctx->pc = 0x2F90F8u;
            goto label_2f90f8;
        }
    }
    ctx->pc = 0x2F90E4u;
label_2f90e4:
    // 0x2f90e4: 0x14e60034
    ctx->pc = 0x2F90E4u;
    {
        const bool branch_taken_0x2f90e4 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 6));
        ctx->pc = 0x2F90E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f90e4) {
            ctx->pc = 0x2F91B8u;
            goto label_2f91b8;
        }
    }
    ctx->pc = 0x2F90ECu;
    // 0x2f90ec: 0x3c02003e
    ctx->pc = 0x2f90ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x2f90f0: 0x10000031
    ctx->pc = 0x2F90F0u;
    {
        const bool branch_taken_0x2f90f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F90F4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 15864));
        if (branch_taken_0x2f90f0) {
            ctx->pc = 0x2F91B8u;
            goto label_2f91b8;
        }
    }
    ctx->pc = 0x2F90F8u;
label_2f90f8:
    // 0x2f90f8: 0x14400005
    ctx->pc = 0x2F90F8u;
    {
        const bool branch_taken_0x2f90f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F90FCu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x2f90f8) {
            ctx->pc = 0x2F9110u;
            goto label_2f9110;
        }
    }
    ctx->pc = 0x2F9100u;
    // 0x2f9100: 0xffa00010
    ctx->pc = 0x2f9100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x2f9104: 0x3a0202d
    ctx->pc = 0x2f9104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9108: 0x1000002b
    ctx->pc = 0x2F9108u;
    {
        const bool branch_taken_0x2f9108 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F910Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        if (branch_taken_0x2f9108) {
            ctx->pc = 0x2F91B8u;
            goto label_2f91b8;
        }
    }
    ctx->pc = 0x2F9110u;
label_2f9110:
    // 0x2f9110: 0x14400005
    ctx->pc = 0x2F9110u;
    {
        const bool branch_taken_0x2f9110 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F9114u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x2f9110) {
            ctx->pc = 0x2F9128u;
            goto label_2f9128;
        }
    }
    ctx->pc = 0x2F9118u;
    // 0x2f9118: 0x24020004
    ctx->pc = 0x2f9118u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f911c: 0x3a0202d
    ctx->pc = 0x2f911cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9120: 0x10000025
    ctx->pc = 0x2F9120u;
    {
        const bool branch_taken_0x2f9120 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9124u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2f9120) {
            ctx->pc = 0x2F91B8u;
            goto label_2f91b8;
        }
    }
    ctx->pc = 0x2F9128u;
label_2f9128:
    // 0x2f9128: 0x8fa20028
    ctx->pc = 0x2f9128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f912c: 0xdfa40010
    ctx->pc = 0x2f912cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9130: 0xdfa80030
    ctx->pc = 0x2f9130u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f9134: 0x621023
    ctx->pc = 0x2f9134u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f9138: 0x88302b
    ctx->pc = 0x2f9138u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2f913c: 0x10c00005
    ctx->pc = 0x2F913Cu;
    {
        const bool branch_taken_0x2f913c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9140u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x2f913c) {
            ctx->pc = 0x2F9154u;
            goto label_2f9154;
        }
    }
    ctx->pc = 0x2F9144u;
    // 0x2f9144: 0x2442ffff
    ctx->pc = 0x2f9144u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f9148: 0x42078
    ctx->pc = 0x2f9148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x2f914c: 0xafa20008
    ctx->pc = 0x2f914cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2f9150: 0x88302b
    ctx->pc = 0x2f9150u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_2f9154:
    // 0x2f9154: 0x34028000
    ctx->pc = 0x2f9154u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32768));
    // 0x2f9158: 0x2137c
    ctx->pc = 0x2f9158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2f915c: 0x10000003
    ctx->pc = 0x2F915Cu;
    {
        const bool branch_taken_0x2f915c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F9160u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f915c) {
            ctx->pc = 0x2F916Cu;
            goto label_2f916c;
        }
    }
    ctx->pc = 0x2F9164u;
    // 0x2f9164: 0x0
    ctx->pc = 0x2f9164u;
    // NOP
label_2f9168:
    // 0x2f9168: 0x88302b
    ctx->pc = 0x2f9168u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_2f916c:
    // 0x2f916c: 0x54c00004
    ctx->pc = 0x2F916Cu;
    {
        const bool branch_taken_0x2f916c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f916c) {
            ctx->pc = 0x2F9170u;
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
            ctx->pc = 0x2F9180u;
            goto label_2f9180;
        }
    }
    ctx->pc = 0x2F9174u;
    // 0x2f9174: 0xe23825
    ctx->pc = 0x2f9174u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2f9178: 0x88202f
    ctx->pc = 0x2f9178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
    // 0x2f917c: 0x2107a
    ctx->pc = 0x2f917cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_2f9180:
    // 0x2f9180: 0x1440fff9
    ctx->pc = 0x2F9180u;
    {
        const bool branch_taken_0x2f9180 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F9184u;
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        if (branch_taken_0x2f9180) {
            ctx->pc = 0x2F9168u;
            goto label_2f9168;
        }
    }
    ctx->pc = 0x2F9188u;
    // 0x2f9188: 0x30e300ff
    ctx->pc = 0x2f9188u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 7), 255));
    // 0x2f918c: 0x24020080
    ctx->pc = 0x2f918cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x2f9190: 0x54620008
    ctx->pc = 0x2F9190u;
    {
        const bool branch_taken_0x2f9190 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2f9190) {
            ctx->pc = 0x2F9194u;
            WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
            ctx->pc = 0x2F91B4u;
            goto label_2f91b4;
        }
    }
    ctx->pc = 0x2F9198u;
    // 0x2f9198: 0x30e20100
    ctx->pc = 0x2f9198u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), 256));
    // 0x2f919c: 0x10400003
    ctx->pc = 0x2F919Cu;
    {
        const bool branch_taken_0x2f919c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F91A0u;
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)128);
        if (branch_taken_0x2f919c) {
            ctx->pc = 0x2F91ACu;
            goto label_2f91ac;
        }
    }
    ctx->pc = 0x2F91A4u;
    // 0x2f91a4: 0x10000002
    ctx->pc = 0x2F91A4u;
    {
        const bool branch_taken_0x2f91a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F91A8u;
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)128);
        if (branch_taken_0x2f91a4) {
            ctx->pc = 0x2F91B0u;
            goto label_2f91b0;
        }
    }
    ctx->pc = 0x2F91ACu;
label_2f91ac:
    // 0x2f91ac: 0x44380b
    ctx->pc = 0x2f91acu;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
label_2f91b0:
    // 0x2f91b0: 0xfca70010
    ctx->pc = 0x2f91b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_2f91b4:
    // 0x2f91b4: 0xa0202d
    ctx->pc = 0x2f91b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f91b8:
    // 0x2f91b8: 0xc0be23c
    ctx->pc = 0x2F91B8u;
    SET_GPR_U32(ctx, 31, 0x2F91C0u);
    ctx->pc = 0x2F88F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x2f88f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F91C0u; }
    }
    if (ctx->pc != 0x2F91C0u) { return; }
    ctx->pc = 0x2F91C0u;
    // 0x2f91c0: 0xdfbf0060
    ctx->pc = 0x2f91c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f91c4: 0xdfb00050
    ctx->pc = 0x2f91c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f91c8: 0x3e00008
    ctx->pc = 0x2F91C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F91CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F90B0u: goto label_2f90b0;
            case 0x2F90E4u: goto label_2f90e4;
            case 0x2F90F8u: goto label_2f90f8;
            case 0x2F9110u: goto label_2f9110;
            case 0x2F9128u: goto label_2f9128;
            case 0x2F9154u: goto label_2f9154;
            case 0x2F9168u: goto label_2f9168;
            case 0x2F916Cu: goto label_2f916c;
            case 0x2F9180u: goto label_2f9180;
            case 0x2F91ACu: goto label_2f91ac;
            case 0x2F91B0u: goto label_2f91b0;
            case 0x2F91B4u: goto label_2f91b4;
            case 0x2F91B8u: goto label_2f91b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F91D0u;
}
