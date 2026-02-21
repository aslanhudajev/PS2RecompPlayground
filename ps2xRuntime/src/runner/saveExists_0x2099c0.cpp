#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: saveExists
// Address: 0x2099c0 - 0x209c54
void saveExists_0x2099c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2099c0u;

label_2099c0:
    // 0x2099c0: 0x27bdff20
    ctx->pc = 0x2099c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
label_2099c4:
    // 0x2099c4: 0xffbf00d0
    ctx->pc = 0x2099c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_2099c8:
    // 0x2099c8: 0xffbe00c0
    ctx->pc = 0x2099c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_2099cc:
    // 0x2099cc: 0xffb000b0
    ctx->pc = 0x2099ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
label_2099d0:
    // 0x2099d0: 0x3a0f02d
    ctx->pc = 0x2099d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2099d4:
    // 0x2099d4: 0xafc40000
    ctx->pc = 0x2099d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_2099d8:
    // 0x2099d8: 0xafc50004
    ctx->pc = 0x2099d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_2099dc:
    // 0x2099dc: 0xafc60008
    ctx->pc = 0x2099dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_2099e0:
    // 0x2099e0: 0x8fc40000
    ctx->pc = 0x2099e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2099e4:
    // 0x2099e4: 0x8fc50004
    ctx->pc = 0x2099e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2099e8:
    // 0x2099e8: 0x302d
    ctx->pc = 0x2099e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2099ec:
    // 0x2099ec: 0xc0820e2
label_2099f0:
    if (ctx->pc == 0x2099F0u) {
        ctx->pc = 0x2099F4u;
        goto label_2099f4;
    }
    ctx->pc = 0x2099ECu;
    SET_GPR_U32(ctx, 31, 0x2099F4u);
    ctx->pc = 0x208388u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveMount_0x208388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099F4u; }
    }
    if (ctx->pc != 0x2099F4u) { return; }
    ctx->pc = 0x2099F4u;
label_2099f4:
    // 0x2099f4: 0xafc20010
    ctx->pc = 0x2099f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
label_2099f8:
    // 0x2099f8: 0x8fc20010
    ctx->pc = 0x2099f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_2099fc:
    // 0x2099fc: 0x1c400004
label_209a00:
    if (ctx->pc == 0x209A00u) {
        ctx->pc = 0x209A04u;
        goto label_209a04;
    }
    ctx->pc = 0x2099FCu;
    {
        const bool branch_taken_0x2099fc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2099fc) {
            ctx->pc = 0x209A10u;
            goto label_209a10;
        }
    }
    ctx->pc = 0x209A04u;
label_209a04:
    // 0x209a04: 0x102d
    ctx->pc = 0x209a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209a08:
    // 0x209a08: 0x1000008b
label_209a0c:
    if (ctx->pc == 0x209A0Cu) {
        ctx->pc = 0x209A10u;
        goto label_209a10;
    }
    ctx->pc = 0x209A08u;
    {
        const bool branch_taken_0x209a08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209a08) {
            ctx->pc = 0x209C38u;
            goto label_209c38;
        }
    }
    ctx->pc = 0x209A10u;
label_209a10:
    // 0x209a10: 0x27c20004
    ctx->pc = 0x209a10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 4));
label_209a14:
    // 0x209a14: 0x3c0202d
    ctx->pc = 0x209a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_209a18:
    // 0x209a18: 0x40282d
    ctx->pc = 0x209a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209a1c:
    // 0x209a1c: 0xc081e72
label_209a20:
    if (ctx->pc == 0x209A20u) {
        ctx->pc = 0x209A24u;
        goto label_209a24;
    }
    ctx->pc = 0x209A1Cu;
    SET_GPR_U32(ctx, 31, 0x209A24u);
    ctx->pc = 0x2079C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        translatePortAndSlot_0x2079c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A24u; }
    }
    if (ctx->pc != 0x209A24u) { return; }
    ctx->pc = 0x209A24u;
label_209a24:
    // 0x209a24: 0x14400004
label_209a28:
    if (ctx->pc == 0x209A28u) {
        ctx->pc = 0x209A2Cu;
        goto label_209a2c;
    }
    ctx->pc = 0x209A24u;
    {
        const bool branch_taken_0x209a24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x209a24) {
            ctx->pc = 0x209A38u;
            goto label_209a38;
        }
    }
    ctx->pc = 0x209A2Cu;
label_209a2c:
    // 0x209a2c: 0x102d
    ctx->pc = 0x209a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209a30:
    // 0x209a30: 0x10000081
label_209a34:
    if (ctx->pc == 0x209A34u) {
        ctx->pc = 0x209A38u;
        goto label_209a38;
    }
    ctx->pc = 0x209A30u;
    {
        const bool branch_taken_0x209a30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209a30) {
            ctx->pc = 0x209C38u;
            goto label_209c38;
        }
    }
    ctx->pc = 0x209A38u;
label_209a38:
    // 0x209a38: 0x27c20020
    ctx->pc = 0x209a38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 32));
label_209a3c:
    // 0x209a3c: 0x40202d
    ctx->pc = 0x209a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209a40:
    // 0x209a40: 0x8fc50008
    ctx->pc = 0x209a40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_209a44:
    // 0x209a44: 0xc081e8e
label_209a48:
    if (ctx->pc == 0x209A48u) {
        ctx->pc = 0x209A4Cu;
        goto label_209a4c;
    }
    ctx->pc = 0x209A44u;
    SET_GPR_U32(ctx, 31, 0x209A4Cu);
    ctx->pc = 0x207A38u;
    {
        const uint32_t __entryPc = ctx->pc;
        getSaveFileName_0x207a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A4Cu; }
    }
    if (ctx->pc != 0x209A4Cu) { return; }
    ctx->pc = 0x209A4Cu;
label_209a4c:
    // 0x209a4c: 0x27c30020
    ctx->pc = 0x209a4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 32));
label_209a50:
    // 0x209a50: 0x27c20060
    ctx->pc = 0x209a50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 96));
label_209a54:
    // 0x209a54: 0x8fc40000
    ctx->pc = 0x209a54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_209a58:
    // 0x209a58: 0x8fc50004
    ctx->pc = 0x209a58u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_209a5c:
    // 0x209a5c: 0x60302d
    ctx->pc = 0x209a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_209a60:
    // 0x209a60: 0x382d
    ctx->pc = 0x209a60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209a64:
    // 0x209a64: 0x24080001
    ctx->pc = 0x209a64u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
label_209a68:
    // 0x209a68: 0x40482d
    ctx->pc = 0x209a68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209a6c:
    // 0x209a6c: 0xc0b9ab2
label_209a70:
    if (ctx->pc == 0x209A70u) {
        ctx->pc = 0x209A74u;
        goto label_209a74;
    }
    ctx->pc = 0x209A6Cu;
    SET_GPR_U32(ctx, 31, 0x209A74u);
    ctx->pc = 0x2E6AC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcGetDir_0x2e6ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A74u; }
    }
    if (ctx->pc != 0x209A74u) { return; }
    ctx->pc = 0x209A74u;
label_209a74:
    // 0x209a74: 0x10400005
