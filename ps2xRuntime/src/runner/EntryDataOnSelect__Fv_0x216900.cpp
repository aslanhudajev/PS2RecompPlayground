#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: EntryDataOnSelect__Fv
// Address: 0x216900 - 0x216d50
void EntryDataOnSelect__Fv_0x216900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EntryDataOnSelect__Fv");


    ctx->pc = 0x216900u;

label_216900:
    // 0x216900: 0x27bdffc0
    ctx->pc = 0x216900u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_216904:
    // 0x216904: 0x7fbf0030
    ctx->pc = 0x216904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_216908:
    // 0x216908: 0x7fb20020
    ctx->pc = 0x216908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21690c:
    // 0x21690c: 0x7fb10010
    ctx->pc = 0x21690cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_216910:
    // 0x216910: 0xc25a998
label_216914:
    if (ctx->pc == 0x216914u) {
        ctx->pc = 0x216914u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x216918u;
        goto label_216918;
    }
    ctx->pc = 0x216910u;
    SET_GPR_U32(ctx, 31, 0x216918u);
    ctx->pc = 0x216914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x96A660u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitDifficulty__Fv_0x96a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216918u; }
        else if (ctx->pc != 0x216918u) { ctx->pc = 0x216918u; }
    }
    if (ctx->pc != 0x216918u) { return; }
    ctx->pc = 0x216918u;
label_216918:
    // 0x216918: 0x3c010050
    ctx->pc = 0x216918u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_21691c:
    // 0x21691c: 0x8424e3e8
    ctx->pc = 0x21691cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960104)));
label_216920:
    // 0x216920: 0x87838bba
    ctx->pc = 0x216920u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937530)));
label_216924:
    // 0x216924: 0x240201f4
    ctx->pc = 0x216924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 500));
label_216928:
    // 0x216928: 0xaf828bfc
    ctx->pc = 0x216928u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937596), GPR_U32(ctx, 2));
label_21692c:
    // 0x21692c: 0xaf828bf8
    ctx->pc = 0x21692cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937592), GPR_U32(ctx, 2));
label_216930:
    // 0x216930: 0x83858ba8
    ctx->pc = 0x216930u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_216934:
    // 0x216934: 0x41080
    ctx->pc = 0x216934u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
label_216938:
    // 0x216938: 0x621021
    ctx->pc = 0x216938u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21693c:
    // 0x21693c: 0xa7828bba
    ctx->pc = 0x21693cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937530), (uint16_t)GPR_U32(ctx, 2));
label_216940:
    // 0x216940: 0x3c020051
    ctx->pc = 0x216940u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_216944:
    // 0x216944: 0x244434f0
    ctx->pc = 0x216944u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
label_216948:
    // 0x216948: 0xc086084
label_21694c:
    if (ctx->pc == 0x21694Cu) {
        ctx->pc = 0x21694Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x216950u;
        goto label_216950;
    }
    ctx->pc = 0x216948u;
    SET_GPR_U32(ctx, 31, 0x216950u);
    ctx->pc = 0x21694Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x218210u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryStageSE__13SoundMgrClassFii_0x218210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216950u; }
        else if (ctx->pc != 0x216950u) { ctx->pc = 0x216950u; }
    }
    if (ctx->pc != 0x216950u) { return; }
    ctx->pc = 0x216950u;
label_216950:
    // 0x216950: 0x83838bac
    ctx->pc = 0x216950u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937516)));
label_216954:
    // 0x216954: 0x106000f8
label_216958:
    if (ctx->pc == 0x216958u) {
        ctx->pc = 0x21695Cu;
        goto label_21695c;
    }
    ctx->pc = 0x216954u;
    {
        const bool branch_taken_0x216954 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x216954) {
            ctx->pc = 0x216D38u;
            goto label_216d38;
        }
    }
    ctx->pc = 0x21695Cu;
label_21695c:
    // 0x21695c: 0x3c010050
    ctx->pc = 0x21695cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_216960:
    // 0x216960: 0x8427e504
    ctx->pc = 0x216960u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
label_216964:
    // 0x216964: 0x24030009
    ctx->pc = 0x216964u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
label_216968:
    // 0x216968: 0x10e3002e
label_21696c:
    if (ctx->pc == 0x21696Cu) {
        ctx->pc = 0x21696Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937712));
        ctx->pc = 0x216970u;
        goto label_216970;
    }
    ctx->pc = 0x216968u;
    {
        const bool branch_taken_0x216968 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 3));
        ctx->pc = 0x21696Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937712));
        if (branch_taken_0x216968) {
            ctx->pc = 0x216A24u;
            goto label_216a24;
        }
    }
    ctx->pc = 0x216970u;
label_216970:
    // 0x216970: 0x2403000a
    ctx->pc = 0x216970u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_216974:
    // 0x216974: 0x83858ba8
    ctx->pc = 0x216974u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_216978:
    // 0x216978: 0x3c030029
    ctx->pc = 0x216978u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
label_21697c:
    // 0x21697c: 0x2464acc0
    ctx->pc = 0x21697cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294945984));
label_216980:
    // 0x216980: 0x2403000a
    ctx->pc = 0x216980u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
label_216984:
    // 0x216984: 0x52880
    ctx->pc = 0x216984u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
label_216988:
    // 0x216988: 0x852021
    ctx->pc = 0x216988u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_21698c:
    // 0x21698c: 0x8c900000
    ctx->pc = 0x21698cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_216990:
    // 0x216990: 0x14e30017
label_216994:
    if (ctx->pc == 0x216994u) {
        ctx->pc = 0x216994u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x216998u;
        goto label_216998;
    }
    ctx->pc = 0x216990u;
    {
        const bool branch_taken_0x216990 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 3));
        ctx->pc = 0x216994u;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x216990) {
            ctx->pc = 0x2169F0u;
            goto label_2169f0;
        }
    }
    ctx->pc = 0x216998u;
label_216998:
    // 0x216998: 0x8f848bcc
    ctx->pc = 0x216998u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
label_21699c:
    // 0x21699c: 0x24030001
    ctx->pc = 0x21699cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2169a0:
    // 0x2169a0: 0x14830013
label_2169a4:
    if (ctx->pc == 0x2169A4u) {
        ctx->pc = 0x2169A8u;
        goto label_2169a8;
    }
    ctx->pc = 0x2169A0u;
    {
        const bool branch_taken_0x2169a0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x2169a0) {
            ctx->pc = 0x2169F0u;
            goto label_2169f0;
        }
    }
    ctx->pc = 0x2169A8u;
label_2169a8:
    // 0x2169a8: 0x3c030050
    ctx->pc = 0x2169a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
label_2169ac:
    // 0x2169ac: 0x70002e28
    ctx->pc = 0x2169acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2169b0:
    // 0x2169b0: 0x2469fc80
    ctx->pc = 0x2169b0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 3), 4294966400));
label_2169b4:
    // 0x2169b4: 0x2404002e
    ctx->pc = 0x2169b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 46));
label_2169b8:
    // 0x2169b8: 0x24070002
    ctx->pc = 0x2169b8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
label_2169bc:
    // 0x2169bc: 0x25280002
    ctx->pc = 0x2169bcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 9), 2));
label_2169c0:
    // 0x2169c0: 0x81030000
    ctx->pc = 0x2169c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_2169c4:
    // 0x2169c4: 0x54640003
label_2169c8:
    if (ctx->pc == 0x2169C8u) {
        ctx->pc = 0x2169C8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x2169CCu;
        goto label_2169cc;
    }
    ctx->pc = 0x2169C4u;
    {
        const bool branch_taken_0x2169c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x2169c4) {
            ctx->pc = 0x2169C8u;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x2169D4u;
            goto label_2169d4;
        }
    }
    ctx->pc = 0x2169CCu;
label_2169cc:
    // 0x2169cc: 0x24060001
    ctx->pc = 0x2169ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_2169d0:
    // 0x2169d0: 0x24e70001
    ctx->pc = 0x2169d0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_2169d4:
    // 0x2169d4: 0x28e10004
    ctx->pc = 0x2169d4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 7), 4));
label_2169d8:
    // 0x2169d8: 0x1420fff9
label_2169dc:
    if (ctx->pc == 0x2169DCu) {
        ctx->pc = 0x2169DCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
        ctx->pc = 0x2169E0u;
        goto label_2169e0;
    }
    ctx->pc = 0x2169D8u;
    {
        const bool branch_taken_0x2169d8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x2169DCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x2169d8) {
            ctx->pc = 0x2169C0u;
            goto label_2169c0;
        }
    }
    ctx->pc = 0x2169E0u;
label_2169e0:
    // 0x2169e0: 0x24a50001
    ctx->pc = 0x2169e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_2169e4:
    // 0x2169e4: 0x28a30002
    ctx->pc = 0x2169e4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 2));
label_2169e8:
    // 0x2169e8: 0x1460fff3
label_2169ec:
    if (ctx->pc == 0x2169ECu) {
        ctx->pc = 0x2169ECu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
        ctx->pc = 0x2169F0u;
        goto label_2169f0;
    }
    ctx->pc = 0x2169E8u;
    {
        const bool branch_taken_0x2169e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2169ECu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
        if (branch_taken_0x2169e8) {
            ctx->pc = 0x2169B8u;
            goto label_2169b8;
        }
    }
    ctx->pc = 0x2169F0u;
label_2169f0:
    // 0x2169f0: 0x10c00026
