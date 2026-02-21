#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getFormat
// Address: 0x2bbcf8 - 0x2bbf00
void getFormat_0x2bbcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bbcf8u;

    // 0x2bbcf8: 0x27bdff80
    ctx->pc = 0x2bbcf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2bbcfc: 0xffbf0070
    ctx->pc = 0x2bbcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2bbd00: 0xffb60060
    ctx->pc = 0x2bbd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2bbd04: 0xffb50050
    ctx->pc = 0x2bbd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2bbd08: 0xffb40040
    ctx->pc = 0x2bbd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2bbd0c: 0xffb30030
    ctx->pc = 0x2bbd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bbd10: 0xffb20020
    ctx->pc = 0x2bbd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bbd14: 0xffb10010
    ctx->pc = 0x2bbd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bbd18: 0xffb00000
    ctx->pc = 0x2bbd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bbd1c: 0xa0882d
    ctx->pc = 0x2bbd1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbd20: 0xc0802d
    ctx->pc = 0x2bbd20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbd24: 0x200b02d
    ctx->pc = 0x2bbd24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbd28: 0x12000005
    ctx->pc = 0x2BBD28u;
    {
        const bool branch_taken_0x2bbd28 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBD2Cu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bbd28) {
            ctx->pc = 0x2BBD40u;
            goto label_2bbd40;
        }
    }
    ctx->pc = 0x2BBD30u;
    // 0x2bbd30: 0x82030000
    ctx->pc = 0x2bbd30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bbd34: 0x24020025
    ctx->pc = 0x2bbd34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 37));
    // 0x2bbd38: 0x50620006
    ctx->pc = 0x2BBD38u;
    {
        const bool branch_taken_0x2bbd38 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2bbd38) {
            ctx->pc = 0x2BBD3Cu;
            SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
            ctx->pc = 0x2BBD54u;
            goto label_2bbd54;
        }
    }
    ctx->pc = 0x2BBD40u;
label_2bbd40:
    // 0x2bbd40: 0xac800000
    ctx->pc = 0x2bbd40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2bbd44: 0x24020007
    ctx->pc = 0x2bbd44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bbd48: 0xae220000
    ctx->pc = 0x2bbd48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2bbd4c: 0x10000062
    ctx->pc = 0x2BBD4Cu;
    {
        const bool branch_taken_0x2bbd4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBD50u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bbd4c) {
            ctx->pc = 0x2BBED8u;
            goto label_2bbed8;
        }
    }
    ctx->pc = 0x2BBD54u;
label_2bbd54:
    // 0x2bbd54: 0x24426890
    ctx->pc = 0x2bbd54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 26768));
    // 0x2bbd58: 0xac820000
    ctx->pc = 0x2bbd58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2bbd5c: 0x40902d
    ctx->pc = 0x2bbd5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbd60: 0x3c15003b
    ctx->pc = 0x2bbd60u;
    SET_GPR_U32(ctx, 21, ((uint32_t)59 << 16));
    // 0x2bbd64: 0x10000009
    ctx->pc = 0x2BBD64u;
    {
        const bool branch_taken_0x2bbd64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBD68u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2bbd64) {
            ctx->pc = 0x2BBD8Cu;
            goto label_2bbd8c;
        }
    }
    ctx->pc = 0x2BBD6Cu;
    // 0x2bbd6c: 0x0
    ctx->pc = 0x2bbd6cu;
    // NOP
label_2bbd70:
    // 0x2bbd70: 0x92030000
    ctx->pc = 0x2bbd70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bbd74: 0x82020000
    ctx->pc = 0x2bbd74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bbd78: 0x3842004c
    ctx->pc = 0x2bbd78u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 76));
    // 0x2bbd7c: 0x282980a
    ctx->pc = 0x2bbd7cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 20));
    // 0x2bbd80: 0xa2430000
    ctx->pc = 0x2bbd80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bbd84: 0x26100001
    ctx->pc = 0x2bbd84u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2bbd88: 0x26520001
    ctx->pc = 0x2bbd88u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_2bbd8c:
    // 0x2bbd8c: 0x82050000
    ctx->pc = 0x2bbd8cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bbd90: 0x10a00005
    ctx->pc = 0x2BBD90u;
    {
        const bool branch_taken_0x2bbd90 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBD94u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bbd90) {
            ctx->pc = 0x2BBDA8u;
            goto label_2bbda8;
        }
    }
    ctx->pc = 0x2BBD98u;
    // 0x2bbd98: 0xc0ad05e
    ctx->pc = 0x2BBD98u;
    SET_GPR_U32(ctx, 31, 0x2BBDA0u);
    ctx->pc = 0x2BBD9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 24736));
    ctx->pc = 0x2B4178u;
    {
        const uint32_t __entryPc = ctx->pc;
        mystrchr_0x2b4178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBDA0u; }
    }
    if (ctx->pc != 0x2BBDA0u) { return; }
    ctx->pc = 0x2BBDA0u;
    // 0x2bbda0: 0x1040fff3
    ctx->pc = 0x2BBDA0u;
    {
        const bool branch_taken_0x2bbda0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBDA4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bbda0) {
            ctx->pc = 0x2BBD70u;
            goto label_2bbd70;
        }
    }
    ctx->pc = 0x2BBDA8u;