label_209a78:
    if (ctx->pc == 0x209A78u) {
        ctx->pc = 0x209A7Cu;
        goto label_209a7c;
    }
    ctx->pc = 0x209A74u;
    {
        const bool branch_taken_0x209a74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209a74) {
            ctx->pc = 0x209A8Cu;
            goto label_209a8c;
        }
    }
    ctx->pc = 0x209A7Cu;
label_209a7c:
    // 0x209a7c: 0x3c04003a
    ctx->pc = 0x209a7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_209a80:
    // 0x209a80: 0x24844f60
    ctx->pc = 0x209a80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20320));
label_209a84:
    // 0x209a84: 0xc0b4a34
label_209a88:
    if (ctx->pc == 0x209A88u) {
        ctx->pc = 0x209A8Cu;
        goto label_209a8c;
    }
    ctx->pc = 0x209A84u;
    SET_GPR_U32(ctx, 31, 0x209A8Cu);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A8Cu; }
    }
    if (ctx->pc != 0x209A8Cu) { return; }
    ctx->pc = 0x209A8Cu;
label_209a8c:
    // 0x209a8c: 0x0
    ctx->pc = 0x209a8cu;
    // NOP
label_209a90:
    // 0x209a90: 0x27c2000c
    ctx->pc = 0x209a90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 12));
label_209a94:
    // 0x209a94: 0x27c30010
    ctx->pc = 0x209a94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 16));
label_209a98:
    // 0x209a98: 0x24040001
    ctx->pc = 0x209a98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_209a9c:
    // 0x209a9c: 0x40282d
    ctx->pc = 0x209a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209aa0:
    // 0x209aa0: 0x60302d
    ctx->pc = 0x209aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_209aa4:
    // 0x209aa4: 0xc0b9a14
label_209aa8:
    if (ctx->pc == 0x209AA8u) {
        ctx->pc = 0x209AACu;
        goto label_209aac;
    }
    ctx->pc = 0x209AA4u;
    SET_GPR_U32(ctx, 31, 0x209AACu);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209AACu; }
    }
    if (ctx->pc != 0x209AACu) { return; }
    ctx->pc = 0x209AACu;
label_209aac:
    // 0x209aac: 0x10400003
label_209ab0:
    if (ctx->pc == 0x209AB0u) {
        ctx->pc = 0x209AB4u;
        goto label_209ab4;
    }
    ctx->pc = 0x209AACu;
    {
        const bool branch_taken_0x209aac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209aac) {
            ctx->pc = 0x209ABCu;
            goto label_209abc;
        }
    }
    ctx->pc = 0x209AB4u;
label_209ab4:
    // 0x209ab4: 0x1000000b
label_209ab8:
    if (ctx->pc == 0x209AB8u) {
        ctx->pc = 0x209ABCu;
        goto label_209abc;
    }
    ctx->pc = 0x209AB4u;
    {
        const bool branch_taken_0x209ab4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209ab4) {
            ctx->pc = 0x209AE4u;
            goto label_209ae4;
        }
    }
    ctx->pc = 0x209ABCu;
label_209abc:
    // 0x209abc: 0x3c02003c
    ctx->pc = 0x209abcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_209ac0:
    // 0x209ac0: 0x8c42c4e4
    ctx->pc = 0x209ac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
label_209ac4:
    // 0x209ac4: 0x10400005
label_209ac8:
    if (ctx->pc == 0x209AC8u) {
        ctx->pc = 0x209ACCu;
        goto label_209acc;
    }
    ctx->pc = 0x209AC4u;
    {
        const bool branch_taken_0x209ac4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209ac4) {
            ctx->pc = 0x209ADCu;
            goto label_209adc;
        }
    }
    ctx->pc = 0x209ACCu;
label_209acc:
    // 0x209acc: 0x3c10003c
    ctx->pc = 0x209accu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_209ad0:
    // 0x209ad0: 0x8e10c4e4
    ctx->pc = 0x209ad0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294952164)));
label_209ad4:
    // 0x209ad4: 0x200f809