label_2169f4:
    if (ctx->pc == 0x2169F4u) {
        ctx->pc = 0x2169F8u;
        goto label_2169f8;
    }
    ctx->pc = 0x2169F0u;
    {
        const bool branch_taken_0x2169f0 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x2169f0) {
            ctx->pc = 0x216A8Cu;
            goto label_216a8c;
        }
    }
    ctx->pc = 0x2169F8u;
label_2169f8:
    // 0x2169f8: 0x3c020051
    ctx->pc = 0x2169f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_2169fc:
    // 0x2169fc: 0x244437a0
    ctx->pc = 0x2169fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
label_216a00:
    // 0x216a00: 0xc0864f8
label_216a04:
    if (ctx->pc == 0x216A04u) {
        ctx->pc = 0x216A04u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 173));
        ctx->pc = 0x216A08u;
        goto label_216a08;
    }
    ctx->pc = 0x216A00u;
    SET_GPR_U32(ctx, 31, 0x216A08u);
    ctx->pc = 0x216A04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 173));
    ctx->pc = 0x2193E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankObj__13EntryDatClassFi_0x2193e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216A08u; }
        else if (ctx->pc != 0x216A08u) { ctx->pc = 0x216A08u; }
    }
    if (ctx->pc != 0x216A08u) { return; }
    ctx->pc = 0x216A08u;
label_216a08:
    // 0x216a08: 0x3c020051
    ctx->pc = 0x216a08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_216a0c:
    // 0x216a0c: 0x244437a0
    ctx->pc = 0x216a0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
label_216a10:
    // 0x216a10: 0xc086630
label_216a14:
    if (ctx->pc == 0x216A14u) {
        ctx->pc = 0x216A14u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x216A18u;
        goto label_216a18;
    }
    ctx->pc = 0x216A10u;
    SET_GPR_U32(ctx, 31, 0x216A18u);
    ctx->pc = 0x216A14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 33));
    ctx->pc = 0x2198C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskBank__13EntryDatClassFi_0x2198c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216A18u; }
        else if (ctx->pc != 0x216A18u) { ctx->pc = 0x216A18u; }
    }
    if (ctx->pc != 0x216A18u) { return; }
    ctx->pc = 0x216A18u;
label_216a18:
    // 0x216a18: 0x1000001c
label_216a1c:
    if (ctx->pc == 0x216A1Cu) {
        ctx->pc = 0x216A20u;
        goto label_216a20;
    }
    ctx->pc = 0x216A18u;
    {
        const bool branch_taken_0x216a18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x216a18) {
            ctx->pc = 0x216A8Cu;
            goto label_216a8c;
        }
    }
    ctx->pc = 0x216A20u;
label_216a20:
    // 0x216a20: 0x27848c70
    ctx->pc = 0x216a20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937712));
label_216a24:
    // 0x216a24: 0xc073128
label_216a28:
    if (ctx->pc == 0x216A28u) {
        ctx->pc = 0x216A2Cu;
        goto label_216a2c;
    }
    ctx->pc = 0x216A24u;
    SET_GPR_U32(ctx, 31, 0x216A2Cu);
    ctx->pc = 0x1CC4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryStage__15CamPathMgrClassFv_0x1cc4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216A2Cu; }
        else if (ctx->pc != 0x216A2Cu) { ctx->pc = 0x216A2Cu; }
    }
    if (ctx->pc != 0x216A2Cu) { return; }
    ctx->pc = 0x216A2Cu;
label_216a2c:
    // 0x216a2c: 0xc07f224
label_216a30:
    if (ctx->pc == 0x216A30u) {
        ctx->pc = 0x216A30u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
        ctx->pc = 0x216A34u;
        goto label_216a34;
    }
    ctx->pc = 0x216A2Cu;
    SET_GPR_U32(ctx, 31, 0x216A34u);
    ctx->pc = 0x216A30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC890u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryStage__11MotMgrClassFv_0x1fc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216A34u; }
        else if (ctx->pc != 0x216A34u) { ctx->pc = 0x216A34u; }
    }
    if (ctx->pc != 0x216A34u) { return; }
    ctx->pc = 0x216A34u;
label_216a34:
    // 0x216a34: 0x83858ba8
    ctx->pc = 0x216a34u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_216a38:
    // 0x216a38: 0x3c020051
    ctx->pc = 0x216a38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_216a3c:
    // 0x216a3c: 0x244434f0
    ctx->pc = 0x216a3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
label_216a40:
    // 0x216a40: 0xc086084
label_216a44:
    if (ctx->pc == 0x216A44u) {
        ctx->pc = 0x216A44u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x216A48u;
        goto label_216a48;
    }
    ctx->pc = 0x216A40u;
    SET_GPR_U32(ctx, 31, 0x216A48u);
    ctx->pc = 0x216A44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x218210u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryStageSE__13SoundMgrClassFii_0x218210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216A48u; }
        else if (ctx->pc != 0x216A48u) { ctx->pc = 0x216A48u; }
    }
    if (ctx->pc != 0x216A48u) { return; }
    ctx->pc = 0x216A48u;
label_216a48:
    // 0x216a48: 0x3c020050
    ctx->pc = 0x216a48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_216a4c:
    // 0x216a4c: 0xc2839ac
label_216a50:
    if (ctx->pc == 0x216A50u) {
        ctx->pc = 0x216A50u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 720));
        ctx->pc = 0x216A54u;
        goto label_216a54;
    }
    ctx->pc = 0x216A4Cu;
    SET_GPR_U32(ctx, 31, 0x216A54u);
    ctx->pc = 0x216A50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 720));
    ctx->pc = 0xA0E6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDemoNo__12DemoMgrClassFv_0xa0e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216A54u; }
        else if (ctx->pc != 0x216A54u) { ctx->pc = 0x216A54u; }
    }
    if (ctx->pc != 0x216A54u) { return; }
    ctx->pc = 0x216A54u;
label_216a54:
    // 0x216a54: 0x24030002
    ctx->pc = 0x216a54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_216a58:
    // 0x216a58: 0x1043000a
label_216a5c:
    if (ctx->pc == 0x216A5Cu) {
        ctx->pc = 0x216A60u;
        goto label_216a60;
    }
    ctx->pc = 0x216A58u;
    {
        const bool branch_taken_0x216a58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x216a58) {
            ctx->pc = 0x216A84u;
            goto label_216a84;
        }
    }
    ctx->pc = 0x216A60u;
label_216a60:
    // 0x216a60: 0x24030001
    ctx->pc = 0x216a60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_216a64:
    // 0x216a64: 0x10430004
label_216a68:
    if (ctx->pc == 0x216A68u) {
        ctx->pc = 0x216A6Cu;
        goto label_216a6c;
    }
    ctx->pc = 0x216A64u;
    {
        const bool branch_taken_0x216a64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x216a64) {
            ctx->pc = 0x216A78u;
            goto label_216a78;
        }
    }
    ctx->pc = 0x216A6Cu;
label_216a6c:
    // 0x216a6c: 0x3c030029
    ctx->pc = 0x216a6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
label_216a70:
    // 0x216a70: 0x10000006
label_216a74:
    if (ctx->pc == 0x216A74u) {
        ctx->pc = 0x216A74u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294946048));
        ctx->pc = 0x216A78u;
        goto label_216a78;
    }
    ctx->pc = 0x216A70u;
    {
        const bool branch_taken_0x216a70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216A74u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294946048));
        if (branch_taken_0x216a70) {
            ctx->pc = 0x216A8Cu;
            goto label_216a8c;
        }
    }
    ctx->pc = 0x216A78u;
label_216a78:
    // 0x216a78: 0x3c030029
    ctx->pc = 0x216a78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
label_216a7c:
    // 0x216a7c: 0x10000003
label_216a80:
    if (ctx->pc == 0x216A80u) {
        ctx->pc = 0x216A80u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294946096));
        ctx->pc = 0x216A84u;
        goto label_216a84;
    }
    ctx->pc = 0x216A7Cu;
    {
        const bool branch_taken_0x216a7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216A80u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294946096));
        if (branch_taken_0x216a7c) {
            ctx->pc = 0x216A8Cu;
            goto label_216a8c;
        }
    }
    ctx->pc = 0x216A84u;
label_216a84:
    // 0x216a84: 0x3c030029
    ctx->pc = 0x216a84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
label_216a88:
    // 0x216a88: 0x2470ad70
    ctx->pc = 0x216a88u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294946160));
label_216a8c:
    // 0x216a8c: 0x120000aa
label_216a90:
    if (ctx->pc == 0x216A90u) {
        ctx->pc = 0x216A94u;
        goto label_216a94;
    }
    ctx->pc = 0x216A8Cu;
    {
        const bool branch_taken_0x216a8c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x216a8c) {
            ctx->pc = 0x216D38u;
            goto label_216d38;
        }
    }
    ctx->pc = 0x216A94u;
label_216a94:
    // 0x216a94: 0x86110000
    ctx->pc = 0x216a94u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_216a98:
    // 0x216a98: 0x24120001
    ctx->pc = 0x216a98u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_216a9c:
    // 0x216a9c: 0x26100002
    ctx->pc = 0x216a9cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
label_216aa0:
    // 0x216aa0: 0x86050000
    ctx->pc = 0x216aa0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_216aa4:
    // 0x216aa4: 0x2403ffff
    ctx->pc = 0x216aa4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_216aa8:
    // 0x216aa8: 0x14a30005
label_216aac:
    if (ctx->pc == 0x216AACu) {
        ctx->pc = 0x216AACu;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x216AB0u;
        goto label_216ab0;
    }
    ctx->pc = 0x216AA8u;
    {
        const bool branch_taken_0x216aa8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x216AACu;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
        if (branch_taken_0x216aa8) {
            ctx->pc = 0x216AC0u;
            goto label_216ac0;
        }
    }
    ctx->pc = 0x216AB0u;
