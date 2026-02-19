#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioEffect
// Address: 0x25fcf0 - 0x25fe48
void AudioEffect_0x25fcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fcf0u;

label_25fcf0:
    // 0x25fcf0: 0x27bdffb0
    ctx->pc = 0x25fcf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_25fcf4:
    // 0x25fcf4: 0xffbf0040
    ctx->pc = 0x25fcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_25fcf8:
    // 0x25fcf8: 0xffb30030
    ctx->pc = 0x25fcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_25fcfc:
    // 0x25fcfc: 0xffb20020
    ctx->pc = 0x25fcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_25fd00:
    // 0x25fd00: 0xffb10010
    ctx->pc = 0x25fd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_25fd04:
    // 0x25fd04: 0xffb00000
    ctx->pc = 0x25fd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_25fd08:
    // 0x25fd08: 0xa0982d
    ctx->pc = 0x25fd08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25fd0c:
    // 0x25fd0c: 0x241200e0
    ctx->pc = 0x25fd0cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 224));
label_25fd10:
    // 0x25fd10: 0x2410007e
    ctx->pc = 0x25fd10u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 126));
label_25fd14:
    // 0x25fd14: 0x2483ffff
    ctx->pc = 0x25fd14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967295));
label_25fd18:
    // 0x25fd18: 0x2c62000c
    ctx->pc = 0x25fd18u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 12));
label_25fd1c:
    // 0x25fd1c: 0x10400037
label_25fd20:
    if (ctx->pc == 0x25FD20u) {
        ctx->pc = 0x25FD20u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x25FD24u;
        goto label_25fd24;
    }
    ctx->pc = 0x25FD1Cu;
    {
        const bool branch_taken_0x25fd1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FD20u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x25fd1c) {
            ctx->pc = 0x25FDFCu;
            goto label_25fdfc;
        }
    }
    ctx->pc = 0x25FD24u;
label_25fd24:
    // 0x25fd24: 0x3c02003b
    ctx->pc = 0x25fd24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
label_25fd28:
    // 0x25fd28: 0x24429630
    ctx->pc = 0x25fd28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940208));
label_25fd2c:
    // 0x25fd2c: 0x31880
    ctx->pc = 0x25fd2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_25fd30:
    // 0x25fd30: 0x621821
    ctx->pc = 0x25fd30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25fd34:
    // 0x25fd34: 0x8c620000
    ctx->pc = 0x25fd34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25fd38:
    // 0x25fd38: 0x400008