label_209ad8:
    if (ctx->pc == 0x209AD8u) {
        ctx->pc = 0x209ADCu;
        goto label_209adc;
    }
    ctx->pc = 0x209AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x209ADCu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2099C0u: goto label_2099c0;
            case 0x2099C4u: goto label_2099c4;
            case 0x2099C8u: goto label_2099c8;
            case 0x2099CCu: goto label_2099cc;
            case 0x2099D0u: goto label_2099d0;
            case 0x2099D4u: goto label_2099d4;
            case 0x2099D8u: goto label_2099d8;
            case 0x2099DCu: goto label_2099dc;
            case 0x2099E0u: goto label_2099e0;
            case 0x2099E4u: goto label_2099e4;
            case 0x2099E8u: goto label_2099e8;
            case 0x2099ECu: goto label_2099ec;
            case 0x2099F0u: goto label_2099f0;
            case 0x2099F4u: goto label_2099f4;
            case 0x2099F8u: goto label_2099f8;
            case 0x2099FCu: goto label_2099fc;
            case 0x209A00u: goto label_209a00;
            case 0x209A04u: goto label_209a04;
            case 0x209A08u: goto label_209a08;
            case 0x209A0Cu: goto label_209a0c;
            case 0x209A10u: goto label_209a10;
            case 0x209A14u: goto label_209a14;
            case 0x209A18u: goto label_209a18;
            case 0x209A1Cu: goto label_209a1c;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A28u: goto label_209a28;
            case 0x209A2Cu: goto label_209a2c;
            case 0x209A30u: goto label_209a30;
            case 0x209A34u: goto label_209a34;
            case 0x209A38u: goto label_209a38;
            case 0x209A3Cu: goto label_209a3c;
            case 0x209A40u: goto label_209a40;
            case 0x209A44u: goto label_209a44;
            case 0x209A48u: goto label_209a48;
            case 0x209A4Cu: goto label_209a4c;
            case 0x209A50u: goto label_209a50;
            case 0x209A54u: goto label_209a54;
            case 0x209A58u: goto label_209a58;
            case 0x209A5Cu: goto label_209a5c;
            case 0x209A60u: goto label_209a60;
            case 0x209A64u: goto label_209a64;
            case 0x209A68u: goto label_209a68;
            case 0x209A6Cu: goto label_209a6c;
            case 0x209A70u: goto label_209a70;
            case 0x209A74u: goto label_209a74;
            case 0x209A78u: goto label_209a78;
            case 0x209A7Cu: goto label_209a7c;
            case 0x209A80u: goto label_209a80;
            case 0x209A84u: goto label_209a84;
            case 0x209A88u: goto label_209a88;
            case 0x209A8Cu: goto label_209a8c;
            case 0x209A90u: goto label_209a90;
            case 0x209A94u: goto label_209a94;
            case 0x209A98u: goto label_209a98;
            case 0x209A9Cu: goto label_209a9c;
            case 0x209AA0u: goto label_209aa0;
            case 0x209AA4u: goto label_209aa4;
            case 0x209AA8u: goto label_209aa8;
            case 0x209AACu: goto label_209aac;
            case 0x209AB0u: goto label_209ab0;
            case 0x209AB4u: goto label_209ab4;
            case 0x209AB8u: goto label_209ab8;
            case 0x209ABCu: goto label_209abc;
            case 0x209AC0u: goto label_209ac0;
            case 0x209AC4u: goto label_209ac4;
            case 0x209AC8u: goto label_209ac8;
            case 0x209ACCu: goto label_209acc;
            case 0x209AD0u: goto label_209ad0;
            case 0x209AD4u: goto label_209ad4;
            case 0x209AD8u: goto label_209ad8;
            case 0x209ADCu: goto label_209adc;
            case 0x209AE0u: goto label_209ae0;
            case 0x209AE4u: goto label_209ae4;
            case 0x209AE8u: goto label_209ae8;
            case 0x209AECu: goto label_209aec;
            case 0x209AF0u: goto label_209af0;
            case 0x209AF4u: goto label_209af4;
            case 0x209AF8u: goto label_209af8;
            case 0x209AFCu: goto label_209afc;
            case 0x209B00u: goto label_209b00;
            case 0x209B04u: goto label_209b04;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B10u: goto label_209b10;
            case 0x209B14u: goto label_209b14;
            case 0x209B18u: goto label_209b18;
            case 0x209B1Cu: goto label_209b1c;
            case 0x209B20u: goto label_209b20;
            case 0x209B24u: goto label_209b24;
            case 0x209B28u: goto label_209b28;
            case 0x209B2Cu: goto label_209b2c;
            case 0x209B30u: goto label_209b30;
            case 0x209B34u: goto label_209b34;
            case 0x209B38u: goto label_209b38;
            case 0x209B3Cu: goto label_209b3c;
            case 0x209B40u: goto label_209b40;
            case 0x209B44u: goto label_209b44;
            case 0x209B48u: goto label_209b48;
            case 0x209B4Cu: goto label_209b4c;
            case 0x209B50u: goto label_209b50;
            case 0x209B54u: goto label_209b54;
            case 0x209B58u: goto label_209b58;
            case 0x209B5Cu: goto label_209b5c;
            case 0x209B60u: goto label_209b60;
            case 0x209B64u: goto label_209b64;
            case 0x209B68u: goto label_209b68;
            case 0x209B6Cu: goto label_209b6c;
            case 0x209B70u: goto label_209b70;
            case 0x209B74u: goto label_209b74;
            case 0x209B78u: goto label_209b78;
            case 0x209B7Cu: goto label_209b7c;
            case 0x209B80u: goto label_209b80;
            case 0x209B84u: goto label_209b84;
            case 0x209B88u: goto label_209b88;
            case 0x209B8Cu: goto label_209b8c;
            case 0x209B90u: goto label_209b90;
            case 0x209B94u: goto label_209b94;
            case 0x209B98u: goto label_209b98;
            case 0x209B9Cu: goto label_209b9c;
            case 0x209BA0u: goto label_209ba0;
            case 0x209BA4u: goto label_209ba4;
            case 0x209BA8u: goto label_209ba8;
            case 0x209BACu: goto label_209bac;
            case 0x209BB0u: goto label_209bb0;
            case 0x209BB4u: goto label_209bb4;
            case 0x209BB8u: goto label_209bb8;
            case 0x209BBCu: goto label_209bbc;
            case 0x209BC0u: goto label_209bc0;
            case 0x209BC4u: goto label_209bc4;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BD0u: goto label_209bd0;
            case 0x209BD4u: goto label_209bd4;
            case 0x209BD8u: goto label_209bd8;
            case 0x209BDCu: goto label_209bdc;
            case 0x209BE0u: goto label_209be0;
            case 0x209BE4u: goto label_209be4;
            case 0x209BE8u: goto label_209be8;
            case 0x209BECu: goto label_209bec;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209BF8u: goto label_209bf8;
            case 0x209BFCu: goto label_209bfc;
            case 0x209C00u: goto label_209c00;
            case 0x209C04u: goto label_209c04;
            case 0x209C08u: goto label_209c08;
            case 0x209C0Cu: goto label_209c0c;
            case 0x209C10u: goto label_209c10;
            case 0x209C14u: goto label_209c14;
            case 0x209C18u: goto label_209c18;
            case 0x209C1Cu: goto label_209c1c;
            case 0x209C20u: goto label_209c20;
            case 0x209C24u: goto label_209c24;
            case 0x209C28u: goto label_209c28;
            case 0x209C2Cu: goto label_209c2c;
            case 0x209C30u: goto label_209c30;
            case 0x209C34u: goto label_209c34;
            case 0x209C38u: goto label_209c38;
            case 0x209C3Cu: goto label_209c3c;
            case 0x209C40u: goto label_209c40;
            case 0x209C44u: goto label_209c44;
            case 0x209C48u: goto label_209c48;
            case 0x209C4Cu: goto label_209c4c;
            case 0x209C50u: goto label_209c50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209ADCu; }
            if (ctx->pc != 0x209ADCu) { return; }
        }
    }
    ctx->pc = 0x209ADCu;
label_209adc:
    // 0x209adc: 0x1000ffec
label_209ae0:
    if (ctx->pc == 0x209AE0u) {
        ctx->pc = 0x209AE4u;
        goto label_209ae4;
    }
    ctx->pc = 0x209ADCu;
    {
        const bool branch_taken_0x209adc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209adc) {
            ctx->pc = 0x209A90u;
            goto label_209a90;
        }
    }
    ctx->pc = 0x209AE4u;
label_209ae4:
    // 0x209ae4: 0x8fc20010
    ctx->pc = 0x209ae4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_209ae8:
    // 0x209ae8: 0x24030001
    ctx->pc = 0x209ae8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_209aec:
    // 0x209aec: 0x10430004
label_209af0:
    if (ctx->pc == 0x209AF0u) {
        ctx->pc = 0x209AF4u;
        goto label_209af4;
    }
    ctx->pc = 0x209AECu;
    {
        const bool branch_taken_0x209aec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x209aec) {
            ctx->pc = 0x209B00u;
            goto label_209b00;
        }
    }
    ctx->pc = 0x209AF4u;
label_209af4:
    // 0x209af4: 0x102d
    ctx->pc = 0x209af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209af8:
    // 0x209af8: 0x1000004f
label_209afc:
    if (ctx->pc == 0x209AFCu) {
        ctx->pc = 0x209B00u;
        goto label_209b00;
    }
    ctx->pc = 0x209AF8u;
    {
        const bool branch_taken_0x209af8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209af8) {
            ctx->pc = 0x209C38u;
            goto label_209c38;
        }
    }
    ctx->pc = 0x209B00u;
label_209b00:
    // 0x209b00: 0x27c20020
    ctx->pc = 0x209b00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 32));
label_209b04:
    // 0x209b04: 0x8fc40000
    ctx->pc = 0x209b04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_209b08:
    // 0x209b08: 0x8fc50004
    ctx->pc = 0x209b08u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_209b0c:
    // 0x209b0c: 0x40302d
    ctx->pc = 0x209b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209b10:
    // 0x209b10: 0x24070001
    ctx->pc = 0x209b10u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_209b14:
    // 0x209b14: 0xc0b98da
label_209b18:
    if (ctx->pc == 0x209B18u) {
        ctx->pc = 0x209B1Cu;
        goto label_209b1c;
    }
    ctx->pc = 0x209B14u;
    SET_GPR_U32(ctx, 31, 0x209B1Cu);
    ctx->pc = 0x2E6368u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x2e6368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B1Cu; }
    }
    if (ctx->pc != 0x209B1Cu) { return; }
    ctx->pc = 0x209B1Cu;