label_216ab0:
    // 0x216ab0: 0x86110002
    ctx->pc = 0x216ab0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_216ab4:
    // 0x216ab4: 0x1000009e
label_216ab8:
    if (ctx->pc == 0x216AB8u) {
        ctx->pc = 0x216AB8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x216ABCu;
        goto label_216abc;
    }
    ctx->pc = 0x216AB4u;
    {
        const bool branch_taken_0x216ab4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216AB8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
        if (branch_taken_0x216ab4) {
            ctx->pc = 0x216D30u;
            goto label_216d30;
        }
    }
    ctx->pc = 0x216ABCu;
label_216abc:
    // 0x216abc: 0x111c3c
    ctx->pc = 0x216abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
label_216ac0:
    // 0x216ac0: 0x31c3f
    ctx->pc = 0x216ac0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_216ac4:
    // 0x216ac4: 0x2c61000b
    ctx->pc = 0x216ac4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 11));
label_216ac8:
    // 0x216ac8: 0x10200099
label_216acc:
    if (ctx->pc == 0x216ACCu) {
        ctx->pc = 0x216AD0u;
        goto label_216ad0;
    }
    ctx->pc = 0x216AC8u;
    {
        const bool branch_taken_0x216ac8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x216ac8) {
            ctx->pc = 0x216D30u;
            goto label_216d30;
        }
    }
    ctx->pc = 0x216AD0u;
label_216ad0:
    // 0x216ad0: 0x3c04002c
    ctx->pc = 0x216ad0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_216ad4:
    // 0x216ad4: 0x31880
    ctx->pc = 0x216ad4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_216ad8:
    // 0x216ad8: 0x24840700
    ctx->pc = 0x216ad8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1792));
label_216adc:
    // 0x216adc: 0x641821
    ctx->pc = 0x216adcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_216ae0:
    // 0x216ae0: 0x8c630000
    ctx->pc = 0x216ae0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_216ae4:
    // 0x216ae4: 0x600008
label_216ae8:
    if (ctx->pc == 0x216AE8u) {
        ctx->pc = 0x216AECu;
        goto label_216aec;
    }
    ctx->pc = 0x216AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216900u: goto label_216900;
            case 0x216904u: goto label_216904;
            case 0x216908u: goto label_216908;
            case 0x21690Cu: goto label_21690c;
            case 0x216910u: goto label_216910;
            case 0x216914u: goto label_216914;
            case 0x216918u: goto label_216918;
            case 0x21691Cu: goto label_21691c;
            case 0x216920u: goto label_216920;
            case 0x216924u: goto label_216924;
            case 0x216928u: goto label_216928;
            case 0x21692Cu: goto label_21692c;
            case 0x216930u: goto label_216930;
            case 0x216934u: goto label_216934;
            case 0x216938u: goto label_216938;
            case 0x21693Cu: goto label_21693c;
            case 0x216940u: goto label_216940;
            case 0x216944u: goto label_216944;
            case 0x216948u: goto label_216948;
            case 0x21694Cu: goto label_21694c;
            case 0x216950u: goto label_216950;
            case 0x216954u: goto label_216954;
            case 0x216958u: goto label_216958;
            case 0x21695Cu: goto label_21695c;
            case 0x216960u: goto label_216960;
            case 0x216964u: goto label_216964;
            case 0x216968u: goto label_216968;
            case 0x21696Cu: goto label_21696c;
            case 0x216970u: goto label_216970;
            case 0x216974u: goto label_216974;
            case 0x216978u: goto label_216978;
            case 0x21697Cu: goto label_21697c;
            case 0x216980u: goto label_216980;
            case 0x216984u: goto label_216984;
            case 0x216988u: goto label_216988;
            case 0x21698Cu: goto label_21698c;
            case 0x216990u: goto label_216990;
            case 0x216994u: goto label_216994;
            case 0x216998u: goto label_216998;
            case 0x21699Cu: goto label_21699c;
            case 0x2169A0u: goto label_2169a0;
            case 0x2169A4u: goto label_2169a4;
            case 0x2169A8u: goto label_2169a8;
            case 0x2169ACu: goto label_2169ac;
            case 0x2169B0u: goto label_2169b0;
            case 0x2169B4u: goto label_2169b4;
            case 0x2169B8u: goto label_2169b8;
            case 0x2169BCu: goto label_2169bc;
            case 0x2169C0u: goto label_2169c0;
            case 0x2169C4u: goto label_2169c4;
            case 0x2169C8u: goto label_2169c8;
            case 0x2169CCu: goto label_2169cc;
            case 0x2169D0u: goto label_2169d0;
            case 0x2169D4u: goto label_2169d4;
            case 0x2169D8u: goto label_2169d8;
            case 0x2169DCu: goto label_2169dc;
            case 0x2169E0u: goto label_2169e0;
            case 0x2169E4u: goto label_2169e4;
            case 0x2169E8u: goto label_2169e8;
            case 0x2169ECu: goto label_2169ec;
            case 0x2169F0u: goto label_2169f0;
            case 0x2169F4u: goto label_2169f4;
            case 0x2169F8u: goto label_2169f8;
            case 0x2169FCu: goto label_2169fc;
            case 0x216A00u: goto label_216a00;
            case 0x216A04u: goto label_216a04;
            case 0x216A08u: goto label_216a08;
            case 0x216A0Cu: goto label_216a0c;
            case 0x216A10u: goto label_216a10;
            case 0x216A14u: goto label_216a14;
            case 0x216A18u: goto label_216a18;
            case 0x216A1Cu: goto label_216a1c;
            case 0x216A20u: goto label_216a20;
            case 0x216A24u: goto label_216a24;
            case 0x216A28u: goto label_216a28;
            case 0x216A2Cu: goto label_216a2c;
            case 0x216A30u: goto label_216a30;
            case 0x216A34u: goto label_216a34;
            case 0x216A38u: goto label_216a38;
            case 0x216A3Cu: goto label_216a3c;
            case 0x216A40u: goto label_216a40;
            case 0x216A44u: goto label_216a44;
            case 0x216A48u: goto label_216a48;
            case 0x216A4Cu: goto label_216a4c;
            case 0x216A50u: goto label_216a50;
            case 0x216A54u: goto label_216a54;
            case 0x216A58u: goto label_216a58;
            case 0x216A5Cu: goto label_216a5c;
            case 0x216A60u: goto label_216a60;
            case 0x216A64u: goto label_216a64;
            case 0x216A68u: goto label_216a68;
            case 0x216A6Cu: goto label_216a6c;
            case 0x216A70u: goto label_216a70;
            case 0x216A74u: goto label_216a74;
            case 0x216A78u: goto label_216a78;
            case 0x216A7Cu: goto label_216a7c;
            case 0x216A80u: goto label_216a80;
            case 0x216A84u: goto label_216a84;
            case 0x216A88u: goto label_216a88;
            case 0x216A8Cu: goto label_216a8c;
            case 0x216A90u: goto label_216a90;
            case 0x216A94u: goto label_216a94;
            case 0x216A98u: goto label_216a98;
            case 0x216A9Cu: goto label_216a9c;
            case 0x216AA0u: goto label_216aa0;
            case 0x216AA4u: goto label_216aa4;
            case 0x216AA8u: goto label_216aa8;
            case 0x216AACu: goto label_216aac;
            case 0x216AB0u: goto label_216ab0;
            case 0x216AB4u: goto label_216ab4;
            case 0x216AB8u: goto label_216ab8;
            case 0x216ABCu: goto label_216abc;
            case 0x216AC0u: goto label_216ac0;
            case 0x216AC4u: goto label_216ac4;
            case 0x216AC8u: goto label_216ac8;
            case 0x216ACCu: goto label_216acc;
            case 0x216AD0u: goto label_216ad0;
            case 0x216AD4u: goto label_216ad4;
            case 0x216AD8u: goto label_216ad8;
            case 0x216ADCu: goto label_216adc;
            case 0x216AE0u: goto label_216ae0;
            case 0x216AE4u: goto label_216ae4;
            case 0x216AE8u: goto label_216ae8;
            case 0x216AECu: goto label_216aec;
            case 0x216AF0u: goto label_216af0;
            case 0x216AF4u: goto label_216af4;
            case 0x216AF8u: goto label_216af8;
            case 0x216AFCu: goto label_216afc;
            case 0x216B00u: goto label_216b00;
            case 0x216B04u: goto label_216b04;
            case 0x216B08u: goto label_216b08;
            case 0x216B0Cu: goto label_216b0c;
            case 0x216B10u: goto label_216b10;
            case 0x216B14u: goto label_216b14;
            case 0x216B18u: goto label_216b18;
            case 0x216B1Cu: goto label_216b1c;
            case 0x216B20u: goto label_216b20;
            case 0x216B24u: goto label_216b24;
            case 0x216B28u: goto label_216b28;
            case 0x216B2Cu: goto label_216b2c;
            case 0x216B30u: goto label_216b30;
            case 0x216B34u: goto label_216b34;
            case 0x216B38u: goto label_216b38;
            case 0x216B3Cu: goto label_216b3c;
            case 0x216B40u: goto label_216b40;
            case 0x216B44u: goto label_216b44;
            case 0x216B48u: goto label_216b48;
            case 0x216B4Cu: goto label_216b4c;
            case 0x216B50u: goto label_216b50;
            case 0x216B54u: goto label_216b54;
            case 0x216B58u: goto label_216b58;
            case 0x216B5Cu: goto label_216b5c;
            case 0x216B60u: goto label_216b60;
            case 0x216B64u: goto label_216b64;
            case 0x216B68u: goto label_216b68;
            case 0x216B6Cu: goto label_216b6c;
            case 0x216B70u: goto label_216b70;
            case 0x216B74u: goto label_216b74;
            case 0x216B78u: goto label_216b78;
            case 0x216B7Cu: goto label_216b7c;
            case 0x216B80u: goto label_216b80;
            case 0x216B84u: goto label_216b84;
            case 0x216B88u: goto label_216b88;
            case 0x216B8Cu: goto label_216b8c;
            case 0x216B90u: goto label_216b90;
            case 0x216B94u: goto label_216b94;
            case 0x216B98u: goto label_216b98;
            case 0x216B9Cu: goto label_216b9c;
            case 0x216BA0u: goto label_216ba0;
            case 0x216BA4u: goto label_216ba4;
            case 0x216BA8u: goto label_216ba8;
            case 0x216BACu: goto label_216bac;
            case 0x216BB0u: goto label_216bb0;
            case 0x216BB4u: goto label_216bb4;
            case 0x216BB8u: goto label_216bb8;
            case 0x216BBCu: goto label_216bbc;
            case 0x216BC0u: goto label_216bc0;
            case 0x216BC4u: goto label_216bc4;
            case 0x216BC8u: goto label_216bc8;
            case 0x216BCCu: goto label_216bcc;
            case 0x216BD0u: goto label_216bd0;
            case 0x216BD4u: goto label_216bd4;
            case 0x216BD8u: goto label_216bd8;
            case 0x216BDCu: goto label_216bdc;
            case 0x216BE0u: goto label_216be0;
            case 0x216BE4u: goto label_216be4;
            case 0x216BE8u: goto label_216be8;
            case 0x216BECu: goto label_216bec;
            case 0x216BF0u: goto label_216bf0;
            case 0x216BF4u: goto label_216bf4;
            case 0x216BF8u: goto label_216bf8;
            case 0x216BFCu: goto label_216bfc;
            case 0x216C00u: goto label_216c00;
            case 0x216C04u: goto label_216c04;
            case 0x216C08u: goto label_216c08;
            case 0x216C0Cu: goto label_216c0c;
            case 0x216C10u: goto label_216c10;
            case 0x216C14u: goto label_216c14;
            case 0x216C18u: goto label_216c18;
            case 0x216C1Cu: goto label_216c1c;
            case 0x216C20u: goto label_216c20;
            case 0x216C24u: goto label_216c24;
            case 0x216C28u: goto label_216c28;
            case 0x216C2Cu: goto label_216c2c;
            case 0x216C30u: goto label_216c30;
            case 0x216C34u: goto label_216c34;
            case 0x216C38u: goto label_216c38;
            case 0x216C3Cu: goto label_216c3c;
            case 0x216C40u: goto label_216c40;
            case 0x216C44u: goto label_216c44;
            case 0x216C48u: goto label_216c48;
            case 0x216C4Cu: goto label_216c4c;
            case 0x216C50u: goto label_216c50;
            case 0x216C54u: goto label_216c54;
            case 0x216C58u: goto label_216c58;
            case 0x216C5Cu: goto label_216c5c;
            case 0x216C60u: goto label_216c60;
            case 0x216C64u: goto label_216c64;
            case 0x216C68u: goto label_216c68;
            case 0x216C6Cu: goto label_216c6c;
            case 0x216C70u: goto label_216c70;
            case 0x216C74u: goto label_216c74;
            case 0x216C78u: goto label_216c78;
            case 0x216C7Cu: goto label_216c7c;
            case 0x216C80u: goto label_216c80;
            case 0x216C84u: goto label_216c84;
            case 0x216C88u: goto label_216c88;
            case 0x216C8Cu: goto label_216c8c;
            case 0x216C90u: goto label_216c90;
            case 0x216C94u: goto label_216c94;
            case 0x216C98u: goto label_216c98;
            case 0x216C9Cu: goto label_216c9c;
            case 0x216CA0u: goto label_216ca0;
            case 0x216CA4u: goto label_216ca4;
            case 0x216CA8u: goto label_216ca8;
            case 0x216CACu: goto label_216cac;
            case 0x216CB0u: goto label_216cb0;
            case 0x216CB4u: goto label_216cb4;
            case 0x216CB8u: goto label_216cb8;
            case 0x216CBCu: goto label_216cbc;
            case 0x216CC0u: goto label_216cc0;
            case 0x216CC4u: goto label_216cc4;
            case 0x216CC8u: goto label_216cc8;
            case 0x216CCCu: goto label_216ccc;
            case 0x216CD0u: goto label_216cd0;
            case 0x216CD4u: goto label_216cd4;
            case 0x216CD8u: goto label_216cd8;
            case 0x216CDCu: goto label_216cdc;
            case 0x216CE0u: goto label_216ce0;
            case 0x216CE4u: goto label_216ce4;
            case 0x216CE8u: goto label_216ce8;
            case 0x216CECu: goto label_216cec;
            case 0x216CF0u: goto label_216cf0;
            case 0x216CF4u: goto label_216cf4;
            case 0x216CF8u: goto label_216cf8;
            case 0x216CFCu: goto label_216cfc;
            case 0x216D00u: goto label_216d00;
            case 0x216D04u: goto label_216d04;
            case 0x216D08u: goto label_216d08;
            case 0x216D0Cu: goto label_216d0c;
            case 0x216D10u: goto label_216d10;
            case 0x216D14u: goto label_216d14;
            case 0x216D18u: goto label_216d18;
            case 0x216D1Cu: goto label_216d1c;
            case 0x216D20u: goto label_216d20;
            case 0x216D24u: goto label_216d24;
            case 0x216D28u: goto label_216d28;
            case 0x216D2Cu: goto label_216d2c;
            case 0x216D30u: goto label_216d30;
            case 0x216D34u: goto label_216d34;
            case 0x216D38u: goto label_216d38;
            case 0x216D3Cu: goto label_216d3c;
            case 0x216D40u: goto label_216d40;
            case 0x216D44u: goto label_216d44;
            case 0x216D48u: goto label_216d48;
            case 0x216D4Cu: goto label_216d4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x216AECu;
