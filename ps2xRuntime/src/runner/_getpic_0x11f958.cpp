#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _getpic
// Address: 0x11f958 - 0x11fadc
void _getpic_0x11f958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11f958u;

label_11f958:
    // 0x11f958: 0x27bdff80
    ctx->pc = 0x11f958u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
label_11f95c:
    // 0x11f95c: 0xffb50050
    ctx->pc = 0x11f95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_11f960:
    // 0x11f960: 0xffb40040
    ctx->pc = 0x11f960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_11f964:
    // 0x11f964: 0x24150001
    ctx->pc = 0x11f964u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
label_11f968:
    // 0x11f968: 0xffb30030
    ctx->pc = 0x11f968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_11f96c:
    // 0x11f96c: 0xa02d
    ctx->pc = 0x11f96cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f970:
    // 0x11f970: 0xffbf0070
    ctx->pc = 0x11f970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_11f974:
    // 0x11f974: 0x80982d
    ctx->pc = 0x11f974u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11f978:
    // 0x11f978: 0xffb60060
    ctx->pc = 0x11f978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_11f97c:
    // 0x11f97c: 0xffb20020
    ctx->pc = 0x11f97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11f980:
    // 0x11f980: 0xffb10010
    ctx->pc = 0x11f980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_11f984:
    // 0x11f984: 0xffb00000
    ctx->pc = 0x11f984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11f988:
    // 0x11f988: 0x8e700040
    ctx->pc = 0x11f988u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_11f98c:
    // 0x11f98c: 0x8e0500d8
    ctx->pc = 0x11f98cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_11f990:
    // 0x11f990: 0x30a2003f
    ctx->pc = 0x11f990u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 63));
label_11f994:
    // 0x11f994: 0x10400006
label_11f998:
    if (ctx->pc == 0x11F998u) {
        ctx->pc = 0x11F998u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x11F99Cu;
        goto label_11f99c;
    }
    ctx->pc = 0x11F994u;
    {
        const bool branch_taken_0x11f994 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F998u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x11f994) {
            ctx->pc = 0x11F9B0u;
            goto label_11f9b0;
        }
    }
    ctx->pc = 0x11F99Cu;
label_11f99c:
    // 0x11f99c: 0x3c040017
    ctx->pc = 0x11f99cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
label_11f9a0:
    // 0x11f9a0: 0xc047ffa
label_11f9a4:
    if (ctx->pc == 0x11F9A4u) {
        ctx->pc = 0x11F9A4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19544));
        ctx->pc = 0x11F9A8u;
        goto label_11f9a8;
    }
    ctx->pc = 0x11F9A0u;
    SET_GPR_U32(ctx, 31, 0x11F9A8u);
    ctx->pc = 0x11F9A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19544));
    ctx->pc = 0x11FFE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x11ffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F9A8u; }
    }
    if (ctx->pc != 0x11F9A8u) { return; }
    ctx->pc = 0x11F9A8u;
label_11f9a8:
    // 0x11f9a8: 0x10000042
label_11f9ac:
    if (ctx->pc == 0x11F9ACu) {
        ctx->pc = 0x11F9ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x11F9B0u;
        goto label_11f9b0;
    }
    ctx->pc = 0x11F9A8u;
    {
        const bool branch_taken_0x11f9a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F9ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x11f9a8) {
            ctx->pc = 0x11FAB4u;
            goto label_11fab4;
        }
    }
    ctx->pc = 0x11F9B0u;
label_11f9b0:
    // 0x11f9b0: 0x3c160017
    ctx->pc = 0x11f9b0u;
    SET_GPR_S32(ctx, 22, ((uint32_t)23 << 16));
label_11f9b4:
    // 0x11f9b4: 0xaec02080
    ctx->pc = 0x11f9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8320), GPR_U32(ctx, 0));
label_11f9b8:
    // 0x11f9b8: 0x2402ffff
    ctx->pc = 0x11f9b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_11f9bc:
    // 0x11f9bc: 0x0
    ctx->pc = 0x11f9bcu;
    // NOP