label_209b1c:
    // 0x209b1c: 0x10400005
label_209b20:
    if (ctx->pc == 0x209B20u) {
        ctx->pc = 0x209B24u;
        goto label_209b24;
    }
    ctx->pc = 0x209B1Cu;
    {
        const bool branch_taken_0x209b1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209b1c) {
            ctx->pc = 0x209B34u;
            goto label_209b34;
        }
    }
    ctx->pc = 0x209B24u;
label_209b24:
    // 0x209b24: 0x3c04003a
    ctx->pc = 0x209b24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_209b28:
    // 0x209b28: 0x24844f88
    ctx->pc = 0x209b28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20360));
label_209b2c:
    // 0x209b2c: 0xc0b4a34
label_209b30:
    if (ctx->pc == 0x209B30u) {
        ctx->pc = 0x209B34u;
        goto label_209b34;
    }
    ctx->pc = 0x209B2Cu;
    SET_GPR_U32(ctx, 31, 0x209B34u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B34u; }
    }
    if (ctx->pc != 0x209B34u) { return; }
    ctx->pc = 0x209B34u;
label_209b34:
    // 0x209b34: 0x0
    ctx->pc = 0x209b34u;
    // NOP
label_209b38:
    // 0x209b38: 0x27c2000c
    ctx->pc = 0x209b38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 12));
label_209b3c:
    // 0x209b3c: 0x27c30010
    ctx->pc = 0x209b3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 16));
label_209b40:
    // 0x209b40: 0x24040001
    ctx->pc = 0x209b40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_209b44:
    // 0x209b44: 0x40282d
    ctx->pc = 0x209b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209b48:
    // 0x209b48: 0x60302d
    ctx->pc = 0x209b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_209b4c:
    // 0x209b4c: 0xc0b9a14
label_209b50:
    if (ctx->pc == 0x209B50u) {
        ctx->pc = 0x209B54u;
        goto label_209b54;
    }
    ctx->pc = 0x209B4Cu;
    SET_GPR_U32(ctx, 31, 0x209B54u);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B54u; }
    }
    if (ctx->pc != 0x209B54u) { return; }
    ctx->pc = 0x209B54u;
label_209b54:
    // 0x209b54: 0x10400003
label_209b58:
    if (ctx->pc == 0x209B58u) {
        ctx->pc = 0x209B5Cu;
        goto label_209b5c;
    }
    ctx->pc = 0x209B54u;
    {
        const bool branch_taken_0x209b54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209b54) {
            ctx->pc = 0x209B64u;
            goto label_209b64;
        }
    }
    ctx->pc = 0x209B5Cu;
label_209b5c:
    // 0x209b5c: 0x1000000b
label_209b60:
    if (ctx->pc == 0x209B60u) {
        ctx->pc = 0x209B64u;
        goto label_209b64;
    }
    ctx->pc = 0x209B5Cu;
    {
        const bool branch_taken_0x209b5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209b5c) {
            ctx->pc = 0x209B8Cu;
            goto label_209b8c;
        }
    }
    ctx->pc = 0x209B64u;
label_209b64:
    // 0x209b64: 0x3c02003c
    ctx->pc = 0x209b64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_209b68:
    // 0x209b68: 0x8c42c4e4
    ctx->pc = 0x209b68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
label_209b6c:
    // 0x209b6c: 0x10400005
label_209b70:
    if (ctx->pc == 0x209B70u) {
        ctx->pc = 0x209B74u;
        goto label_209b74;
    }
    ctx->pc = 0x209B6Cu;
    {
        const bool branch_taken_0x209b6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209b6c) {
            ctx->pc = 0x209B84u;
            goto label_209b84;
        }
    }
    ctx->pc = 0x209B74u;
label_209b74:
    // 0x209b74: 0x3c10003c
    ctx->pc = 0x209b74u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_209b78:
    // 0x209b78: 0x8e10c4e4
    ctx->pc = 0x209b78u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294952164)));
label_209b7c:
    // 0x209b7c: 0x200f809