label_216aec:
    // 0x216aec: 0x0
    ctx->pc = 0x216aecu;
    // NOP
label_216af0:
    // 0x216af0: 0x86050000
    ctx->pc = 0x216af0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_216af4:
    // 0x216af4: 0x3c020051
    ctx->pc = 0x216af4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_216af8:
    // 0x216af8: 0x244437a0
    ctx->pc = 0x216af8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
label_216afc:
    // 0x216afc: 0xc0864f8
label_216b00:
    if (ctx->pc == 0x216B00u) {
        ctx->pc = 0x216B00u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x216B04u;
        goto label_216b04;
    }
    ctx->pc = 0x216AFCu;
    SET_GPR_U32(ctx, 31, 0x216B04u);
    ctx->pc = 0x216B00u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x2193E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankObj__13EntryDatClassFi_0x2193e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216B04u; }
        else if (ctx->pc != 0x216B04u) { ctx->pc = 0x216B04u; }
    }
    if (ctx->pc != 0x216B04u) { return; }
    ctx->pc = 0x216B04u;
label_216b04:
    // 0x216b04: 0x1000008a
label_216b08:
    if (ctx->pc == 0x216B08u) {
        ctx->pc = 0x216B0Cu;
        goto label_216b0c;
    }
    ctx->pc = 0x216B04u;
    {
        const bool branch_taken_0x216b04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x216b04) {
            ctx->pc = 0x216D30u;
            goto label_216d30;
        }
    }
    ctx->pc = 0x216B0Cu;
label_216b0c:
    // 0x216b0c: 0x24030136
    ctx->pc = 0x216b0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 310));
label_216b10:
    // 0x216b10: 0x10a3003b
label_216b14:
    if (ctx->pc == 0x216B14u) {
        ctx->pc = 0x216B18u;
        goto label_216b18;
    }
    ctx->pc = 0x216B10u;
    {
        const bool branch_taken_0x216b10 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x216b10) {
            ctx->pc = 0x216C00u;
            goto label_216c00;
        }
    }
    ctx->pc = 0x216B18u;
label_216b18:
    // 0x216b18: 0x240301cb
    ctx->pc = 0x216b18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 459));
label_216b1c:
    // 0x216b1c: 0x10a3002c
label_216b20:
    if (ctx->pc == 0x216B20u) {
        ctx->pc = 0x216B24u;
        goto label_216b24;
    }
    ctx->pc = 0x216B1Cu;
    {
        const bool branch_taken_0x216b1c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x216b1c) {
            ctx->pc = 0x216BD0u;
            goto label_216bd0;
        }
    }
    ctx->pc = 0x216B24u;
label_216b24:
    // 0x216b24: 0x24030175
    ctx->pc = 0x216b24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 373));
label_216b28:
    // 0x216b28: 0x10a30021
label_216b2c:
    if (ctx->pc == 0x216B2Cu) {
        ctx->pc = 0x216B30u;
        goto label_216b30;
    }
    ctx->pc = 0x216B28u;
    {
        const bool branch_taken_0x216b28 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x216b28) {
            ctx->pc = 0x216BB0u;
            goto label_216bb0;
        }
    }
    ctx->pc = 0x216B30u;
label_216b30:
    // 0x216b30: 0x2403018b
    ctx->pc = 0x216b30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 395));