label_2bbda8:
    // 0x2bbda8: 0x248460b8
    ctx->pc = 0x2bbda8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24760));
    // 0x2bbdac: 0xc0ad05e
    ctx->pc = 0x2BBDACu;
    SET_GPR_U32(ctx, 31, 0x2BBDB4u);
    ctx->pc = 0x2BBDB0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2B4178u;
    {
        const uint32_t __entryPc = ctx->pc;
        mystrchr_0x2b4178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBDB4u; }
    }
    if (ctx->pc != 0x2BBDB4u) { return; }
    ctx->pc = 0x2BBDB4u;
    // 0x2bbdb4: 0x10400003
    ctx->pc = 0x2BBDB4u;
    {
        const bool branch_taken_0x2bbdb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBDB8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bbdb4) {
            ctx->pc = 0x2BBDC4u;
            goto label_2bbdc4;
        }
    }
    ctx->pc = 0x2BBDBCu;
    // 0x2bbdbc: 0x10000042
    ctx->pc = 0x2BBDBCu;
    {
        const bool branch_taken_0x2bbdbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBDC0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x2bbdbc) {
            ctx->pc = 0x2BBEC8u;
            goto label_2bbec8;
        }
    }
    ctx->pc = 0x2BBDC4u;
label_2bbdc4:
    // 0x2bbdc4: 0x248460c8
    ctx->pc = 0x2bbdc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24776));
    // 0x2bbdc8: 0xc0ad05e
    ctx->pc = 0x2BBDC8u;
    SET_GPR_U32(ctx, 31, 0x2BBDD0u);
    ctx->pc = 0x2BBDCCu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2B4178u;
    {
        const uint32_t __entryPc = ctx->pc;
        mystrchr_0x2b4178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBDD0u; }
    }
    if (ctx->pc != 0x2BBDD0u) { return; }
    ctx->pc = 0x2BBDD0u;
    // 0x2bbdd0: 0x10400007
    ctx->pc = 0x2BBDD0u;
    {
        const bool branch_taken_0x2bbdd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBDD4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2bbdd0) {
            ctx->pc = 0x2BBDF0u;
            goto label_2bbdf0;
        }
    }
    ctx->pc = 0x2BBDD8u;
    // 0x2bbdd8: 0x1660003b
    ctx->pc = 0x2BBDD8u;
    {
        const bool branch_taken_0x2bbdd8 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BBDDCu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2bbdd8) {
            ctx->pc = 0x2BBEC8u;
            goto label_2bbec8;
        }
    }
    ctx->pc = 0x2BBDE0u;
    // 0x2bbde0: 0x2402004c
    ctx->pc = 0x2bbde0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 76));
    // 0x2bbde4: 0xa2420000
    ctx->pc = 0x2bbde4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bbde8: 0x10000037
    ctx->pc = 0x2BBDE8u;
    {
        const bool branch_taken_0x2bbde8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBDECu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x2bbde8) {
            ctx->pc = 0x2BBEC8u;
            goto label_2bbec8;
        }
    }
    ctx->pc = 0x2BBDF0u;