label_11f9c0:
    // 0x11f9c0: 0x1282000e
label_11f9c4:
    if (ctx->pc == 0x11F9C4u) {
        ctx->pc = 0x11F9C4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), 5));
        ctx->pc = 0x11F9C8u;
        goto label_11f9c8;
    }
    ctx->pc = 0x11F9C0u;
    {
        const bool branch_taken_0x11f9c0 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x11F9C4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), 5));
        if (branch_taken_0x11f9c0) {
            ctx->pc = 0x11F9FCu;
            goto label_11f9fc;
        }
    }
    ctx->pc = 0x11F9C8u;
label_11f9c8:
    // 0x11f9c8: 0x3c120017
    ctx->pc = 0x11f9c8u;
    SET_GPR_S32(ctx, 18, ((uint32_t)23 << 16));
label_11f9cc:
    // 0x11f9cc: 0x3c110017
    ctx->pc = 0x11f9ccu;
    SET_GPR_S32(ctx, 17, ((uint32_t)23 << 16));
label_11f9d0:
    // 0x11f9d0: 0xc04906c
label_11f9d4:
    if (ctx->pc == 0x11F9D4u) {
        ctx->pc = 0x11F9D8u;
        goto label_11f9d8;
    }
    ctx->pc = 0x11F9D0u;
    SET_GPR_U32(ctx, 31, 0x11F9D8u);
    ctx->pc = 0x1241B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextHeader_0x1241b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F9D8u; }
    }
    if (ctx->pc != 0x11F9D8u) { return; }
    ctx->pc = 0x11F9D8u;
label_11f9d8:
    // 0x11f9d8: 0x40a82d
    ctx->pc = 0x11f9d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f9dc:
    // 0x11f9dc: 0x12a00006
label_11f9e0:
    if (ctx->pc == 0x11F9E0u) {
        ctx->pc = 0x11F9E0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 6572)));
        ctx->pc = 0x11F9E4u;
        goto label_11f9e4;
    }
    ctx->pc = 0x11F9DCu;
    {
        const bool branch_taken_0x11f9dc = (GPR_U32(ctx, 21) == GPR_U32(ctx, 0));
        ctx->pc = 0x11F9E0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 6572)));
        if (branch_taken_0x11f9dc) {
            ctx->pc = 0x11F9F8u;
            goto label_11f9f8;
        }
    }
    ctx->pc = 0x11F9E4u;
label_11f9e4:
    // 0x11f9e4: 0x8e0200d4
    ctx->pc = 0x11f9e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_11f9e8:
    // 0x11f9e8: 0x10620003
label_11f9ec:
    if (ctx->pc == 0x11F9ECu) {
        ctx->pc = 0x11F9ECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8368)));
        ctx->pc = 0x11F9F0u;
        goto label_11f9f0;
    }
    ctx->pc = 0x11F9E8u;
    {
        const bool branch_taken_0x11f9e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x11F9ECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8368)));
        if (branch_taken_0x11f9e8) {
            ctx->pc = 0x11F9F8u;
            goto label_11f9f8;
        }
    }
    ctx->pc = 0x11F9F0u;
label_11f9f0:
    // 0x11f9f0: 0x1440fff7
label_11f9f4:
    if (ctx->pc == 0x11F9F4u) {
        ctx->pc = 0x11F9F8u;
        goto label_11f9f8;
    }
    ctx->pc = 0x11F9F0u;
    {
        const bool branch_taken_0x11f9f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11f9f0) {
            ctx->pc = 0x11F9D0u;
            goto label_11f9d0;
        }
    }
    ctx->pc = 0x11F9F8u;
label_11f9f8:
    // 0x11f9f8: 0x2ea20005
    ctx->pc = 0x11f9f8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 21), 5));
label_11f9fc:
    // 0x11f9fc: 0x10400029