label_216b34:
    // 0x216b34: 0x10a30003
label_216b38:
    if (ctx->pc == 0x216B38u) {
        ctx->pc = 0x216B3Cu;
        goto label_216b3c;
    }
    ctx->pc = 0x216B34u;
    {
        const bool branch_taken_0x216b34 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x216b34) {
            ctx->pc = 0x216B44u;
            goto label_216b44;
        }
    }
    ctx->pc = 0x216B3Cu;
label_216b3c:
    // 0x216b3c: 0x1000003c
label_216b40:
    if (ctx->pc == 0x216B40u) {
        ctx->pc = 0x216B44u;
        goto label_216b44;
    }
    ctx->pc = 0x216B3Cu;
    {
        const bool branch_taken_0x216b3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x216b3c) {
            ctx->pc = 0x216C30u;
            goto label_216c30;
        }
    }
    ctx->pc = 0x216B44u;
label_216b44:
    // 0x216b44: 0x3c010050
    ctx->pc = 0x216b44u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_216b48:
    // 0x216b48: 0x8025fec5
    ctx->pc = 0x216b48u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
label_216b4c:
    // 0x216b4c: 0x3c020029
    ctx->pc = 0x216b4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
label_216b50:
    // 0x216b50: 0x2443a9b0
    ctx->pc = 0x216b50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294945200));
label_216b54:
    // 0x216b54: 0x3c020051
    ctx->pc = 0x216b54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_216b58:
    // 0x216b58: 0x244437a0
    ctx->pc = 0x216b58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
label_216b5c:
    // 0x216b5c: 0x510c0
    ctx->pc = 0x216b5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
label_216b60:
    // 0x216b60: 0x621021
    ctx->pc = 0x216b60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_216b64:
    // 0x216b64: 0xc086578
label_216b68:
    if (ctx->pc == 0x216B68u) {
        ctx->pc = 0x216B68u;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x216B6Cu;
        goto label_216b6c;
    }
    ctx->pc = 0x216B64u;
    SET_GPR_U32(ctx, 31, 0x216B6Cu);
    ctx->pc = 0x216B68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2195E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankSpr__13EntryDatClassFi_0x2195e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216B6Cu; }
        else if (ctx->pc != 0x216B6Cu) { ctx->pc = 0x216B6Cu; }
    }
    if (ctx->pc != 0x216B6Cu) { return; }
    ctx->pc = 0x216B6Cu;
label_216b6c:
    // 0x216b6c: 0x3c010050
    ctx->pc = 0x216b6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_216b70:
    // 0x216b70: 0x8024fec5
    ctx->pc = 0x216b70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
label_216b74:
    // 0x216b74: 0x3c030029
    ctx->pc = 0x216b74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
label_216b78:
    // 0x216b78: 0x2463a9e8
    ctx->pc = 0x216b78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294945256));
label_216b7c:
    // 0x216b7c: 0x42040
    ctx->pc = 0x216b7cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
label_216b80:
    // 0x216b80: 0x641821
    ctx->pc = 0x216b80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_216b84:
    // 0x216b84: 0x84630000
    ctx->pc = 0x216b84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_216b88:
    // 0x216b88: 0x10600007
label_216b8c:
    if (ctx->pc == 0x216B8Cu) {
        ctx->pc = 0x216B90u;
        goto label_216b90;
    }
    ctx->pc = 0x216B88u;
    {
        const bool branch_taken_0x216b88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x216b88) {
            ctx->pc = 0x216BA8u;
            goto label_216ba8;
        }
    }
    ctx->pc = 0x216B90u;
label_216b90:
    // 0x216b90: 0x32c3c
    ctx->pc = 0x216b90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_216b94:
    // 0x216b94: 0x3c020051
    ctx->pc = 0x216b94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_216b98:
    // 0x216b98: 0x52c3f
    ctx->pc = 0x216b98u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_216b9c:
    // 0x216b9c: 0xc0864f8
label_216ba0:
    if (ctx->pc == 0x216BA0u) {
        ctx->pc = 0x216BA0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
        ctx->pc = 0x216BA4u;
        goto label_216ba4;
    }
    ctx->pc = 0x216B9Cu;
    SET_GPR_U32(ctx, 31, 0x216BA4u);
    ctx->pc = 0x216BA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x2193E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankObj__13EntryDatClassFi_0x2193e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216BA4u; }
        else if (ctx->pc != 0x216BA4u) { ctx->pc = 0x216BA4u; }
    }
    if (ctx->pc != 0x216BA4u) { return; }
    ctx->pc = 0x216BA4u;
label_216ba4:
    // 0x216ba4: 0x0
    ctx->pc = 0x216ba4u;
    // NOP
label_216ba8:
    // 0x216ba8: 0x10000021
label_216bac:
    if (ctx->pc == 0x216BACu) {
        ctx->pc = 0x216BACu;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x216BB0u;
        goto label_216bb0;
    }
    ctx->pc = 0x216BA8u;
    {
        const bool branch_taken_0x216ba8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216BACu;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x216ba8) {
            ctx->pc = 0x216C30u;
            goto label_216c30;
        }
    }
    ctx->pc = 0x216BB0u;
label_216bb0:
    // 0x216bb0: 0x3c010050
    ctx->pc = 0x216bb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_216bb4:
    // 0x216bb4: 0x8024fec5
    ctx->pc = 0x216bb4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
label_216bb8:
    // 0x216bb8: 0x3c030029
    ctx->pc = 0x216bb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)41 << 16));
label_216bbc:
    // 0x216bbc: 0x2463a9b0
    ctx->pc = 0x216bbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294945200));
label_216bc0:
    // 0x216bc0: 0x420c0
    ctx->pc = 0x216bc0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
label_216bc4:
    // 0x216bc4: 0x641821
    ctx->pc = 0x216bc4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_216bc8:
    // 0x216bc8: 0x10000019
label_216bcc:
    if (ctx->pc == 0x216BCCu) {
        ctx->pc = 0x216BCCu;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->pc = 0x216BD0u;
        goto label_216bd0;
    }
    ctx->pc = 0x216BC8u;
    {
        const bool branch_taken_0x216bc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216BCCu;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        if (branch_taken_0x216bc8) {
            ctx->pc = 0x216C30u;
            goto label_216c30;
        }
    }
    ctx->pc = 0x216BD0u;
label_216bd0:
    // 0x216bd0: 0x3c010050
    ctx->pc = 0x216bd0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_216bd4:
    // 0x216bd4: 0x8025fec5
    ctx->pc = 0x216bd4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
label_216bd8:
    // 0x216bd8: 0x3c020029
    ctx->pc = 0x216bd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
label_216bdc:
    // 0x216bdc: 0x2443a9b0
    ctx->pc = 0x216bdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294945200));
label_216be0:
    // 0x216be0: 0x3c020051
    ctx->pc = 0x216be0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_216be4:
    // 0x216be4: 0x244437a0
    ctx->pc = 0x216be4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
label_216be8:
    // 0x216be8: 0x510c0
    ctx->pc = 0x216be8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
label_216bec:
    // 0x216bec: 0x621021
    ctx->pc = 0x216becu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_216bf0:
    // 0x216bf0: 0xc086578
label_216bf4:
    if (ctx->pc == 0x216BF4u) {
        ctx->pc = 0x216BF4u;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x216BF8u;
        goto label_216bf8;
    }
    ctx->pc = 0x216BF0u;
    SET_GPR_U32(ctx, 31, 0x216BF8u);
    ctx->pc = 0x216BF4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x2195E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankSpr__13EntryDatClassFi_0x2195e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216BF8u; }
        else if (ctx->pc != 0x216BF8u) { ctx->pc = 0x216BF8u; }
    }
    if (ctx->pc != 0x216BF8u) { return; }
    ctx->pc = 0x216BF8u;
label_216bf8:
    // 0x216bf8: 0x1000000d
label_216bfc:
    if (ctx->pc == 0x216BFCu) {
        ctx->pc = 0x216BFCu;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x216C00u;
        goto label_216c00;
    }
    ctx->pc = 0x216BF8u;
    {
        const bool branch_taken_0x216bf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216BFCu;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x216bf8) {
            ctx->pc = 0x216C30u;
            goto label_216c30;
        }
    }
    ctx->pc = 0x216C00u;
label_216c00:
    // 0x216c00: 0x3c010050
    ctx->pc = 0x216c00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_216c04:
    // 0x216c04: 0x8025fec5
    ctx->pc = 0x216c04u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
label_216c08:
    // 0x216c08: 0x3c020029
    ctx->pc = 0x216c08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
label_216c0c:
    // 0x216c0c: 0x2443a9b0
    ctx->pc = 0x216c0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294945200));
label_216c10:
    // 0x216c10: 0x3c020051
    ctx->pc = 0x216c10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_216c14:
    // 0x216c14: 0x244437a0
    ctx->pc = 0x216c14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
label_216c18:
    // 0x216c18: 0x510c0
    ctx->pc = 0x216c18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
label_216c1c:
    // 0x216c1c: 0x621021
    ctx->pc = 0x216c1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_216c20:
    // 0x216c20: 0xc086578
label_216c24:
    if (ctx->pc == 0x216C24u) {
        ctx->pc = 0x216C24u;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
        ctx->pc = 0x216C28u;
        goto label_216c28;
    }
    ctx->pc = 0x216C20u;
    SET_GPR_U32(ctx, 31, 0x216C28u);
    ctx->pc = 0x216C24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    ctx->pc = 0x2195E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankSpr__13EntryDatClassFi_0x2195e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216C28u; }
        else if (ctx->pc != 0x216C28u) { ctx->pc = 0x216C28u; }
    }
    if (ctx->pc != 0x216C28u) { return; }
    ctx->pc = 0x216C28u;