label_2bbdf0:
    // 0x2bbdf0: 0x82030000
    ctx->pc = 0x2bbdf0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bbdf4: 0x24020073
    ctx->pc = 0x2bbdf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 115));
    // 0x2bbdf8: 0x14620003
    ctx->pc = 0x2BBDF8u;
    {
        const bool branch_taken_0x2bbdf8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BBDFCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 118));
        if (branch_taken_0x2bbdf8) {
            ctx->pc = 0x2BBE08u;
            goto label_2bbe08;
        }
    }
    ctx->pc = 0x2BBE00u;
    // 0x2bbe00: 0x10000030
    ctx->pc = 0x2BBE00u;
    {
        const bool branch_taken_0x2bbe00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBE04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2bbe00) {
            ctx->pc = 0x2BBEC4u;
            goto label_2bbec4;
        }
    }
    ctx->pc = 0x2BBE08u;
label_2bbe08:
    // 0x2bbe08: 0x54620003
    ctx->pc = 0x2BBE08u;
    {
        const bool branch_taken_0x2bbe08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2bbe08) {
            ctx->pc = 0x2BBE0Cu;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2BBE18u;
            goto label_2bbe18;
        }
    }
    ctx->pc = 0x2BBE10u;
    // 0x2bbe10: 0x1000002c
    ctx->pc = 0x2BBE10u;
    {
        const bool branch_taken_0x2bbe10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBE14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2bbe10) {
            ctx->pc = 0x2BBEC4u;
            goto label_2bbec4;
        }
    }
    ctx->pc = 0x2BBE18u;
label_2bbe18:
    // 0x2bbe18: 0x2402006d
    ctx->pc = 0x2bbe18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 109));
    // 0x2bbe1c: 0x54620003
    ctx->pc = 0x2BBE1Cu;
    {
        const bool branch_taken_0x2bbe1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2bbe1c) {
            ctx->pc = 0x2BBE20u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2BBE2Cu;
            goto label_2bbe2c;
        }
    }
    ctx->pc = 0x2BBE24u;
    // 0x2bbe24: 0x10000027
    ctx->pc = 0x2BBE24u;
    {
        const bool branch_taken_0x2bbe24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBE28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2bbe24) {
            ctx->pc = 0x2BBEC4u;
            goto label_2bbec4;
        }
    }
    ctx->pc = 0x2BBE2Cu;
label_2bbe2c:
    // 0x2bbe2c: 0x2402006b
    ctx->pc = 0x2bbe2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 107));
    // 0x2bbe30: 0x54620003
    ctx->pc = 0x2BBE30u;
    {
        const bool branch_taken_0x2bbe30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2bbe30) {
            ctx->pc = 0x2BBE34u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2BBE40u;
            goto label_2bbe40;
        }
    }
    ctx->pc = 0x2BBE38u;
    // 0x2bbe38: 0x10000022
    ctx->pc = 0x2BBE38u;
    {
        const bool branch_taken_0x2bbe38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBE3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x2bbe38) {
            ctx->pc = 0x2BBEC4u;
            goto label_2bbec4;
        }
    }
    ctx->pc = 0x2BBE40u;