label_209b80:
    if (ctx->pc == 0x209B80u) {
        ctx->pc = 0x209B84u;
        goto label_209b84;
    }
    ctx->pc = 0x209B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x209B84u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2099C0u: goto label_2099c0;
            case 0x2099C4u: goto label_2099c4;
            case 0x2099C8u: goto label_2099c8;
            case 0x2099CCu: goto label_2099cc;
            case 0x2099D0u: goto label_2099d0;
            case 0x2099D4u: goto label_2099d4;
            case 0x2099D8u: goto label_2099d8;
            case 0x2099DCu: goto label_2099dc;
            case 0x2099E0u: goto label_2099e0;
            case 0x2099E4u: goto label_2099e4;
            case 0x2099E8u: goto label_2099e8;
            case 0x2099ECu: goto label_2099ec;
            case 0x2099F0u: goto label_2099f0;
            case 0x2099F4u: goto label_2099f4;
            case 0x2099F8u: goto label_2099f8;
            case 0x2099FCu: goto label_2099fc;
            case 0x209A00u: goto label_209a00;
            case 0x209A04u: goto label_209a04;
            case 0x209A08u: goto label_209a08;
            case 0x209A0Cu: goto label_209a0c;
            case 0x209A10u: goto label_209a10;
            case 0x209A14u: goto label_209a14;
            case 0x209A18u: goto label_209a18;
            case 0x209A1Cu: goto label_209a1c;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A28u: goto label_209a28;
            case 0x209A2Cu: goto label_209a2c;
            case 0x209A30u: goto label_209a30;
            case 0x209A34u: goto label_209a34;
            case 0x209A38u: goto label_209a38;
            case 0x209A3Cu: goto label_209a3c;
            case 0x209A40u: goto label_209a40;
            case 0x209A44u: goto label_209a44;
            case 0x209A48u: goto label_209a48;
            case 0x209A4Cu: goto label_209a4c;
            case 0x209A50u: goto label_209a50;
            case 0x209A54u: goto label_209a54;
            case 0x209A58u: goto label_209a58;
            case 0x209A5Cu: goto label_209a5c;
            case 0x209A60u: goto label_209a60;
            case 0x209A64u: goto label_209a64;
            case 0x209A68u: goto label_209a68;
            case 0x209A6Cu: goto label_209a6c;
            case 0x209A70u: goto label_209a70;
            case 0x209A74u: goto label_209a74;
            case 0x209A78u: goto label_209a78;
            case 0x209A7Cu: goto label_209a7c;
            case 0x209A80u: goto label_209a80;
            case 0x209A84u: goto label_209a84;
            case 0x209A88u: goto label_209a88;
            case 0x209A8Cu: goto label_209a8c;
            case 0x209A90u: goto label_209a90;
            case 0x209A94u: goto label_209a94;
            case 0x209A98u: goto label_209a98;
            case 0x209A9Cu: goto label_209a9c;
            case 0x209AA0u: goto label_209aa0;
            case 0x209AA4u: goto label_209aa4;
            case 0x209AA8u: goto label_209aa8;
            case 0x209AACu: goto label_209aac;
            case 0x209AB0u: goto label_209ab0;
            case 0x209AB4u: goto label_209ab4;
            case 0x209AB8u: goto label_209ab8;
            case 0x209ABCu: goto label_209abc;
            case 0x209AC0u: goto label_209ac0;
            case 0x209AC4u: goto label_209ac4;
            case 0x209AC8u: goto label_209ac8;
            case 0x209ACCu: goto label_209acc;
            case 0x209AD0u: goto label_209ad0;
            case 0x209AD4u: goto label_209ad4;
            case 0x209AD8u: goto label_209ad8;
            case 0x209ADCu: goto label_209adc;
            case 0x209AE0u: goto label_209ae0;
            case 0x209AE4u: goto label_209ae4;
            case 0x209AE8u: goto label_209ae8;
            case 0x209AECu: goto label_209aec;
            case 0x209AF0u: goto label_209af0;
            case 0x209AF4u: goto label_209af4;
            case 0x209AF8u: goto label_209af8;
            case 0x209AFCu: goto label_209afc;
            case 0x209B00u: goto label_209b00;
            case 0x209B04u: goto label_209b04;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B10u: goto label_209b10;
            case 0x209B14u: goto label_209b14;
            case 0x209B18u: goto label_209b18;
            case 0x209B1Cu: goto label_209b1c;
            case 0x209B20u: goto label_209b20;
            case 0x209B24u: goto label_209b24;
            case 0x209B28u: goto label_209b28;
            case 0x209B2Cu: goto label_209b2c;
            case 0x209B30u: goto label_209b30;
            case 0x209B34u: goto label_209b34;
            case 0x209B38u: goto label_209b38;
            case 0x209B3Cu: goto label_209b3c;
            case 0x209B40u: goto label_209b40;
            case 0x209B44u: goto label_209b44;
            case 0x209B48u: goto label_209b48;
            case 0x209B4Cu: goto label_209b4c;
            case 0x209B50u: goto label_209b50;
            case 0x209B54u: goto label_209b54;
            case 0x209B58u: goto label_209b58;
            case 0x209B5Cu: goto label_209b5c;
            case 0x209B60u: goto label_209b60;
            case 0x209B64u: goto label_209b64;
            case 0x209B68u: goto label_209b68;
            case 0x209B6Cu: goto label_209b6c;
            case 0x209B70u: goto label_209b70;
            case 0x209B74u: goto label_209b74;
            case 0x209B78u: goto label_209b78;
            case 0x209B7Cu: goto label_209b7c;
            case 0x209B80u: goto label_209b80;
            case 0x209B84u: goto label_209b84;
            case 0x209B88u: goto label_209b88;
            case 0x209B8Cu: goto label_209b8c;
            case 0x209B90u: goto label_209b90;
            case 0x209B94u: goto label_209b94;
            case 0x209B98u: goto label_209b98;
            case 0x209B9Cu: goto label_209b9c;
            case 0x209BA0u: goto label_209ba0;
            case 0x209BA4u: goto label_209ba4;
            case 0x209BA8u: goto label_209ba8;
            case 0x209BACu: goto label_209bac;
            case 0x209BB0u: goto label_209bb0;
            case 0x209BB4u: goto label_209bb4;
            case 0x209BB8u: goto label_209bb8;
            case 0x209BBCu: goto label_209bbc;
            case 0x209BC0u: goto label_209bc0;
            case 0x209BC4u: goto label_209bc4;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BD0u: goto label_209bd0;
            case 0x209BD4u: goto label_209bd4;
            case 0x209BD8u: goto label_209bd8;
            case 0x209BDCu: goto label_209bdc;
            case 0x209BE0u: goto label_209be0;
            case 0x209BE4u: goto label_209be4;
            case 0x209BE8u: goto label_209be8;
            case 0x209BECu: goto label_209bec;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209BF8u: goto label_209bf8;
            case 0x209BFCu: goto label_209bfc;
            case 0x209C00u: goto label_209c00;
            case 0x209C04u: goto label_209c04;
            case 0x209C08u: goto label_209c08;
            case 0x209C0Cu: goto label_209c0c;
            case 0x209C10u: goto label_209c10;
            case 0x209C14u: goto label_209c14;
            case 0x209C18u: goto label_209c18;
            case 0x209C1Cu: goto label_209c1c;
            case 0x209C20u: goto label_209c20;
            case 0x209C24u: goto label_209c24;
            case 0x209C28u: goto label_209c28;
            case 0x209C2Cu: goto label_209c2c;
            case 0x209C30u: goto label_209c30;
            case 0x209C34u: goto label_209c34;
            case 0x209C38u: goto label_209c38;
            case 0x209C3Cu: goto label_209c3c;
            case 0x209C40u: goto label_209c40;
            case 0x209C44u: goto label_209c44;
            case 0x209C48u: goto label_209c48;
            case 0x209C4Cu: goto label_209c4c;
            case 0x209C50u: goto label_209c50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209B84u; }
            if (ctx->pc != 0x209B84u) { return; }
        }
    }
    ctx->pc = 0x209B84u;
label_209b84:
    // 0x209b84: 0x1000ffec
label_209b88:
    if (ctx->pc == 0x209B88u) {
        ctx->pc = 0x209B8Cu;
        goto label_209b8c;
    }
    ctx->pc = 0x209B84u;
    {
        const bool branch_taken_0x209b84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209b84) {
            ctx->pc = 0x209B38u;
            goto label_209b38;
        }
    }
    ctx->pc = 0x209B8Cu;
label_209b8c:
    // 0x209b8c: 0x8fc20010
    ctx->pc = 0x209b8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_209b90:
    // 0x209b90: 0x4410004
label_209b94:
    if (ctx->pc == 0x209B94u) {
        ctx->pc = 0x209B98u;
        goto label_209b98;
    }
    ctx->pc = 0x209B90u;
    {
        const bool branch_taken_0x209b90 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x209b90) {
            ctx->pc = 0x209BA4u;
            goto label_209ba4;
        }
    }
    ctx->pc = 0x209B98u;
label_209b98:
    // 0x209b98: 0x102d
    ctx->pc = 0x209b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209b9c:
    // 0x209b9c: 0x10000026
label_209ba0:
    if (ctx->pc == 0x209BA0u) {
        ctx->pc = 0x209BA4u;
        goto label_209ba4;
    }
    ctx->pc = 0x209B9Cu;
    {
        const bool branch_taken_0x209b9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209b9c) {
            ctx->pc = 0x209C38u;
            goto label_209c38;
        }
    }
    ctx->pc = 0x209BA4u;
label_209ba4:
    // 0x209ba4: 0x8fc20010
    ctx->pc = 0x209ba4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_209ba8:
    // 0x209ba8: 0xafc20014
    ctx->pc = 0x209ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 2));
label_209bac:
    // 0x209bac: 0x8fc40014
    ctx->pc = 0x209bacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_209bb0:
    // 0x209bb0: 0xc0b9922
label_209bb4:
    if (ctx->pc == 0x209BB4u) {
        ctx->pc = 0x209BB8u;
        goto label_209bb8;
    }
    ctx->pc = 0x209BB0u;
    SET_GPR_U32(ctx, 31, 0x209BB8u);
    ctx->pc = 0x2E6488u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x2e6488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209BB8u; }
    }
    if (ctx->pc != 0x209BB8u) { return; }
    ctx->pc = 0x209BB8u;
label_209bb8:
    // 0x209bb8: 0x10400005