label_216c28:
    // 0x216c28: 0x10000001
label_216c2c:
    if (ctx->pc == 0x216C2Cu) {
        ctx->pc = 0x216C2Cu;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x216C30u;
        goto label_216c30;
    }
    ctx->pc = 0x216C28u;
    {
        const bool branch_taken_0x216c28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216C2Cu;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x216c28) {
            ctx->pc = 0x216C30u;
            goto label_216c30;
        }
    }
    ctx->pc = 0x216C30u;
label_216c30:
    // 0x216c30: 0x4a20006
label_216c34:
    if (ctx->pc == 0x216C34u) {
        ctx->pc = 0x216C34u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x216C38u;
        goto label_216c38;
    }
    ctx->pc = 0x216C30u;
    {
        const bool branch_taken_0x216c30 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x216c30) {
            ctx->pc = 0x216C34u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
            ctx->pc = 0x216C4Cu;
            goto label_216c4c;
        }
    }
    ctx->pc = 0x216C38u;
label_216c38:
    // 0x216c38: 0x3c020051
    ctx->pc = 0x216c38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_216c3c:
    // 0x216c3c: 0xc086578
label_216c40:
    if (ctx->pc == 0x216C40u) {
        ctx->pc = 0x216C40u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
        ctx->pc = 0x216C44u;
        goto label_216c44;
    }
    ctx->pc = 0x216C3Cu;
    SET_GPR_U32(ctx, 31, 0x216C44u);
    ctx->pc = 0x216C40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x2195E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankSpr__13EntryDatClassFi_0x2195e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216C44u; }
        else if (ctx->pc != 0x216C44u) { ctx->pc = 0x216C44u; }
    }
    if (ctx->pc != 0x216C44u) { return; }
    ctx->pc = 0x216C44u;
label_216c44:
    // 0x216c44: 0x0
    ctx->pc = 0x216c44u;
    // NOP
label_216c48:
    // 0x216c48: 0x26100002
    ctx->pc = 0x216c48u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
label_216c4c:
    // 0x216c4c: 0x10000038
label_216c50:
    if (ctx->pc == 0x216C50u) {
        ctx->pc = 0x216C54u;
        goto label_216c54;
    }
    ctx->pc = 0x216C4Cu;
    {
        const bool branch_taken_0x216c4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x216c4c) {
            ctx->pc = 0x216D30u;
            goto label_216d30;
        }
    }
    ctx->pc = 0x216C54u;
label_216c54:
    // 0x216c54: 0x86050000
    ctx->pc = 0x216c54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_216c58:
    // 0x216c58: 0x3c020051
    ctx->pc = 0x216c58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_216c5c:
    // 0x216c5c: 0x244437a0
    ctx->pc = 0x216c5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
label_216c60:
    // 0x216c60: 0xc086558
label_216c64:
    if (ctx->pc == 0x216C64u) {
        ctx->pc = 0x216C64u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x216C68u;
        goto label_216c68;
    }
    ctx->pc = 0x216C60u;
    SET_GPR_U32(ctx, 31, 0x216C68u);
    ctx->pc = 0x216C64u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x219560u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankMot__13EntryDatClassFi_0x219560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216C68u; }
        else if (ctx->pc != 0x216C68u) { ctx->pc = 0x216C68u; }
    }
    if (ctx->pc != 0x216C68u) { return; }
    ctx->pc = 0x216C68u;
label_216c68:
    // 0x216c68: 0x10000031
label_216c6c:
    if (ctx->pc == 0x216C6Cu) {
        ctx->pc = 0x216C70u;
        goto label_216c70;
    }
    ctx->pc = 0x216C68u;
    {
        const bool branch_taken_0x216c68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x216c68) {
            ctx->pc = 0x216D30u;
            goto label_216d30;
        }
    }
    ctx->pc = 0x216C70u;
label_216c70:
    // 0x216c70: 0x86050000
    ctx->pc = 0x216c70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_216c74:
    // 0x216c74: 0x3c020051
    ctx->pc = 0x216c74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_216c78:
    // 0x216c78: 0x244437a0
    ctx->pc = 0x216c78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
label_216c7c:
    // 0x216c7c: 0xc0865b0
label_216c80:
    if (ctx->pc == 0x216C80u) {
        ctx->pc = 0x216C80u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x216C84u;
        goto label_216c84;
    }
    ctx->pc = 0x216C7Cu;
    SET_GPR_U32(ctx, 31, 0x216C84u);
    ctx->pc = 0x216C80u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x2196C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankCamPath__13EntryDatClassFi_0x2196c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216C84u; }
        else if (ctx->pc != 0x216C84u) { ctx->pc = 0x216C84u; }
    }
    if (ctx->pc != 0x216C84u) { return; }
    ctx->pc = 0x216C84u;
label_216c84:
    // 0x216c84: 0x1000002a
label_216c88:
    if (ctx->pc == 0x216C88u) {
        ctx->pc = 0x216C8Cu;
        goto label_216c8c;
    }
    ctx->pc = 0x216C84u;
    {
        const bool branch_taken_0x216c84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x216c84) {
            ctx->pc = 0x216D30u;
            goto label_216d30;
        }
    }
    ctx->pc = 0x216C8Cu;
label_216c8c:
    // 0x216c8c: 0x86050000
    ctx->pc = 0x216c8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_216c90:
    // 0x216c90: 0x3c020051
    ctx->pc = 0x216c90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_216c94:
    // 0x216c94: 0x244437a0
    ctx->pc = 0x216c94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
label_216c98:
    // 0x216c98: 0xc0865d0
label_216c9c:
    if (ctx->pc == 0x216C9Cu) {
        ctx->pc = 0x216C9Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x216CA0u;
        goto label_216ca0;
    }
    ctx->pc = 0x216C98u;
    SET_GPR_U32(ctx, 31, 0x216CA0u);
    ctx->pc = 0x216C9Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x219740u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryEnVtx__13EntryDatClassFi_0x219740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216CA0u; }
        else if (ctx->pc != 0x216CA0u) { ctx->pc = 0x216CA0u; }
    }
    if (ctx->pc != 0x216CA0u) { return; }
    ctx->pc = 0x216CA0u;
label_216ca0:
    // 0x216ca0: 0x10000023
label_216ca4:
    if (ctx->pc == 0x216CA4u) {
        ctx->pc = 0x216CA8u;
        goto label_216ca8;
    }
    ctx->pc = 0x216CA0u;
    {
        const bool branch_taken_0x216ca0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x216ca0) {
            ctx->pc = 0x216D30u;
            goto label_216d30;
        }
    }
    ctx->pc = 0x216CA8u;
label_216ca8:
    // 0x216ca8: 0x86050000
    ctx->pc = 0x216ca8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_216cac:
    // 0x216cac: 0x3c020051
    ctx->pc = 0x216cacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_216cb0:
    // 0x216cb0: 0x244437a0
    ctx->pc = 0x216cb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
label_216cb4:
    // 0x216cb4: 0xc0865f0
label_216cb8:
    if (ctx->pc == 0x216CB8u) {
        ctx->pc = 0x216CB8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x216CBCu;
        goto label_216cbc;
    }
    ctx->pc = 0x216CB4u;
    SET_GPR_U32(ctx, 31, 0x216CBCu);
    ctx->pc = 0x216CB8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x2197C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOneSkin__13EntryDatClassFi_0x2197c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216CBCu; }
        else if (ctx->pc != 0x216CBCu) { ctx->pc = 0x216CBCu; }
    }
    if (ctx->pc != 0x216CBCu) { return; }
    ctx->pc = 0x216CBCu;
label_216cbc:
    // 0x216cbc: 0x1000001c
label_216cc0:
    if (ctx->pc == 0x216CC0u) {
        ctx->pc = 0x216CC4u;
        goto label_216cc4;
    }
    ctx->pc = 0x216CBCu;
    {
        const bool branch_taken_0x216cbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x216cbc) {
            ctx->pc = 0x216D30u;
            goto label_216d30;
        }
    }
    ctx->pc = 0x216CC4u;
label_216cc4:
    // 0x216cc4: 0x86050000
    ctx->pc = 0x216cc4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_216cc8:
    // 0x216cc8: 0x3c020051
    ctx->pc = 0x216cc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_216ccc:
    // 0x216ccc: 0x244437a0
    ctx->pc = 0x216cccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
label_216cd0:
    // 0x216cd0: 0xc086610
label_216cd4:
    if (ctx->pc == 0x216CD4u) {
        ctx->pc = 0x216CD4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x216CD8u;
        goto label_216cd8;
    }
    ctx->pc = 0x216CD0u;
    SET_GPR_U32(ctx, 31, 0x216CD8u);
    ctx->pc = 0x216CD4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x219840u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskName__13EntryDatClassFi_0x219840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216CD8u; }
        else if (ctx->pc != 0x216CD8u) { ctx->pc = 0x216CD8u; }
    }
    if (ctx->pc != 0x216CD8u) { return; }
    ctx->pc = 0x216CD8u;
label_216cd8:
    // 0x216cd8: 0x10000015
label_216cdc:
    if (ctx->pc == 0x216CDCu) {
        ctx->pc = 0x216CE0u;
        goto label_216ce0;
    }
    ctx->pc = 0x216CD8u;
    {
        const bool branch_taken_0x216cd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x216cd8) {
            ctx->pc = 0x216D30u;
            goto label_216d30;
        }
    }
    ctx->pc = 0x216CE0u;