label_11fa00:
    if (ctx->pc == 0x11FA00u) {
        ctx->pc = 0x11FA00u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        ctx->pc = 0x11FA04u;
        goto label_11fa04;
    }
    ctx->pc = 0x11F9FCu;
    {
        const bool branch_taken_0x11f9fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FA00u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x11f9fc) {
            ctx->pc = 0x11FAA4u;
            goto label_11faa4;
        }
    }
    ctx->pc = 0x11FA04u;
label_11fa04:
    // 0x11fa04: 0x151880
    ctx->pc = 0x11fa04u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 21), 2));
label_11fa08:
    // 0x11fa08: 0x24424ca0
    ctx->pc = 0x11fa08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19616));
label_11fa0c:
    // 0x11fa0c: 0x621821
    ctx->pc = 0x11fa0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11fa10:
    // 0x11fa10: 0x8c640000
    ctx->pc = 0x11fa10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11fa14:
    // 0x11fa14: 0x800008
label_11fa18:
    if (ctx->pc == 0x11FA18u) {
        ctx->pc = 0x11FA1Cu;
        goto label_11fa1c;
    }
    ctx->pc = 0x11FA14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F958u: goto label_11f958;
            case 0x11F95Cu: goto label_11f95c;
            case 0x11F960u: goto label_11f960;
            case 0x11F964u: goto label_11f964;
            case 0x11F968u: goto label_11f968;
            case 0x11F96Cu: goto label_11f96c;
            case 0x11F970u: goto label_11f970;
            case 0x11F974u: goto label_11f974;
            case 0x11F978u: goto label_11f978;
            case 0x11F97Cu: goto label_11f97c;
            case 0x11F980u: goto label_11f980;
            case 0x11F984u: goto label_11f984;
            case 0x11F988u: goto label_11f988;
            case 0x11F98Cu: goto label_11f98c;
            case 0x11F990u: goto label_11f990;
            case 0x11F994u: goto label_11f994;
            case 0x11F998u: goto label_11f998;
            case 0x11F99Cu: goto label_11f99c;
            case 0x11F9A0u: goto label_11f9a0;
            case 0x11F9A4u: goto label_11f9a4;
            case 0x11F9A8u: goto label_11f9a8;
            case 0x11F9ACu: goto label_11f9ac;
            case 0x11F9B0u: goto label_11f9b0;
            case 0x11F9B4u: goto label_11f9b4;
            case 0x11F9B8u: goto label_11f9b8;
            case 0x11F9BCu: goto label_11f9bc;
            case 0x11F9C0u: goto label_11f9c0;
            case 0x11F9C4u: goto label_11f9c4;
            case 0x11F9C8u: goto label_11f9c8;
            case 0x11F9CCu: goto label_11f9cc;
            case 0x11F9D0u: goto label_11f9d0;
            case 0x11F9D4u: goto label_11f9d4;
            case 0x11F9D8u: goto label_11f9d8;
            case 0x11F9DCu: goto label_11f9dc;
            case 0x11F9E0u: goto label_11f9e0;
            case 0x11F9E4u: goto label_11f9e4;
            case 0x11F9E8u: goto label_11f9e8;
            case 0x11F9ECu: goto label_11f9ec;
            case 0x11F9F0u: goto label_11f9f0;
            case 0x11F9F4u: goto label_11f9f4;
            case 0x11F9F8u: goto label_11f9f8;
            case 0x11F9FCu: goto label_11f9fc;
            case 0x11FA00u: goto label_11fa00;
            case 0x11FA04u: goto label_11fa04;
            case 0x11FA08u: goto label_11fa08;
            case 0x11FA0Cu: goto label_11fa0c;
            case 0x11FA10u: goto label_11fa10;
            case 0x11FA14u: goto label_11fa14;
            case 0x11FA18u: goto label_11fa18;
            case 0x11FA1Cu: goto label_11fa1c;
            case 0x11FA20u: goto label_11fa20;
            case 0x11FA24u: goto label_11fa24;
            case 0x11FA28u: goto label_11fa28;
            case 0x11FA2Cu: goto label_11fa2c;
            case 0x11FA30u: goto label_11fa30;
            case 0x11FA34u: goto label_11fa34;
            case 0x11FA38u: goto label_11fa38;
            case 0x11FA3Cu: goto label_11fa3c;
            case 0x11FA40u: goto label_11fa40;
            case 0x11FA44u: goto label_11fa44;
            case 0x11FA48u: goto label_11fa48;
            case 0x11FA4Cu: goto label_11fa4c;
            case 0x11FA50u: goto label_11fa50;
            case 0x11FA54u: goto label_11fa54;
            case 0x11FA58u: goto label_11fa58;
            case 0x11FA5Cu: goto label_11fa5c;
            case 0x11FA60u: goto label_11fa60;
            case 0x11FA64u: goto label_11fa64;
            case 0x11FA68u: goto label_11fa68;
            case 0x11FA6Cu: goto label_11fa6c;
            case 0x11FA70u: goto label_11fa70;
            case 0x11FA74u: goto label_11fa74;
            case 0x11FA78u: goto label_11fa78;
            case 0x11FA7Cu: goto label_11fa7c;
            case 0x11FA80u: goto label_11fa80;
            case 0x11FA84u: goto label_11fa84;
            case 0x11FA88u: goto label_11fa88;
            case 0x11FA8Cu: goto label_11fa8c;
            case 0x11FA90u: goto label_11fa90;
            case 0x11FA94u: goto label_11fa94;
            case 0x11FA98u: goto label_11fa98;
            case 0x11FA9Cu: goto label_11fa9c;
            case 0x11FAA0u: goto label_11faa0;
            case 0x11FAA4u: goto label_11faa4;
            case 0x11FAA8u: goto label_11faa8;
            case 0x11FAACu: goto label_11faac;
            case 0x11FAB0u: goto label_11fab0;
            case 0x11FAB4u: goto label_11fab4;
            case 0x11FAB8u: goto label_11fab8;
            case 0x11FABCu: goto label_11fabc;
            case 0x11FAC0u: goto label_11fac0;
            case 0x11FAC4u: goto label_11fac4;
            case 0x11FAC8u: goto label_11fac8;
            case 0x11FACCu: goto label_11facc;
            case 0x11FAD0u: goto label_11fad0;
            case 0x11FAD4u: goto label_11fad4;
            case 0x11FAD8u: goto label_11fad8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11FA1Cu;