label_2bbe40:
    // 0x2bbe40: 0x24020052
    ctx->pc = 0x2bbe40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 82));
    // 0x2bbe44: 0x1062001e
    ctx->pc = 0x2BBE44u;
    {
        const bool branch_taken_0x2bbe44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2BBE48u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2bbe44) {
            ctx->pc = 0x2BBEC0u;
            goto label_2bbec0;
        }
    }
    ctx->pc = 0x2BBE4Cu;
    // 0x2bbe4c: 0x24844650
    ctx->pc = 0x2bbe4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
    // 0x2bbe50: 0x24050020
    ctx->pc = 0x2bbe50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2bbe54: 0x3c06003b
    ctx->pc = 0x2bbe54u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2bbe58: 0x24c60d80
    ctx->pc = 0x2bbe58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
    // 0x2bbe5c: 0xc0ad0d6
    ctx->pc = 0x2BBE5Cu;
    SET_GPR_U32(ctx, 31, 0x2BBE64u);
    ctx->pc = 0x2BBE60u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBE64u; }
    }
    if (ctx->pc != 0x2BBE64u) { return; }
    ctx->pc = 0x2BBE64u;
    // 0x2bbe64: 0x3c04003b
    ctx->pc = 0x2bbe64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bbe68: 0x248460d0
    ctx->pc = 0x2bbe68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 24784));
    // 0x2bbe6c: 0xc0b4a34
    ctx->pc = 0x2BBE6Cu;
    SET_GPR_U32(ctx, 31, 0x2BBE74u);
    ctx->pc = 0x2BBE70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBE74u; }
    }
    if (ctx->pc != 0x2BBE74u) { return; }
    ctx->pc = 0x2BBE74u;
    // 0x2bbe74: 0x3c04003b
    ctx->pc = 0x2bbe74u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2bbe78: 0xc0b4a34
    ctx->pc = 0x2BBE78u;
    SET_GPR_U32(ctx, 31, 0x2BBE80u);
    ctx->pc = 0x2BBE7Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBE80u; }
    }
    if (ctx->pc != 0x2BBE80u) { return; }
    ctx->pc = 0x2BBE80u;
    // 0x2bbe80: 0x3c020037
    ctx->pc = 0x2bbe80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bbe84: 0x8c4320ac
    ctx->pc = 0x2bbe84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2bbe88: 0x8c620048
    ctx->pc = 0x2bbe88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2bbe8c: 0x34420001
    ctx->pc = 0x2bbe8cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2bbe90: 0xac620048
    ctx->pc = 0x2bbe90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x2bbe94: 0x3c04003c
    ctx->pc = 0x2bbe94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2bbe98: 0x24856890
    ctx->pc = 0x2bbe98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 26768));
    // 0x2bbe9c: 0x3c02003b
    ctx->pc = 0x2bbe9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2bbea0: 0x244360e8
    ctx->pc = 0x2bbea0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 24808));
    // 0x2bbea4: 0x8c4260e8
    ctx->pc = 0x2bbea4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24808)));
    // 0x2bbea8: 0xac826890
    ctx->pc = 0x2bbea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 26768), GPR_U32(ctx, 2));
    // 0x2bbeac: 0x90620004
    ctx->pc = 0x2bbeacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bbeb0: 0xa0a20004
    ctx->pc = 0x2bbeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bbeb4: 0xae200000
    ctx->pc = 0x2bbeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2bbeb8: 0x10000007
    ctx->pc = 0x2BBEB8u;
    {
        const bool branch_taken_0x2bbeb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBEBCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bbeb8) {
            ctx->pc = 0x2BBED8u;
            goto label_2bbed8;
        }
    }
    ctx->pc = 0x2BBEC0u;
label_2bbec0:
    // 0x2bbec0: 0x24020005
    ctx->pc = 0x2bbec0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_2bbec4:
    // 0x2bbec4: 0xae220000
    ctx->pc = 0x2bbec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bbec8:
    // 0x2bbec8: 0x92020000
    ctx->pc = 0x2bbec8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bbecc: 0xa2420000
    ctx->pc = 0x2bbeccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bbed0: 0xa2400001
    ctx->pc = 0x2bbed0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bbed4: 0x26020001
    ctx->pc = 0x2bbed4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
label_2bbed8:
    // 0x2bbed8: 0xdfbf0070
    ctx->pc = 0x2bbed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bbedc: 0xdfb60060
    ctx->pc = 0x2bbedcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bbee0: 0xdfb50050
    ctx->pc = 0x2bbee0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bbee4: 0xdfb40040
    ctx->pc = 0x2bbee4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bbee8: 0xdfb30030
    ctx->pc = 0x2bbee8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbeec: 0xdfb20020
    ctx->pc = 0x2bbeecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbef0: 0xdfb10010
    ctx->pc = 0x2bbef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbef4: 0xdfb00000
    ctx->pc = 0x2bbef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbef8: 0x3e00008
    ctx->pc = 0x2BBEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBEFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BBD40u: goto label_2bbd40;
            case 0x2BBD54u: goto label_2bbd54;
            case 0x2BBD70u: goto label_2bbd70;
            case 0x2BBD8Cu: goto label_2bbd8c;
            case 0x2BBDA8u: goto label_2bbda8;
            case 0x2BBDC4u: goto label_2bbdc4;
            case 0x2BBDF0u: goto label_2bbdf0;
            case 0x2BBE08u: goto label_2bbe08;
            case 0x2BBE18u: goto label_2bbe18;
            case 0x2BBE2Cu: goto label_2bbe2c;
            case 0x2BBE40u: goto label_2bbe40;
            case 0x2BBEC0u: goto label_2bbec0;
            case 0x2BBEC4u: goto label_2bbec4;
            case 0x2BBEC8u: goto label_2bbec8;
            case 0x2BBED8u: goto label_2bbed8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BBF00u;
}