label_209bbc:
    if (ctx->pc == 0x209BBCu) {
        ctx->pc = 0x209BC0u;
        goto label_209bc0;
    }
    ctx->pc = 0x209BB8u;
    {
        const bool branch_taken_0x209bb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209bb8) {
            ctx->pc = 0x209BD0u;
            goto label_209bd0;
        }
    }
    ctx->pc = 0x209BC0u;
label_209bc0:
    // 0x209bc0: 0x3c04003a
    ctx->pc = 0x209bc0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_209bc4:
    // 0x209bc4: 0x24844fc8
    ctx->pc = 0x209bc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20424));
label_209bc8:
    // 0x209bc8: 0xc0b4a34
label_209bcc:
    if (ctx->pc == 0x209BCCu) {
        ctx->pc = 0x209BD0u;
        goto label_209bd0;
    }
    ctx->pc = 0x209BC8u;
    SET_GPR_U32(ctx, 31, 0x209BD0u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209BD0u; }
    }
    if (ctx->pc != 0x209BD0u) { return; }
    ctx->pc = 0x209BD0u;
label_209bd0:
    // 0x209bd0: 0x0
    ctx->pc = 0x209bd0u;
    // NOP
label_209bd4:
    // 0x209bd4: 0x0
    ctx->pc = 0x209bd4u;
    // NOP
label_209bd8:
    // 0x209bd8: 0x27c2000c
    ctx->pc = 0x209bd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 12));
label_209bdc:
    // 0x209bdc: 0x27c30010
    ctx->pc = 0x209bdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 16));
label_209be0:
    // 0x209be0: 0x24040001
    ctx->pc = 0x209be0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_209be4:
    // 0x209be4: 0x40282d
    ctx->pc = 0x209be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209be8:
    // 0x209be8: 0x60302d
    ctx->pc = 0x209be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_209bec:
    // 0x209bec: 0xc0b9a14
label_209bf0:
    if (ctx->pc == 0x209BF0u) {
        ctx->pc = 0x209BF4u;
        goto label_209bf4;
    }
    ctx->pc = 0x209BECu;
    SET_GPR_U32(ctx, 31, 0x209BF4u);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209BF4u; }
    }
    if (ctx->pc != 0x209BF4u) { return; }
    ctx->pc = 0x209BF4u;
label_209bf4:
    // 0x209bf4: 0x10400003
label_209bf8:
    if (ctx->pc == 0x209BF8u) {
        ctx->pc = 0x209BFCu;
        goto label_209bfc;
    }
    ctx->pc = 0x209BF4u;
    {
        const bool branch_taken_0x209bf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209bf4) {
            ctx->pc = 0x209C04u;
            goto label_209c04;
        }
    }
    ctx->pc = 0x209BFCu;
label_209bfc:
    // 0x209bfc: 0x1000000b
label_209c00:
    if (ctx->pc == 0x209C00u) {
        ctx->pc = 0x209C04u;
        goto label_209c04;
    }
    ctx->pc = 0x209BFCu;
    {
        const bool branch_taken_0x209bfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209bfc) {
            ctx->pc = 0x209C2Cu;
            goto label_209c2c;
        }
    }
    ctx->pc = 0x209C04u;
label_209c04:
    // 0x209c04: 0x3c02003c
    ctx->pc = 0x209c04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_209c08:
    // 0x209c08: 0x8c42c4e4
    ctx->pc = 0x209c08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
label_209c0c:
    // 0x209c0c: 0x10400005
label_209c10:
    if (ctx->pc == 0x209C10u) {
        ctx->pc = 0x209C14u;
        goto label_209c14;
    }
    ctx->pc = 0x209C0Cu;
    {
        const bool branch_taken_0x209c0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x209c0c) {
            ctx->pc = 0x209C24u;
            goto label_209c24;
        }
    }
    ctx->pc = 0x209C14u;
label_209c14:
    // 0x209c14: 0x3c10003c
    ctx->pc = 0x209c14u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_209c18:
    // 0x209c18: 0x8e10c4e4
    ctx->pc = 0x209c18u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294952164)));
label_209c1c:
    // 0x209c1c: 0x200f809