label_11fa1c:
    // 0x11fa1c: 0xc047f6e
label_11fa20:
    if (ctx->pc == 0x11FA20u) {
        ctx->pc = 0x11FA20u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11FA24u;
        goto label_11fa24;
    }
    ctx->pc = 0x11FA1Cu;
    SET_GPR_U32(ctx, 31, 0x11FA24u);
    ctx->pc = 0x11FA20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11FDB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceMpegFlush_0x11fdb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FA24u; }
    }
    if (ctx->pc != 0x11FA24u) { return; }
    ctx->pc = 0x11FA24u;
label_11fa24:
    // 0x11fa24: 0x24030001
    ctx->pc = 0x11fa24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_11fa28:
    // 0x11fa28: 0x1000001e
label_11fa2c:
    if (ctx->pc == 0x11FA2Cu) {
        ctx->pc = 0x11FA2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x11FA30u;
        goto label_11fa30;
    }
    ctx->pc = 0x11FA28u;
    {
        const bool branch_taken_0x11fa28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FA2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x11fa28) {
            ctx->pc = 0x11FAA4u;
            goto label_11faa4;
        }
    }
    ctx->pc = 0x11FA30u;
label_11fa30:
    // 0x11fa30: 0xae0000a8
    ctx->pc = 0x11fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_11fa34:
    // 0x11fa34: 0x260202d
    ctx->pc = 0x11fa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11fa38:
    // 0x11fa38: 0xae0000a4
    ctx->pc = 0x11fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_11fa3c:
    // 0x11fa3c: 0x282d
    ctx->pc = 0x11fa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11fa40:
    // 0x11fa40: 0xae0000a0
    ctx->pc = 0x11fa40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_11fa44:
    // 0x11fa44: 0xc047f02