label_25fd3c:
    if (ctx->pc == 0x25FD3Cu) {
        ctx->pc = 0x25FD40u;
        goto label_25fd40;
    }
    ctx->pc = 0x25FD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25FCF0u: goto label_25fcf0;
            case 0x25FCF4u: goto label_25fcf4;
            case 0x25FCF8u: goto label_25fcf8;
            case 0x25FCFCu: goto label_25fcfc;
            case 0x25FD00u: goto label_25fd00;
            case 0x25FD04u: goto label_25fd04;
            case 0x25FD08u: goto label_25fd08;
            case 0x25FD0Cu: goto label_25fd0c;
            case 0x25FD10u: goto label_25fd10;
            case 0x25FD14u: goto label_25fd14;
            case 0x25FD18u: goto label_25fd18;
            case 0x25FD1Cu: goto label_25fd1c;
            case 0x25FD20u: goto label_25fd20;
            case 0x25FD24u: goto label_25fd24;
            case 0x25FD28u: goto label_25fd28;
            case 0x25FD2Cu: goto label_25fd2c;
            case 0x25FD30u: goto label_25fd30;
            case 0x25FD34u: goto label_25fd34;
            case 0x25FD38u: goto label_25fd38;
            case 0x25FD3Cu: goto label_25fd3c;
            case 0x25FD40u: goto label_25fd40;
            case 0x25FD44u: goto label_25fd44;
            case 0x25FD48u: goto label_25fd48;
            case 0x25FD4Cu: goto label_25fd4c;
            case 0x25FD50u: goto label_25fd50;
            case 0x25FD54u: goto label_25fd54;
            case 0x25FD58u: goto label_25fd58;
            case 0x25FD5Cu: goto label_25fd5c;
            case 0x25FD60u: goto label_25fd60;
            case 0x25FD64u: goto label_25fd64;
            case 0x25FD68u: goto label_25fd68;
            case 0x25FD6Cu: goto label_25fd6c;
            case 0x25FD70u: goto label_25fd70;
            case 0x25FD74u: goto label_25fd74;
            case 0x25FD78u: goto label_25fd78;
            case 0x25FD7Cu: goto label_25fd7c;
            case 0x25FD80u: goto label_25fd80;
            case 0x25FD84u: goto label_25fd84;
            case 0x25FD88u: goto label_25fd88;
            case 0x25FD8Cu: goto label_25fd8c;
            case 0x25FD90u: goto label_25fd90;
            case 0x25FD94u: goto label_25fd94;
            case 0x25FD98u: goto label_25fd98;
            case 0x25FD9Cu: goto label_25fd9c;
            case 0x25FDA0u: goto label_25fda0;
            case 0x25FDA4u: goto label_25fda4;
            case 0x25FDA8u: goto label_25fda8;
            case 0x25FDACu: goto label_25fdac;
            case 0x25FDB0u: goto label_25fdb0;
            case 0x25FDB4u: goto label_25fdb4;
            case 0x25FDB8u: goto label_25fdb8;
            case 0x25FDBCu: goto label_25fdbc;
            case 0x25FDC0u: goto label_25fdc0;
            case 0x25FDC4u: goto label_25fdc4;
            case 0x25FDC8u: goto label_25fdc8;
            case 0x25FDCCu: goto label_25fdcc;
            case 0x25FDD0u: goto label_25fdd0;
            case 0x25FDD4u: goto label_25fdd4;
            case 0x25FDD8u: goto label_25fdd8;
            case 0x25FDDCu: goto label_25fddc;
            case 0x25FDE0u: goto label_25fde0;
            case 0x25FDE4u: goto label_25fde4;
            case 0x25FDE8u: goto label_25fde8;
            case 0x25FDECu: goto label_25fdec;
            case 0x25FDF0u: goto label_25fdf0;
            case 0x25FDF4u: goto label_25fdf4;
            case 0x25FDF8u: goto label_25fdf8;
            case 0x25FDFCu: goto label_25fdfc;
            case 0x25FE00u: goto label_25fe00;
            case 0x25FE04u: goto label_25fe04;
            case 0x25FE08u: goto label_25fe08;
            case 0x25FE0Cu: goto label_25fe0c;
            case 0x25FE10u: goto label_25fe10;
            case 0x25FE14u: goto label_25fe14;
            case 0x25FE18u: goto label_25fe18;
            case 0x25FE1Cu: goto label_25fe1c;
            case 0x25FE20u: goto label_25fe20;
            case 0x25FE24u: goto label_25fe24;
            case 0x25FE28u: goto label_25fe28;
            case 0x25FE2Cu: goto label_25fe2c;
            case 0x25FE30u: goto label_25fe30;
            case 0x25FE34u: goto label_25fe34;
            case 0x25FE38u: goto label_25fe38;
            case 0x25FE3Cu: goto label_25fe3c;
            case 0x25FE40u: goto label_25fe40;
            case 0x25FE44u: goto label_25fe44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25FD40u;
label_25fd40:
    // 0x25fd40: 0x3c110030
    ctx->pc = 0x25fd40u;
    SET_GPR_U32(ctx, 17, ((uint32_t)48 << 16));
label_25fd44:
    // 0x25fd44: 0x3631000b
    ctx->pc = 0x25fd44u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 11));
label_25fd48:
    // 0x25fd48: 0x1000002d
label_25fd4c:
    if (ctx->pc == 0x25FD4Cu) {
        ctx->pc = 0x25FD4Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x25FD50u;
        goto label_25fd50;
    }
    ctx->pc = 0x25FD48u;
    {
        const bool branch_taken_0x25fd48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FD4Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x25fd48) {
            ctx->pc = 0x25FE00u;
            goto label_25fe00;
        }
    }
    ctx->pc = 0x25FD50u;