label_216ce0:
    // 0x216ce0: 0x86050000
    ctx->pc = 0x216ce0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_216ce4:
    // 0x216ce4: 0x3c020051
    ctx->pc = 0x216ce4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_216ce8:
    // 0x216ce8: 0x244437a0
    ctx->pc = 0x216ce8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
label_216cec:
    // 0x216cec: 0xc086630
label_216cf0:
    if (ctx->pc == 0x216CF0u) {
        ctx->pc = 0x216CF0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x216CF4u;
        goto label_216cf4;
    }
    ctx->pc = 0x216CECu;
    SET_GPR_U32(ctx, 31, 0x216CF4u);
    ctx->pc = 0x216CF0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x2198C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOskBank__13EntryDatClassFi_0x2198c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216CF4u; }
        else if (ctx->pc != 0x216CF4u) { ctx->pc = 0x216CF4u; }
    }
    if (ctx->pc != 0x216CF4u) { return; }
    ctx->pc = 0x216CF4u;
label_216cf4:
    // 0x216cf4: 0x1000000e
label_216cf8:
    if (ctx->pc == 0x216CF8u) {
        ctx->pc = 0x216CFCu;
        goto label_216cfc;
    }
    ctx->pc = 0x216CF4u;
    {
        const bool branch_taken_0x216cf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x216cf4) {
            ctx->pc = 0x216D30u;
            goto label_216d30;
        }
    }
    ctx->pc = 0x216CFCu;
label_216cfc:
    // 0x216cfc: 0x86050000
    ctx->pc = 0x216cfcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_216d00:
    // 0x216d00: 0x3c020051
    ctx->pc = 0x216d00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_216d04:
    // 0x216d04: 0x244437a0
    ctx->pc = 0x216d04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
label_216d08:
    // 0x216d08: 0xc086690
label_216d0c:
    if (ctx->pc == 0x216D0Cu) {
        ctx->pc = 0x216D0Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x216D10u;
        goto label_216d10;
    }
    ctx->pc = 0x216D08u;
    SET_GPR_U32(ctx, 31, 0x216D10u);
    ctx->pc = 0x216D0Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x219A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryClVtx__13EntryDatClassFi_0x219a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216D10u; }
        else if (ctx->pc != 0x216D10u) { ctx->pc = 0x216D10u; }
    }
    if (ctx->pc != 0x216D10u) { return; }
    ctx->pc = 0x216D10u;
label_216d10:
    // 0x216d10: 0x10000007
label_216d14:
    if (ctx->pc == 0x216D14u) {
        ctx->pc = 0x216D18u;
        goto label_216d18;
    }
    ctx->pc = 0x216D10u;
    {
        const bool branch_taken_0x216d10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x216d10) {
            ctx->pc = 0x216D30u;
            goto label_216d30;
        }
    }
    ctx->pc = 0x216D18u;
label_216d18:
    // 0x216d18: 0x3c020051
    ctx->pc = 0x216d18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_216d1c:
    // 0x216d1c: 0xc0866f8
label_216d20:
    if (ctx->pc == 0x216D20u) {
        ctx->pc = 0x216D20u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
        ctx->pc = 0x216D24u;
        goto label_216d24;
    }
    ctx->pc = 0x216D1Cu;
    SET_GPR_U32(ctx, 31, 0x216D24u);
    ctx->pc = 0x216D20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x219BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryOvlMod__13EntryDatClassFi_0x219be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216D24u; }
        else if (ctx->pc != 0x216D24u) { ctx->pc = 0x216D24u; }
    }
    if (ctx->pc != 0x216D24u) { return; }
    ctx->pc = 0x216D24u;
label_216d24:
    // 0x216d24: 0x10000002
label_216d28:
    if (ctx->pc == 0x216D28u) {
        ctx->pc = 0x216D28u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x216D2Cu;
        goto label_216d2c;
    }
    ctx->pc = 0x216D24u;
    {
        const bool branch_taken_0x216d24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216D28u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x216d24) {
            ctx->pc = 0x216D30u;
            goto label_216d30;
        }
    }
    ctx->pc = 0x216D2Cu;
label_216d2c:
    // 0x216d2c: 0x70009628
    ctx->pc = 0x216d2cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_216d30:
    // 0x216d30: 0x1640ff5b
label_216d34:
    if (ctx->pc == 0x216D34u) {
        ctx->pc = 0x216D38u;
        goto label_216d38;
    }
    ctx->pc = 0x216D30u;
    {
        const bool branch_taken_0x216d30 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x216d30) {
            ctx->pc = 0x216AA0u;
            goto label_216aa0;
        }
    }
    ctx->pc = 0x216D38u;
label_216d38:
    // 0x216d38: 0x7bbf0030
    ctx->pc = 0x216d38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_216d3c:
    // 0x216d3c: 0x7bb20020
    ctx->pc = 0x216d3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_216d40:
    // 0x216d40: 0x7bb10010
    ctx->pc = 0x216d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_216d44:
    // 0x216d44: 0x7bb00000
    ctx->pc = 0x216d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_216d48:
    // 0x216d48: 0x3e00008