label_11fa48:
    if (ctx->pc == 0x11FA48u) {
        ctx->pc = 0x11FA48u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x11FA4Cu;
        goto label_11fa4c;
    }
    ctx->pc = 0x11FA44u;
    SET_GPR_U32(ctx, 31, 0x11FA4Cu);
    ctx->pc = 0x11FA48u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->pc = 0x11FC08u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkip_0x11fc08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FA4Cu; }
    }
    if (ctx->pc != 0x11FA4Cu) { return; }
    ctx->pc = 0x11FA4Cu;
label_11fa4c:
    // 0x11fa4c: 0x8e0300a0
    ctx->pc = 0x11fa4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_11fa50:
    // 0x11fa50: 0x40a02d
    ctx->pc = 0x11fa50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fa54:
    // 0x11fa54: 0x24630001
    ctx->pc = 0x11fa54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_11fa58:
    // 0x11fa58: 0x10000012
label_11fa5c:
    if (ctx->pc == 0x11FA5Cu) {
        ctx->pc = 0x11FA5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->pc = 0x11FA60u;
        goto label_11fa60;
    }
    ctx->pc = 0x11FA58u;
    {
        const bool branch_taken_0x11fa58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FA5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        if (branch_taken_0x11fa58) {
            ctx->pc = 0x11FAA4u;
            goto label_11faa4;
        }
    }
    ctx->pc = 0x11FA60u;
label_11fa60:
    // 0x11fa60: 0x8e0500a4
    ctx->pc = 0x11fa60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_11fa64:
    // 0x11fa64: 0x260202d
    ctx->pc = 0x11fa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11fa68:
    // 0x11fa68: 0xc047f02
label_11fa6c:
    if (ctx->pc == 0x11FA6Cu) {
        ctx->pc = 0x11FA6Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->pc = 0x11FA70u;
        goto label_11fa70;
    }
    ctx->pc = 0x11FA68u;
    SET_GPR_U32(ctx, 31, 0x11FA70u);
    ctx->pc = 0x11FA6Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 152)));
    ctx->pc = 0x11FC08u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkip_0x11fc08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FA70u; }
    }
    if (ctx->pc != 0x11FA70u) { return; }
    ctx->pc = 0x11FA70u;
label_11fa70:
    // 0x11fa70: 0x8e0300a4
    ctx->pc = 0x11fa70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_11fa74:
    // 0x11fa74: 0x40a02d
    ctx->pc = 0x11fa74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fa78:
    // 0x11fa78: 0x24630001
    ctx->pc = 0x11fa78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_11fa7c:
    // 0x11fa7c: 0x10000009
label_11fa80:
    if (ctx->pc == 0x11FA80u) {
        ctx->pc = 0x11FA80u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->pc = 0x11FA84u;
        goto label_11fa84;
    }
    ctx->pc = 0x11FA7Cu;
    {
        const bool branch_taken_0x11fa7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FA80u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        if (branch_taken_0x11fa7c) {
            ctx->pc = 0x11FAA4u;
            goto label_11faa4;
        }
    }
    ctx->pc = 0x11FA84u;
label_11fa84:
    // 0x11fa84: 0x8e0500a8
    ctx->pc = 0x11fa84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_11fa88:
    // 0x11fa88: 0x260202d
    ctx->pc = 0x11fa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_11fa8c:
    // 0x11fa8c: 0xc047f02
label_11fa90:
    if (ctx->pc == 0x11FA90u) {
        ctx->pc = 0x11FA90u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->pc = 0x11FA94u;
        goto label_11fa94;
    }
    ctx->pc = 0x11FA8Cu;
    SET_GPR_U32(ctx, 31, 0x11FA94u);
    ctx->pc = 0x11FA90u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->pc = 0x11FC08u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkip_0x11fc08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FA94u; }
    }
    if (ctx->pc != 0x11FA94u) { return; }
    ctx->pc = 0x11FA94u;