label_25fd50:
    // 0x25fd50: 0x24110039
    ctx->pc = 0x25fd50u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 57));
label_25fd54:
    // 0x25fd54: 0x1000002a
label_25fd58:
    if (ctx->pc == 0x25FD58u) {
        ctx->pc = 0x25FD58u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 54));
        ctx->pc = 0x25FD5Cu;
        goto label_25fd5c;
    }
    ctx->pc = 0x25FD54u;
    {
        const bool branch_taken_0x25fd54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FD58u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 54));
        if (branch_taken_0x25fd54) {
            ctx->pc = 0x25FE00u;
            goto label_25fe00;
        }
    }
    ctx->pc = 0x25FD5Cu;
label_25fd5c:
    // 0x25fd5c: 0x3c110030
    ctx->pc = 0x25fd5cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)48 << 16));
label_25fd60:
    // 0x25fd60: 0x3631000d
    ctx->pc = 0x25fd60u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 13));
label_25fd64:
    // 0x25fd64: 0x10000026
label_25fd68:
    if (ctx->pc == 0x25FD68u) {
        ctx->pc = 0x25FD68u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x25FD6Cu;
        goto label_25fd6c;
    }
    ctx->pc = 0x25FD64u;
    {
        const bool branch_taken_0x25fd64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FD68u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x25fd64) {
            ctx->pc = 0x25FE00u;
            goto label_25fe00;
        }
    }
    ctx->pc = 0x25FD6Cu;
label_25fd6c:
    // 0x25fd6c: 0x3c020034
    ctx->pc = 0x25fd6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_25fd70:
    // 0x25fd70: 0x8c42e7c8
    ctx->pc = 0x25fd70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_25fd74:
    // 0x25fd74: 0x8c420064
    ctx->pc = 0x25fd74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_25fd78:
    // 0x25fd78: 0x84440012
    ctx->pc = 0x25fd78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
label_25fd7c:
    // 0x25fd7c: 0xc09713a
label_25fd80:
    if (ctx->pc == 0x25FD80u) {
        ctx->pc = 0x25FD80u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25FD84u;
        goto label_25fd84;
    }
    ctx->pc = 0x25FD7Cu;
    SET_GPR_U32(ctx, 31, 0x25FD84u);
    ctx->pc = 0x25FD80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25C4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayWorldSound_0x25c4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FD84u; }
    }
    if (ctx->pc != 0x25FD84u) { return; }
    ctx->pc = 0x25FD84u;
label_25fd84:
    // 0x25fd84: 0x1000001e
label_25fd88:
    if (ctx->pc == 0x25FD88u) {
        ctx->pc = 0x25FD8Cu;
        goto label_25fd8c;
    }
    ctx->pc = 0x25FD84u;
    {
        const bool branch_taken_0x25fd84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x25fd84) {
            ctx->pc = 0x25FE00u;
            goto label_25fe00;
        }
    }
    ctx->pc = 0x25FD8Cu;
label_25fd8c:
    // 0x25fd8c: 0x10000002
label_25fd90:
    if (ctx->pc == 0x25FD90u) {
        ctx->pc = 0x25FD90u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 63));
        ctx->pc = 0x25FD94u;
        goto label_25fd94;
    }
    ctx->pc = 0x25FD8Cu;
    {
        const bool branch_taken_0x25fd8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FD90u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 63));
        if (branch_taken_0x25fd8c) {
            ctx->pc = 0x25FD98u;
            goto label_25fd98;
        }
    }
    ctx->pc = 0x25FD94u;
label_25fd94:
    // 0x25fd94: 0x24110040
    ctx->pc = 0x25fd94u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 64));
label_25fd98:
    // 0x25fd98: 0x2412007f
    ctx->pc = 0x25fd98u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 127));
label_25fd9c:
    // 0x25fd9c: 0x10000018