label_209c20:
    if (ctx->pc == 0x209C20u) {
        ctx->pc = 0x209C24u;
        goto label_209c24;
    }
    ctx->pc = 0x209C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x209C24u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2099C0u: goto label_2099c0;
            case 0x2099C4u: goto label_2099c4;
            case 0x2099C8u: goto label_2099c8;
            case 0x2099CCu: goto label_2099cc;
            case 0x2099D0u: goto label_2099d0;
            case 0x2099D4u: goto label_2099d4;
            case 0x2099D8u: goto label_2099d8;
            case 0x2099DCu: goto label_2099dc;
            case 0x2099E0u: goto label_2099e0;
            case 0x2099E4u: goto label_2099e4;
            case 0x2099E8u: goto label_2099e8;
            case 0x2099ECu: goto label_2099ec;
            case 0x2099F0u: goto label_2099f0;
            case 0x2099F4u: goto label_2099f4;
            case 0x2099F8u: goto label_2099f8;
            case 0x2099FCu: goto label_2099fc;
            case 0x209A00u: goto label_209a00;
            case 0x209A04u: goto label_209a04;
            case 0x209A08u: goto label_209a08;
            case 0x209A0Cu: goto label_209a0c;
            case 0x209A10u: goto label_209a10;
            case 0x209A14u: goto label_209a14;
            case 0x209A18u: goto label_209a18;
            case 0x209A1Cu: goto label_209a1c;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A28u: goto label_209a28;
            case 0x209A2Cu: goto label_209a2c;
            case 0x209A30u: goto label_209a30;
            case 0x209A34u: goto label_209a34;
            case 0x209A38u: goto label_209a38;
            case 0x209A3Cu: goto label_209a3c;
            case 0x209A40u: goto label_209a40;
            case 0x209A44u: goto label_209a44;
            case 0x209A48u: goto label_209a48;
            case 0x209A4Cu: goto label_209a4c;
            case 0x209A50u: goto label_209a50;
            case 0x209A54u: goto label_209a54;
            case 0x209A58u: goto label_209a58;
            case 0x209A5Cu: goto label_209a5c;
            case 0x209A60u: goto label_209a60;
            case 0x209A64u: goto label_209a64;
            case 0x209A68u: goto label_209a68;
            case 0x209A6Cu: goto label_209a6c;
            case 0x209A70u: goto label_209a70;
            case 0x209A74u: goto label_209a74;
            case 0x209A78u: goto label_209a78;
            case 0x209A7Cu: goto label_209a7c;
            case 0x209A80u: goto label_209a80;
            case 0x209A84u: goto label_209a84;
            case 0x209A88u: goto label_209a88;
            case 0x209A8Cu: goto label_209a8c;
            case 0x209A90u: goto label_209a90;
            case 0x209A94u: goto label_209a94;
            case 0x209A98u: goto label_209a98;
            case 0x209A9Cu: goto label_209a9c;
            case 0x209AA0u: goto label_209aa0;
            case 0x209AA4u: goto label_209aa4;
            case 0x209AA8u: goto label_209aa8;
            case 0x209AACu: goto label_209aac;
            case 0x209AB0u: goto label_209ab0;
            case 0x209AB4u: goto label_209ab4;
            case 0x209AB8u: goto label_209ab8;
            case 0x209ABCu: goto label_209abc;
            case 0x209AC0u: goto label_209ac0;
            case 0x209AC4u: goto label_209ac4;
            case 0x209AC8u: goto label_209ac8;
            case 0x209ACCu: goto label_209acc;
            case 0x209AD0u: goto label_209ad0;
            case 0x209AD4u: goto label_209ad4;
            case 0x209AD8u: goto label_209ad8;
            case 0x209ADCu: goto label_209adc;
            case 0x209AE0u: goto label_209ae0;
            case 0x209AE4u: goto label_209ae4;
            case 0x209AE8u: goto label_209ae8;
            case 0x209AECu: goto label_209aec;
            case 0x209AF0u: goto label_209af0;
            case 0x209AF4u: goto label_209af4;
            case 0x209AF8u: goto label_209af8;
            case 0x209AFCu: goto label_209afc;
            case 0x209B00u: goto label_209b00;
            case 0x209B04u: goto label_209b04;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B10u: goto label_209b10;
            case 0x209B14u: goto label_209b14;
            case 0x209B18u: goto label_209b18;
            case 0x209B1Cu: goto label_209b1c;
            case 0x209B20u: goto label_209b20;
            case 0x209B24u: goto label_209b24;
            case 0x209B28u: goto label_209b28;
            case 0x209B2Cu: goto label_209b2c;
            case 0x209B30u: goto label_209b30;
            case 0x209B34u: goto label_209b34;
            case 0x209B38u: goto label_209b38;
            case 0x209B3Cu: goto label_209b3c;
            case 0x209B40u: goto label_209b40;
            case 0x209B44u: goto label_209b44;
            case 0x209B48u: goto label_209b48;
            case 0x209B4Cu: goto label_209b4c;
            case 0x209B50u: goto label_209b50;
            case 0x209B54u: goto label_209b54;
            case 0x209B58u: goto label_209b58;
            case 0x209B5Cu: goto label_209b5c;
            case 0x209B60u: goto label_209b60;
            case 0x209B64u: goto label_209b64;
            case 0x209B68u: goto label_209b68;
            case 0x209B6Cu: goto label_209b6c;
            case 0x209B70u: goto label_209b70;
            case 0x209B74u: goto label_209b74;
            case 0x209B78u: goto label_209b78;
            case 0x209B7Cu: goto label_209b7c;
            case 0x209B80u: goto label_209b80;
            case 0x209B84u: goto label_209b84;
            case 0x209B88u: goto label_209b88;
            case 0x209B8Cu: goto label_209b8c;
            case 0x209B90u: goto label_209b90;
            case 0x209B94u: goto label_209b94;
            case 0x209B98u: goto label_209b98;
            case 0x209B9Cu: goto label_209b9c;
            case 0x209BA0u: goto label_209ba0;
            case 0x209BA4u: goto label_209ba4;
            case 0x209BA8u: goto label_209ba8;
            case 0x209BACu: goto label_209bac;
            case 0x209BB0u: goto label_209bb0;
            case 0x209BB4u: goto label_209bb4;
            case 0x209BB8u: goto label_209bb8;
            case 0x209BBCu: goto label_209bbc;
            case 0x209BC0u: goto label_209bc0;
            case 0x209BC4u: goto label_209bc4;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BD0u: goto label_209bd0;
            case 0x209BD4u: goto label_209bd4;
            case 0x209BD8u: goto label_209bd8;
            case 0x209BDCu: goto label_209bdc;
            case 0x209BE0u: goto label_209be0;
            case 0x209BE4u: goto label_209be4;
            case 0x209BE8u: goto label_209be8;
            case 0x209BECu: goto label_209bec;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209BF8u: goto label_209bf8;
            case 0x209BFCu: goto label_209bfc;
            case 0x209C00u: goto label_209c00;
            case 0x209C04u: goto label_209c04;
            case 0x209C08u: goto label_209c08;
            case 0x209C0Cu: goto label_209c0c;
            case 0x209C10u: goto label_209c10;
            case 0x209C14u: goto label_209c14;
            case 0x209C18u: goto label_209c18;
            case 0x209C1Cu: goto label_209c1c;
            case 0x209C20u: goto label_209c20;
            case 0x209C24u: goto label_209c24;
            case 0x209C28u: goto label_209c28;
            case 0x209C2Cu: goto label_209c2c;
            case 0x209C30u: goto label_209c30;
            case 0x209C34u: goto label_209c34;
            case 0x209C38u: goto label_209c38;
            case 0x209C3Cu: goto label_209c3c;
            case 0x209C40u: goto label_209c40;
            case 0x209C44u: goto label_209c44;
            case 0x209C48u: goto label_209c48;
            case 0x209C4Cu: goto label_209c4c;
            case 0x209C50u: goto label_209c50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209C24u; }
            if (ctx->pc != 0x209C24u) { return; }
        }
    }
    ctx->pc = 0x209C24u;
label_209c24:
    // 0x209c24: 0x1000ffec
label_209c28:
    if (ctx->pc == 0x209C28u) {
        ctx->pc = 0x209C2Cu;
        goto label_209c2c;
    }
    ctx->pc = 0x209C24u;
    {
        const bool branch_taken_0x209c24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209c24) {
            ctx->pc = 0x209BD8u;
            goto label_209bd8;
        }
    }
    ctx->pc = 0x209C2Cu;
label_209c2c:
    // 0x209c2c: 0x24020001
    ctx->pc = 0x209c2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_209c30:
    // 0x209c30: 0x10000001
label_209c34:
    if (ctx->pc == 0x209C34u) {
        ctx->pc = 0x209C38u;
        goto label_209c38;
    }
    ctx->pc = 0x209C30u;
    {
        const bool branch_taken_0x209c30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209c30) {
            ctx->pc = 0x209C38u;
            goto label_209c38;
        }
    }
    ctx->pc = 0x209C38u;
label_209c38:
    // 0x209c38: 0x3c0e82d
    ctx->pc = 0x209c38u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_209c3c:
    // 0x209c3c: 0xdfbf00d0
    ctx->pc = 0x209c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_209c40:
    // 0x209c40: 0xdfbe00c0
    ctx->pc = 0x209c40u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_209c44:
    // 0x209c44: 0xdfb000b0
    ctx->pc = 0x209c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_209c48:
    // 0x209c48: 0x27bd00e0
    ctx->pc = 0x209c48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
label_209c4c:
    // 0x209c4c: 0x3e00008