label_11fa94:
    // 0x11fa94: 0x8e0300a8
    ctx->pc = 0x11fa94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_11fa98:
    // 0x11fa98: 0x40a02d
    ctx->pc = 0x11fa98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11fa9c:
    // 0x11fa9c: 0x24630001
    ctx->pc = 0x11fa9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_11faa0:
    // 0x11faa0: 0xae0300a8
    ctx->pc = 0x11faa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_11faa4:
    // 0x11faa4: 0x8ec22080
    ctx->pc = 0x11faa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 8320)));
label_11faa8:
    // 0x11faa8: 0x1040ffc5
label_11faac:
    if (ctx->pc == 0x11FAACu) {
        ctx->pc = 0x11FAACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x11FAB0u;
        goto label_11fab0;
    }
    ctx->pc = 0x11FAA8u;
    {
        const bool branch_taken_0x11faa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FAACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x11faa8) {
            ctx->pc = 0x11F9C0u;
            goto label_11f9c0;
        }
    }
    ctx->pc = 0x11FAB0u;
label_11fab0:
    // 0x11fab0: 0x24020001
    ctx->pc = 0x11fab0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_11fab4:
    // 0x11fab4: 0xdfbf0070
    ctx->pc = 0x11fab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_11fab8:
    // 0x11fab8: 0xdfb60060
    ctx->pc = 0x11fab8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_11fabc:
    // 0x11fabc: 0xdfb50050
    ctx->pc = 0x11fabcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_11fac0:
    // 0x11fac0: 0xdfb40040
    ctx->pc = 0x11fac0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_11fac4:
    // 0x11fac4: 0xdfb30030
    ctx->pc = 0x11fac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_11fac8:
    // 0x11fac8: 0xdfb20020
    ctx->pc = 0x11fac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11facc:
    // 0x11facc: 0xdfb10010
    ctx->pc = 0x11faccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11fad0:
    // 0x11fad0: 0xdfb00000
    ctx->pc = 0x11fad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11fad4:
    // 0x11fad4: 0x3e00008