label_25fda0:
    if (ctx->pc == 0x25FDA0u) {
        ctx->pc = 0x25FDA0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x25FDA4u;
        goto label_25fda4;
    }
    ctx->pc = 0x25FD9Cu;
    {
        const bool branch_taken_0x25fd9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FDA0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 40));
        if (branch_taken_0x25fd9c) {
            ctx->pc = 0x25FE00u;
            goto label_25fe00;
        }
    }
    ctx->pc = 0x25FDA4u;
label_25fda4:
    // 0x25fda4: 0x24110038
    ctx->pc = 0x25fda4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 56));
label_25fda8:
    // 0x25fda8: 0x10000015
label_25fdac:
    if (ctx->pc == 0x25FDACu) {
        ctx->pc = 0x25FDACu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x25FDB0u;
        goto label_25fdb0;
    }
    ctx->pc = 0x25FDA8u;
    {
        const bool branch_taken_0x25fda8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FDACu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 50));
        if (branch_taken_0x25fda8) {
            ctx->pc = 0x25FE00u;
            goto label_25fe00;
        }
    }
    ctx->pc = 0x25FDB0u;
label_25fdb0:
    // 0x25fdb0: 0x3c020034
    ctx->pc = 0x25fdb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_25fdb4:
    // 0x25fdb4: 0x10000009
label_25fdb8:
    if (ctx->pc == 0x25FDB8u) {
        ctx->pc = 0x25FDB8u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294957636)));
        ctx->pc = 0x25FDBCu;
        goto label_25fdbc;
    }
    ctx->pc = 0x25FDB4u;
    {
        const bool branch_taken_0x25fdb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FDB8u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294957636)));
        if (branch_taken_0x25fdb4) {
            ctx->pc = 0x25FDDCu;
            goto label_25fddc;
        }
    }
    ctx->pc = 0x25FDBCu;
label_25fdbc:
    // 0x25fdbc: 0x3c020034
    ctx->pc = 0x25fdbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_25fdc0:
    // 0x25fdc0: 0x10000006
label_25fdc4:
    if (ctx->pc == 0x25FDC4u) {
        ctx->pc = 0x25FDC4u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294957640)));
        ctx->pc = 0x25FDC8u;
        goto label_25fdc8;
    }
    ctx->pc = 0x25FDC0u;
    {
        const bool branch_taken_0x25fdc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FDC4u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294957640)));
        if (branch_taken_0x25fdc0) {
            ctx->pc = 0x25FDDCu;
            goto label_25fddc;
        }
    }
    ctx->pc = 0x25FDC8u;
label_25fdc8:
    // 0x25fdc8: 0x3c020034
    ctx->pc = 0x25fdc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_25fdcc:
    // 0x25fdcc: 0x10000003
label_25fdd0:
    if (ctx->pc == 0x25FDD0u) {
        ctx->pc = 0x25FDD0u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294957644)));
        ctx->pc = 0x25FDD4u;
        goto label_25fdd4;
    }
    ctx->pc = 0x25FDCCu;
    {
        const bool branch_taken_0x25fdcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FDD0u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294957644)));
        if (branch_taken_0x25fdcc) {
            ctx->pc = 0x25FDDCu;
            goto label_25fddc;
        }
    }
    ctx->pc = 0x25FDD4u;
label_25fdd4:
    // 0x25fdd4: 0x3c020034
    ctx->pc = 0x25fdd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_25fdd8:
    // 0x25fdd8: 0x8c51da50
    ctx->pc = 0x25fdd8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294957648)));
label_25fddc:
    // 0x25fddc: 0x2412007f
    ctx->pc = 0x25fddcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 127));
label_25fde0:
    // 0x25fde0: 0x10000007
label_25fde4:
    if (ctx->pc == 0x25FDE4u) {
        ctx->pc = 0x25FDE4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x25FDE8u;
        goto label_25fde8;
    }
    ctx->pc = 0x25FDE0u;
    {
        const bool branch_taken_0x25fde0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FDE4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x25fde0) {
            ctx->pc = 0x25FE00u;
            goto label_25fe00;
        }
    }
    ctx->pc = 0x25FDE8u;
label_25fde8:
    // 0x25fde8: 0x3c110031
    ctx->pc = 0x25fde8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)49 << 16));