label_209c50:
    if (ctx->pc == 0x209C50u) {
        ctx->pc = 0x209C54u;
        goto label_fallthrough_0x209c4c;
    }
    ctx->pc = 0x209C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2099C0u: goto label_2099c0;
            case 0x2099C4u: goto label_2099c4;
            case 0x2099C8u: goto label_2099c8;
            case 0x2099CCu: goto label_2099cc;
            case 0x2099D0u: goto label_2099d0;
            case 0x2099D4u: goto label_2099d4;
            case 0x2099D8u: goto label_2099d8;
            case 0x2099DCu: goto label_2099dc;
            case 0x2099E0u: goto label_2099e0;
            case 0x2099E4u: goto label_2099e4;
            case 0x2099E8u: goto label_2099e8;
            case 0x2099ECu: goto label_2099ec;
            case 0x2099F0u: goto label_2099f0;
            case 0x2099F4u: goto label_2099f4;
            case 0x2099F8u: goto label_2099f8;
            case 0x2099FCu: goto label_2099fc;
            case 0x209A00u: goto label_209a00;
            case 0x209A04u: goto label_209a04;
            case 0x209A08u: goto label_209a08;
            case 0x209A0Cu: goto label_209a0c;
            case 0x209A10u: goto label_209a10;
            case 0x209A14u: goto label_209a14;
            case 0x209A18u: goto label_209a18;
            case 0x209A1Cu: goto label_209a1c;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A28u: goto label_209a28;
            case 0x209A2Cu: goto label_209a2c;
            case 0x209A30u: goto label_209a30;
            case 0x209A34u: goto label_209a34;
            case 0x209A38u: goto label_209a38;
            case 0x209A3Cu: goto label_209a3c;
            case 0x209A40u: goto label_209a40;
            case 0x209A44u: goto label_209a44;
            case 0x209A48u: goto label_209a48;
            case 0x209A4Cu: goto label_209a4c;
            case 0x209A50u: goto label_209a50;
            case 0x209A54u: goto label_209a54;
            case 0x209A58u: goto label_209a58;
            case 0x209A5Cu: goto label_209a5c;
            case 0x209A60u: goto label_209a60;
            case 0x209A64u: goto label_209a64;
            case 0x209A68u: goto label_209a68;
            case 0x209A6Cu: goto label_209a6c;
            case 0x209A70u: goto label_209a70;
            case 0x209A74u: goto label_209a74;
            case 0x209A78u: goto label_209a78;
            case 0x209A7Cu: goto label_209a7c;
            case 0x209A80u: goto label_209a80;
            case 0x209A84u: goto label_209a84;
            case 0x209A88u: goto label_209a88;
            case 0x209A8Cu: goto label_209a8c;
            case 0x209A90u: goto label_209a90;
            case 0x209A94u: goto label_209a94;
            case 0x209A98u: goto label_209a98;
            case 0x209A9Cu: goto label_209a9c;
            case 0x209AA0u: goto label_209aa0;
            case 0x209AA4u: goto label_209aa4;
            case 0x209AA8u: goto label_209aa8;
            case 0x209AACu: goto label_209aac;
            case 0x209AB0u: goto label_209ab0;
            case 0x209AB4u: goto label_209ab4;
            case 0x209AB8u: goto label_209ab8;
            case 0x209ABCu: goto label_209abc;
            case 0x209AC0u: goto label_209ac0;
            case 0x209AC4u: goto label_209ac4;
            case 0x209AC8u: goto label_209ac8;
            case 0x209ACCu: goto label_209acc;
            case 0x209AD0u: goto label_209ad0;
            case 0x209AD4u: goto label_209ad4;
            case 0x209AD8u: goto label_209ad8;
            case 0x209ADCu: goto label_209adc;
            case 0x209AE0u: goto label_209ae0;
            case 0x209AE4u: goto label_209ae4;
            case 0x209AE8u: goto label_209ae8;
            case 0x209AECu: goto label_209aec;
            case 0x209AF0u: goto label_209af0;
            case 0x209AF4u: goto label_209af4;
            case 0x209AF8u: goto label_209af8;
            case 0x209AFCu: goto label_209afc;
            case 0x209B00u: goto label_209b00;
            case 0x209B04u: goto label_209b04;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B10u: goto label_209b10;
            case 0x209B14u: goto label_209b14;
            case 0x209B18u: goto label_209b18;
            case 0x209B1Cu: goto label_209b1c;
            case 0x209B20u: goto label_209b20;
            case 0x209B24u: goto label_209b24;
            case 0x209B28u: goto label_209b28;
            case 0x209B2Cu: goto label_209b2c;
            case 0x209B30u: goto label_209b30;
            case 0x209B34u: goto label_209b34;
            case 0x209B38u: goto label_209b38;
            case 0x209B3Cu: goto label_209b3c;
            case 0x209B40u: goto label_209b40;
            case 0x209B44u: goto label_209b44;
            case 0x209B48u: goto label_209b48;
            case 0x209B4Cu: goto label_209b4c;
            case 0x209B50u: goto label_209b50;
            case 0x209B54u: goto label_209b54;
            case 0x209B58u: goto label_209b58;
            case 0x209B5Cu: goto label_209b5c;
            case 0x209B60u: goto label_209b60;
            case 0x209B64u: goto label_209b64;
            case 0x209B68u: goto label_209b68;
            case 0x209B6Cu: goto label_209b6c;
            case 0x209B70u: goto label_209b70;
            case 0x209B74u: goto label_209b74;
            case 0x209B78u: goto label_209b78;
            case 0x209B7Cu: goto label_209b7c;
            case 0x209B80u: goto label_209b80;
            case 0x209B84u: goto label_209b84;
            case 0x209B88u: goto label_209b88;
            case 0x209B8Cu: goto label_209b8c;
            case 0x209B90u: goto label_209b90;
            case 0x209B94u: goto label_209b94;
            case 0x209B98u: goto label_209b98;
            case 0x209B9Cu: goto label_209b9c;
            case 0x209BA0u: goto label_209ba0;
            case 0x209BA4u: goto label_209ba4;
            case 0x209BA8u: goto label_209ba8;
            case 0x209BACu: goto label_209bac;
            case 0x209BB0u: goto label_209bb0;
            case 0x209BB4u: goto label_209bb4;
            case 0x209BB8u: goto label_209bb8;
            case 0x209BBCu: goto label_209bbc;
            case 0x209BC0u: goto label_209bc0;
            case 0x209BC4u: goto label_209bc4;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BD0u: goto label_209bd0;
            case 0x209BD4u: goto label_209bd4;
            case 0x209BD8u: goto label_209bd8;
            case 0x209BDCu: goto label_209bdc;
            case 0x209BE0u: goto label_209be0;
            case 0x209BE4u: goto label_209be4;
            case 0x209BE8u: goto label_209be8;
            case 0x209BECu: goto label_209bec;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209BF8u: goto label_209bf8;
            case 0x209BFCu: goto label_209bfc;
            case 0x209C00u: goto label_209c00;
            case 0x209C04u: goto label_209c04;
            case 0x209C08u: goto label_209c08;
            case 0x209C0Cu: goto label_209c0c;
            case 0x209C10u: goto label_209c10;
            case 0x209C14u: goto label_209c14;
            case 0x209C18u: goto label_209c18;
            case 0x209C1Cu: goto label_209c1c;
            case 0x209C20u: goto label_209c20;
            case 0x209C24u: goto label_209c24;
            case 0x209C28u: goto label_209c28;
            case 0x209C2Cu: goto label_209c2c;
            case 0x209C30u: goto label_209c30;
            case 0x209C34u: goto label_209c34;
            case 0x209C38u: goto label_209c38;
            case 0x209C3Cu: goto label_209c3c;
            case 0x209C40u: goto label_209c40;
            case 0x209C44u: goto label_209c44;
            case 0x209C48u: goto label_209c48;
            case 0x209C4Cu: goto label_209c4c;
            case 0x209C50u: goto label_209c50;
            default: break;
        }
        return;
    }
label_fallthrough_0x209c4c:
    ctx->pc = 0x209C54u;
}