label_11fad8:
    if (ctx->pc == 0x11FAD8u) {
        ctx->pc = 0x11FAD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x11FADCu;
        goto label_fallthrough_0x11fad4;
    }
    ctx->pc = 0x11FAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FAD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F958u: goto label_11f958;
            case 0x11F95Cu: goto label_11f95c;
            case 0x11F960u: goto label_11f960;
            case 0x11F964u: goto label_11f964;
            case 0x11F968u: goto label_11f968;
            case 0x11F96Cu: goto label_11f96c;
            case 0x11F970u: goto label_11f970;
            case 0x11F974u: goto label_11f974;
            case 0x11F978u: goto label_11f978;
            case 0x11F97Cu: goto label_11f97c;
            case 0x11F980u: goto label_11f980;
            case 0x11F984u: goto label_11f984;
            case 0x11F988u: goto label_11f988;
            case 0x11F98Cu: goto label_11f98c;
            case 0x11F990u: goto label_11f990;
            case 0x11F994u: goto label_11f994;
            case 0x11F998u: goto label_11f998;
            case 0x11F99Cu: goto label_11f99c;
            case 0x11F9A0u: goto label_11f9a0;
            case 0x11F9A4u: goto label_11f9a4;
            case 0x11F9A8u: goto label_11f9a8;
            case 0x11F9ACu: goto label_11f9ac;
            case 0x11F9B0u: goto label_11f9b0;
            case 0x11F9B4u: goto label_11f9b4;
            case 0x11F9B8u: goto label_11f9b8;
            case 0x11F9BCu: goto label_11f9bc;
            case 0x11F9C0u: goto label_11f9c0;
            case 0x11F9C4u: goto label_11f9c4;
            case 0x11F9C8u: goto label_11f9c8;
            case 0x11F9CCu: goto label_11f9cc;
            case 0x11F9D0u: goto label_11f9d0;
            case 0x11F9D4u: goto label_11f9d4;
            case 0x11F9D8u: goto label_11f9d8;
            case 0x11F9DCu: goto label_11f9dc;
            case 0x11F9E0u: goto label_11f9e0;
            case 0x11F9E4u: goto label_11f9e4;
            case 0x11F9E8u: goto label_11f9e8;
            case 0x11F9ECu: goto label_11f9ec;
            case 0x11F9F0u: goto label_11f9f0;
            case 0x11F9F4u: goto label_11f9f4;
            case 0x11F9F8u: goto label_11f9f8;
            case 0x11F9FCu: goto label_11f9fc;
            case 0x11FA00u: goto label_11fa00;
            case 0x11FA04u: goto label_11fa04;
            case 0x11FA08u: goto label_11fa08;
            case 0x11FA0Cu: goto label_11fa0c;
            case 0x11FA10u: goto label_11fa10;
            case 0x11FA14u: goto label_11fa14;
            case 0x11FA18u: goto label_11fa18;
            case 0x11FA1Cu: goto label_11fa1c;
            case 0x11FA20u: goto label_11fa20;
            case 0x11FA24u: goto label_11fa24;
            case 0x11FA28u: goto label_11fa28;
            case 0x11FA2Cu: goto label_11fa2c;
            case 0x11FA30u: goto label_11fa30;
            case 0x11FA34u: goto label_11fa34;
            case 0x11FA38u: goto label_11fa38;
            case 0x11FA3Cu: goto label_11fa3c;
            case 0x11FA40u: goto label_11fa40;
            case 0x11FA44u: goto label_11fa44;
            case 0x11FA48u: goto label_11fa48;
            case 0x11FA4Cu: goto label_11fa4c;
            case 0x11FA50u: goto label_11fa50;
            case 0x11FA54u: goto label_11fa54;
            case 0x11FA58u: goto label_11fa58;
            case 0x11FA5Cu: goto label_11fa5c;
            case 0x11FA60u: goto label_11fa60;
            case 0x11FA64u: goto label_11fa64;
            case 0x11FA68u: goto label_11fa68;
            case 0x11FA6Cu: goto label_11fa6c;
            case 0x11FA70u: goto label_11fa70;
            case 0x11FA74u: goto label_11fa74;
            case 0x11FA78u: goto label_11fa78;
            case 0x11FA7Cu: goto label_11fa7c;
            case 0x11FA80u: goto label_11fa80;
            case 0x11FA84u: goto label_11fa84;
            case 0x11FA88u: goto label_11fa88;
            case 0x11FA8Cu: goto label_11fa8c;
            case 0x11FA90u: goto label_11fa90;
            case 0x11FA94u: goto label_11fa94;
            case 0x11FA98u: goto label_11fa98;
            case 0x11FA9Cu: goto label_11fa9c;
            case 0x11FAA0u: goto label_11faa0;
            case 0x11FAA4u: goto label_11faa4;
            case 0x11FAA8u: goto label_11faa8;
            case 0x11FAACu: goto label_11faac;
            case 0x11FAB0u: goto label_11fab0;
            case 0x11FAB4u: goto label_11fab4;
            case 0x11FAB8u: goto label_11fab8;
            case 0x11FABCu: goto label_11fabc;
            case 0x11FAC0u: goto label_11fac0;
            case 0x11FAC4u: goto label_11fac4;
            case 0x11FAC8u: goto label_11fac8;
            case 0x11FACCu: goto label_11facc;
            case 0x11FAD0u: goto label_11fad0;
            case 0x11FAD4u: goto label_11fad4;
            case 0x11FAD8u: goto label_11fad8;
            default: break;
        }
        return;
    }
label_fallthrough_0x11fad4:
    ctx->pc = 0x11FADCu;
}