label_25fdec:
    // 0x25fdec: 0x36310011
    ctx->pc = 0x25fdecu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 17));
label_25fdf0:
    // 0x25fdf0: 0x2412007f
    ctx->pc = 0x25fdf0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 127));
label_25fdf4:
    // 0x25fdf4: 0x10000002
label_25fdf8:
    if (ctx->pc == 0x25FDF8u) {
        ctx->pc = 0x25FDF8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x25FDFCu;
        goto label_25fdfc;
    }
    ctx->pc = 0x25FDF4u;
    {
        const bool branch_taken_0x25fdf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FDF8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x25fdf4) {
            ctx->pc = 0x25FE00u;
            goto label_25fe00;
        }
    }
    ctx->pc = 0x25FDFCu;
label_25fdfc:
    // 0x25fdfc: 0x80882d
    ctx->pc = 0x25fdfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25fe00:
    // 0x25fe00: 0x620000b
label_25fe04:
    if (ctx->pc == 0x25FE04u) {
        ctx->pc = 0x25FE04u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x25FE08u;
        goto label_25fe08;
    }
    ctx->pc = 0x25FE00u;
    {
        const bool branch_taken_0x25fe00 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x25FE04u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x25fe00) {
            ctx->pc = 0x25FE30u;
            goto label_25fe30;
        }
    }
    ctx->pc = 0x25FE08u;
label_25fe08:
    // 0x25fe08: 0x220202d
    ctx->pc = 0x25fe08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25fe0c:
    // 0x25fe0c: 0x260282d
    ctx->pc = 0x25fe0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25fe10:
    // 0x25fe10: 0x240302d
    ctx->pc = 0x25fe10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25fe14:
    // 0x25fe14: 0x200382d
    ctx->pc = 0x25fe14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25fe18:
    // 0x25fe18: 0xdfb30030
    ctx->pc = 0x25fe18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25fe1c:
    // 0x25fe1c: 0xdfb20020
    ctx->pc = 0x25fe1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25fe20:
    // 0x25fe20: 0xdfb10010
    ctx->pc = 0x25fe20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25fe24:
    // 0x25fe24: 0xdfb00000
    ctx->pc = 0x25fe24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25fe28:
    // 0x25fe28: 0x8088a62
label_25fe2c:
    if (ctx->pc == 0x25FE2Cu) {
        ctx->pc = 0x25FE2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x25FE30u;
        goto label_25fe30;
    }
    ctx->pc = 0x25FE28u;
    ctx->pc = 0x25FE2Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25FE30u;
label_25fe30:
    // 0x25fe30: 0xdfb30030
    ctx->pc = 0x25fe30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25fe34:
    // 0x25fe34: 0xdfb20020
    ctx->pc = 0x25fe34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25fe38:
    // 0x25fe38: 0xdfb10010
    ctx->pc = 0x25fe38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25fe3c:
    // 0x25fe3c: 0xdfb00000
    ctx->pc = 0x25fe3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25fe40:
    // 0x25fe40: 0x3e00008