label_216d4c:
    if (ctx->pc == 0x216D4Cu) {
        ctx->pc = 0x216D4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x216D50u;
        goto label_fallthrough_0x216d48;
    }
    ctx->pc = 0x216D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216D4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216900u: goto label_216900;
            case 0x216904u: goto label_216904;
            case 0x216908u: goto label_216908;
            case 0x21690Cu: goto label_21690c;
            case 0x216910u: goto label_216910;
            case 0x216914u: goto label_216914;
            case 0x216918u: goto label_216918;
            case 0x21691Cu: goto label_21691c;
            case 0x216920u: goto label_216920;
            case 0x216924u: goto label_216924;
            case 0x216928u: goto label_216928;
            case 0x21692Cu: goto label_21692c;
            case 0x216930u: goto label_216930;
            case 0x216934u: goto label_216934;
            case 0x216938u: goto label_216938;
            case 0x21693Cu: goto label_21693c;
            case 0x216940u: goto label_216940;
            case 0x216944u: goto label_216944;
            case 0x216948u: goto label_216948;
            case 0x21694Cu: goto label_21694c;
            case 0x216950u: goto label_216950;
            case 0x216954u: goto label_216954;
            case 0x216958u: goto label_216958;
            case 0x21695Cu: goto label_21695c;
            case 0x216960u: goto label_216960;
            case 0x216964u: goto label_216964;
            case 0x216968u: goto label_216968;
            case 0x21696Cu: goto label_21696c;
            case 0x216970u: goto label_216970;
            case 0x216974u: goto label_216974;
            case 0x216978u: goto label_216978;
            case 0x21697Cu: goto label_21697c;
            case 0x216980u: goto label_216980;
            case 0x216984u: goto label_216984;
            case 0x216988u: goto label_216988;
            case 0x21698Cu: goto label_21698c;
            case 0x216990u: goto label_216990;
            case 0x216994u: goto label_216994;
            case 0x216998u: goto label_216998;
            case 0x21699Cu: goto label_21699c;
            case 0x2169A0u: goto label_2169a0;
            case 0x2169A4u: goto label_2169a4;
            case 0x2169A8u: goto label_2169a8;
            case 0x2169ACu: goto label_2169ac;
            case 0x2169B0u: goto label_2169b0;
            case 0x2169B4u: goto label_2169b4;
            case 0x2169B8u: goto label_2169b8;
            case 0x2169BCu: goto label_2169bc;
            case 0x2169C0u: goto label_2169c0;
            case 0x2169C4u: goto label_2169c4;
            case 0x2169C8u: goto label_2169c8;
            case 0x2169CCu: goto label_2169cc;
            case 0x2169D0u: goto label_2169d0;
            case 0x2169D4u: goto label_2169d4;
            case 0x2169D8u: goto label_2169d8;
            case 0x2169DCu: goto label_2169dc;
            case 0x2169E0u: goto label_2169e0;
            case 0x2169E4u: goto label_2169e4;
            case 0x2169E8u: goto label_2169e8;
            case 0x2169ECu: goto label_2169ec;
            case 0x2169F0u: goto label_2169f0;
            case 0x2169F4u: goto label_2169f4;
            case 0x2169F8u: goto label_2169f8;
            case 0x2169FCu: goto label_2169fc;
            case 0x216A00u: goto label_216a00;
            case 0x216A04u: goto label_216a04;
            case 0x216A08u: goto label_216a08;
            case 0x216A0Cu: goto label_216a0c;
            case 0x216A10u: goto label_216a10;
            case 0x216A14u: goto label_216a14;
            case 0x216A18u: goto label_216a18;
            case 0x216A1Cu: goto label_216a1c;
            case 0x216A20u: goto label_216a20;
            case 0x216A24u: goto label_216a24;
            case 0x216A28u: goto label_216a28;
            case 0x216A2Cu: goto label_216a2c;
            case 0x216A30u: goto label_216a30;
            case 0x216A34u: goto label_216a34;
            case 0x216A38u: goto label_216a38;
            case 0x216A3Cu: goto label_216a3c;
            case 0x216A40u: goto label_216a40;
            case 0x216A44u: goto label_216a44;
            case 0x216A48u: goto label_216a48;
            case 0x216A4Cu: goto label_216a4c;
            case 0x216A50u: goto label_216a50;
            case 0x216A54u: goto label_216a54;
            case 0x216A58u: goto label_216a58;
            case 0x216A5Cu: goto label_216a5c;
            case 0x216A60u: goto label_216a60;
            case 0x216A64u: goto label_216a64;
            case 0x216A68u: goto label_216a68;
            case 0x216A6Cu: goto label_216a6c;
            case 0x216A70u: goto label_216a70;
            case 0x216A74u: goto label_216a74;
            case 0x216A78u: goto label_216a78;
            case 0x216A7Cu: goto label_216a7c;
            case 0x216A80u: goto label_216a80;
            case 0x216A84u: goto label_216a84;
            case 0x216A88u: goto label_216a88;
            case 0x216A8Cu: goto label_216a8c;
            case 0x216A90u: goto label_216a90;
            case 0x216A94u: goto label_216a94;
            case 0x216A98u: goto label_216a98;
            case 0x216A9Cu: goto label_216a9c;
            case 0x216AA0u: goto label_216aa0;
            case 0x216AA4u: goto label_216aa4;
            case 0x216AA8u: goto label_216aa8;
            case 0x216AACu: goto label_216aac;
            case 0x216AB0u: goto label_216ab0;
            case 0x216AB4u: goto label_216ab4;
            case 0x216AB8u: goto label_216ab8;
            case 0x216ABCu: goto label_216abc;
            case 0x216AC0u: goto label_216ac0;
            case 0x216AC4u: goto label_216ac4;
            case 0x216AC8u: goto label_216ac8;
            case 0x216ACCu: goto label_216acc;
            case 0x216AD0u: goto label_216ad0;
            case 0x216AD4u: goto label_216ad4;
            case 0x216AD8u: goto label_216ad8;
            case 0x216ADCu: goto label_216adc;
            case 0x216AE0u: goto label_216ae0;
            case 0x216AE4u: goto label_216ae4;
            case 0x216AE8u: goto label_216ae8;
            case 0x216AECu: goto label_216aec;
            case 0x216AF0u: goto label_216af0;
            case 0x216AF4u: goto label_216af4;
            case 0x216AF8u: goto label_216af8;
            case 0x216AFCu: goto label_216afc;
            case 0x216B00u: goto label_216b00;
            case 0x216B04u: goto label_216b04;
            case 0x216B08u: goto label_216b08;
            case 0x216B0Cu: goto label_216b0c;
            case 0x216B10u: goto label_216b10;
            case 0x216B14u: goto label_216b14;
            case 0x216B18u: goto label_216b18;
            case 0x216B1Cu: goto label_216b1c;
            case 0x216B20u: goto label_216b20;
            case 0x216B24u: goto label_216b24;
            case 0x216B28u: goto label_216b28;
            case 0x216B2Cu: goto label_216b2c;
            case 0x216B30u: goto label_216b30;
            case 0x216B34u: goto label_216b34;
            case 0x216B38u: goto label_216b38;
            case 0x216B3Cu: goto label_216b3c;
            case 0x216B40u: goto label_216b40;
            case 0x216B44u: goto label_216b44;
            case 0x216B48u: goto label_216b48;
            case 0x216B4Cu: goto label_216b4c;
            case 0x216B50u: goto label_216b50;
            case 0x216B54u: goto label_216b54;
            case 0x216B58u: goto label_216b58;
            case 0x216B5Cu: goto label_216b5c;
            case 0x216B60u: goto label_216b60;
            case 0x216B64u: goto label_216b64;
            case 0x216B68u: goto label_216b68;
            case 0x216B6Cu: goto label_216b6c;
            case 0x216B70u: goto label_216b70;
            case 0x216B74u: goto label_216b74;
            case 0x216B78u: goto label_216b78;
            case 0x216B7Cu: goto label_216b7c;
            case 0x216B80u: goto label_216b80;
            case 0x216B84u: goto label_216b84;
            case 0x216B88u: goto label_216b88;
            case 0x216B8Cu: goto label_216b8c;
            case 0x216B90u: goto label_216b90;
            case 0x216B94u: goto label_216b94;
            case 0x216B98u: goto label_216b98;
            case 0x216B9Cu: goto label_216b9c;
            case 0x216BA0u: goto label_216ba0;
            case 0x216BA4u: goto label_216ba4;
            case 0x216BA8u: goto label_216ba8;
            case 0x216BACu: goto label_216bac;
            case 0x216BB0u: goto label_216bb0;
            case 0x216BB4u: goto label_216bb4;
            case 0x216BB8u: goto label_216bb8;
            case 0x216BBCu: goto label_216bbc;
            case 0x216BC0u: goto label_216bc0;
            case 0x216BC4u: goto label_216bc4;
            case 0x216BC8u: goto label_216bc8;
            case 0x216BCCu: goto label_216bcc;
            case 0x216BD0u: goto label_216bd0;
            case 0x216BD4u: goto label_216bd4;
            case 0x216BD8u: goto label_216bd8;
            case 0x216BDCu: goto label_216bdc;
            case 0x216BE0u: goto label_216be0;
            case 0x216BE4u: goto label_216be4;
            case 0x216BE8u: goto label_216be8;
            case 0x216BECu: goto label_216bec;
            case 0x216BF0u: goto label_216bf0;
            case 0x216BF4u: goto label_216bf4;
            case 0x216BF8u: goto label_216bf8;
            case 0x216BFCu: goto label_216bfc;
            case 0x216C00u: goto label_216c00;
            case 0x216C04u: goto label_216c04;
            case 0x216C08u: goto label_216c08;
            case 0x216C0Cu: goto label_216c0c;
            case 0x216C10u: goto label_216c10;
            case 0x216C14u: goto label_216c14;
            case 0x216C18u: goto label_216c18;
            case 0x216C1Cu: goto label_216c1c;
            case 0x216C20u: goto label_216c20;
            case 0x216C24u: goto label_216c24;
            case 0x216C28u: goto label_216c28;
            case 0x216C2Cu: goto label_216c2c;
            case 0x216C30u: goto label_216c30;
            case 0x216C34u: goto label_216c34;
            case 0x216C38u: goto label_216c38;
            case 0x216C3Cu: goto label_216c3c;
            case 0x216C40u: goto label_216c40;
            case 0x216C44u: goto label_216c44;
            case 0x216C48u: goto label_216c48;
            case 0x216C4Cu: goto label_216c4c;
            case 0x216C50u: goto label_216c50;
            case 0x216C54u: goto label_216c54;
            case 0x216C58u: goto label_216c58;
            case 0x216C5Cu: goto label_216c5c;
            case 0x216C60u: goto label_216c60;
            case 0x216C64u: goto label_216c64;
            case 0x216C68u: goto label_216c68;
            case 0x216C6Cu: goto label_216c6c;
            case 0x216C70u: goto label_216c70;
            case 0x216C74u: goto label_216c74;
            case 0x216C78u: goto label_216c78;
            case 0x216C7Cu: goto label_216c7c;
            case 0x216C80u: goto label_216c80;
            case 0x216C84u: goto label_216c84;
            case 0x216C88u: goto label_216c88;
            case 0x216C8Cu: goto label_216c8c;
            case 0x216C90u: goto label_216c90;
            case 0x216C94u: goto label_216c94;
            case 0x216C98u: goto label_216c98;
            case 0x216C9Cu: goto label_216c9c;
            case 0x216CA0u: goto label_216ca0;
            case 0x216CA4u: goto label_216ca4;
            case 0x216CA8u: goto label_216ca8;
            case 0x216CACu: goto label_216cac;
            case 0x216CB0u: goto label_216cb0;
            case 0x216CB4u: goto label_216cb4;
            case 0x216CB8u: goto label_216cb8;
            case 0x216CBCu: goto label_216cbc;
            case 0x216CC0u: goto label_216cc0;
            case 0x216CC4u: goto label_216cc4;
            case 0x216CC8u: goto label_216cc8;
            case 0x216CCCu: goto label_216ccc;
            case 0x216CD0u: goto label_216cd0;
            case 0x216CD4u: goto label_216cd4;
            case 0x216CD8u: goto label_216cd8;
            case 0x216CDCu: goto label_216cdc;
            case 0x216CE0u: goto label_216ce0;
            case 0x216CE4u: goto label_216ce4;
            case 0x216CE8u: goto label_216ce8;
            case 0x216CECu: goto label_216cec;
            case 0x216CF0u: goto label_216cf0;
            case 0x216CF4u: goto label_216cf4;
            case 0x216CF8u: goto label_216cf8;
            case 0x216CFCu: goto label_216cfc;
            case 0x216D00u: goto label_216d00;
            case 0x216D04u: goto label_216d04;
            case 0x216D08u: goto label_216d08;
            case 0x216D0Cu: goto label_216d0c;
            case 0x216D10u: goto label_216d10;
            case 0x216D14u: goto label_216d14;
            case 0x216D18u: goto label_216d18;
            case 0x216D1Cu: goto label_216d1c;
            case 0x216D20u: goto label_216d20;
            case 0x216D24u: goto label_216d24;
            case 0x216D28u: goto label_216d28;
            case 0x216D2Cu: goto label_216d2c;
            case 0x216D30u: goto label_216d30;
            case 0x216D34u: goto label_216d34;
            case 0x216D38u: goto label_216d38;
            case 0x216D3Cu: goto label_216d3c;
            case 0x216D40u: goto label_216d40;
            case 0x216D44u: goto label_216d44;
            case 0x216D48u: goto label_216d48;
            case 0x216D4Cu: goto label_216d4c;
            default: break;
        }
        return;
    }
label_fallthrough_0x216d48:
    ctx->pc = 0x216D50u;
}