label_25fe44:
    if (ctx->pc == 0x25FE44u) {
        ctx->pc = 0x25FE44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x25FE48u;
        goto label_fallthrough_0x25fe40;
    }
    ctx->pc = 0x25FE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FE44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25FCF0u: goto label_25fcf0;
            case 0x25FCF4u: goto label_25fcf4;
            case 0x25FCF8u: goto label_25fcf8;
            case 0x25FCFCu: goto label_25fcfc;
            case 0x25FD00u: goto label_25fd00;
            case 0x25FD04u: goto label_25fd04;
            case 0x25FD08u: goto label_25fd08;
            case 0x25FD0Cu: goto label_25fd0c;
            case 0x25FD10u: goto label_25fd10;
            case 0x25FD14u: goto label_25fd14;
            case 0x25FD18u: goto label_25fd18;
            case 0x25FD1Cu: goto label_25fd1c;
            case 0x25FD20u: goto label_25fd20;
            case 0x25FD24u: goto label_25fd24;
            case 0x25FD28u: goto label_25fd28;
            case 0x25FD2Cu: goto label_25fd2c;
            case 0x25FD30u: goto label_25fd30;
            case 0x25FD34u: goto label_25fd34;
            case 0x25FD38u: goto label_25fd38;
            case 0x25FD3Cu: goto label_25fd3c;
            case 0x25FD40u: goto label_25fd40;
            case 0x25FD44u: goto label_25fd44;
            case 0x25FD48u: goto label_25fd48;
            case 0x25FD4Cu: goto label_25fd4c;
            case 0x25FD50u: goto label_25fd50;
            case 0x25FD54u: goto label_25fd54;
            case 0x25FD58u: goto label_25fd58;
            case 0x25FD5Cu: goto label_25fd5c;
            case 0x25FD60u: goto label_25fd60;
            case 0x25FD64u: goto label_25fd64;
            case 0x25FD68u: goto label_25fd68;
            case 0x25FD6Cu: goto label_25fd6c;
            case 0x25FD70u: goto label_25fd70;
            case 0x25FD74u: goto label_25fd74;
            case 0x25FD78u: goto label_25fd78;
            case 0x25FD7Cu: goto label_25fd7c;
            case 0x25FD80u: goto label_25fd80;
            case 0x25FD84u: goto label_25fd84;
            case 0x25FD88u: goto label_25fd88;
            case 0x25FD8Cu: goto label_25fd8c;
            case 0x25FD90u: goto label_25fd90;
            case 0x25FD94u: goto label_25fd94;
            case 0x25FD98u: goto label_25fd98;
            case 0x25FD9Cu: goto label_25fd9c;
            case 0x25FDA0u: goto label_25fda0;
            case 0x25FDA4u: goto label_25fda4;
            case 0x25FDA8u: goto label_25fda8;
            case 0x25FDACu: goto label_25fdac;
            case 0x25FDB0u: goto label_25fdb0;
            case 0x25FDB4u: goto label_25fdb4;
            case 0x25FDB8u: goto label_25fdb8;
            case 0x25FDBCu: goto label_25fdbc;
            case 0x25FDC0u: goto label_25fdc0;
            case 0x25FDC4u: goto label_25fdc4;
            case 0x25FDC8u: goto label_25fdc8;
            case 0x25FDCCu: goto label_25fdcc;
            case 0x25FDD0u: goto label_25fdd0;
            case 0x25FDD4u: goto label_25fdd4;
            case 0x25FDD8u: goto label_25fdd8;
            case 0x25FDDCu: goto label_25fddc;
            case 0x25FDE0u: goto label_25fde0;
            case 0x25FDE4u: goto label_25fde4;
            case 0x25FDE8u: goto label_25fde8;
            case 0x25FDECu: goto label_25fdec;
            case 0x25FDF0u: goto label_25fdf0;
            case 0x25FDF4u: goto label_25fdf4;
            case 0x25FDF8u: goto label_25fdf8;
            case 0x25FDFCu: goto label_25fdfc;
            case 0x25FE00u: goto label_25fe00;
            case 0x25FE04u: goto label_25fe04;
            case 0x25FE08u: goto label_25fe08;
            case 0x25FE0Cu: goto label_25fe0c;
            case 0x25FE10u: goto label_25fe10;
            case 0x25FE14u: goto label_25fe14;
            case 0x25FE18u: goto label_25fe18;
            case 0x25FE1Cu: goto label_25fe1c;
            case 0x25FE20u: goto label_25fe20;
            case 0x25FE24u: goto label_25fe24;
            case 0x25FE28u: goto label_25fe28;
            case 0x25FE2Cu: goto label_25fe2c;
            case 0x25FE30u: goto label_25fe30;
            case 0x25FE34u: goto label_25fe34;
            case 0x25FE38u: goto label_25fe38;
            case 0x25FE3Cu: goto label_25fe3c;
            case 0x25FE40u: goto label_25fe40;
            case 0x25FE44u: goto label_25fe44;
            default: break;
        }
        return;
    }
label_fallthrough_0x25fe40:
    ctx->pc = 0x25FE48u;
}
