#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _decMB0
// Address: 0x160950 - 0x160e74
void _decMB0_0x160950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_decMB0");


    ctx->pc = 0x160950u;

    // 0x160950: 0x27bdff40
    ctx->pc = 0x160950u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x160954: 0x3c020023
    ctx->pc = 0x160954u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x160958: 0xffb60080
    ctx->pc = 0x160958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x16095c: 0x3c0b1000
    ctx->pc = 0x16095cu;
    SET_GPR_U32(ctx, 11, ((uint32_t)4096 << 16));
    // 0x160960: 0xffb50070
    ctx->pc = 0x160960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x160964: 0x356b2010
    ctx->pc = 0x160964u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), 8208));
    // 0x160968: 0xffb20040
    ctx->pc = 0x160968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x16096c: 0xa0a82d
    ctx->pc = 0x16096cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160970: 0xffb10030
    ctx->pc = 0x160970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x160974: 0x80902d
    ctx->pc = 0x160974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160978: 0xffbf00b0
    ctx->pc = 0x160978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x16097c: 0xe0882d
    ctx->pc = 0x16097cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160980: 0xffbe00a0
    ctx->pc = 0x160980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x160984: 0x120b02d
    ctx->pc = 0x160984u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160988: 0xffb70090
    ctx->pc = 0x160988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x16098c: 0x24040001
    ctx->pc = 0x16098cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160990: 0xffb40060
    ctx->pc = 0x160990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x160994: 0xffb30050
    ctx->pc = 0x160994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x160998: 0xffb00020
    ctx->pc = 0x160998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16099c: 0x8c4aa3bc
    ctx->pc = 0x16099cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 4294943676)));
    // 0x1609a0: 0x8d630000
    ctx->pc = 0x1609a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1609a4: 0x3c02f8ff
    ctx->pc = 0x1609a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)63743 << 16));
    // 0x1609a8: 0x3442ffff
    ctx->pc = 0x1609a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1609ac: 0xa5600
    ctx->pc = 0x1609acu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 24));
    // 0x1609b0: 0x621824
    ctx->pc = 0x1609b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1609b4: 0x6a1825
    ctx->pc = 0x1609b4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1609b8: 0xad630000
    ctx->pc = 0x1609b8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x1609bc: 0xafa60010
    ctx->pc = 0x1609bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x1609c0: 0xc0584d2
    ctx->pc = 0x1609C0u;
    SET_GPR_U32(ctx, 31, 0x1609C8u);
    ctx->pc = 0x1609C4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    ctx->pc = 0x161348u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x161348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1609C8u; }
        else if (ctx->pc != 0x1609C8u) { ctx->pc = 0x1609C8u; }
    }
    if (ctx->pc != 0x1609C8u) { return; }
    ctx->pc = 0x1609C8u;
    // 0x1609c8: 0x40182d
    ctx->pc = 0x1609c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1609cc: 0x14600009
    ctx->pc = 0x1609CCu;
    {
        const bool branch_taken_0x1609cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1609D0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x1609cc) {
            ctx->pc = 0x1609F4u;
            goto label_1609f4;
        }
    }
    ctx->pc = 0x1609D4u;
    // 0x1609d4: 0x3c04002c
    ctx->pc = 0x1609d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1609d8: 0xc059112
    ctx->pc = 0x1609D8u;
    SET_GPR_U32(ctx, 31, 0x1609E0u);
    ctx->pc = 0x1609DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937704));
    ctx->pc = 0x164448u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x164448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1609E0u; }
        else if (ctx->pc != 0x1609E0u) { ctx->pc = 0x1609E0u; }
    }
    if (ctx->pc != 0x1609E0u) { return; }
    ctx->pc = 0x1609E0u;
    // 0x1609e0: 0x24020001
    ctx->pc = 0x1609e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1609e4: 0x3c030023
    ctx->pc = 0x1609e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1609e8: 0xac62a348
    ctx->pc = 0x1609e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943560), GPR_U32(ctx, 2));
label_1609ec:
    // 0x1609ec: 0x10000115
    ctx->pc = 0x1609ECu;
    {
        const bool branch_taken_0x1609ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1609F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1609ec) {
            ctx->pc = 0x160E44u;
            goto label_160e44;
        }
    }
    ctx->pc = 0x1609F4u;
label_1609f4:
    // 0x1609f4: 0x3062000c
    ctx->pc = 0x1609f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 12));
    // 0x1609f8: 0x1040000c
    ctx->pc = 0x1609F8u;
    {
        const bool branch_taken_0x1609f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1609FCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
        if (branch_taken_0x1609f8) {
            ctx->pc = 0x160A2Cu;
            goto label_160a2c;
        }
    }
    ctx->pc = 0x160A00u;
    // 0x160a00: 0x24030003
    ctx->pc = 0x160a00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x160a04: 0x8c82a3ec
    ctx->pc = 0x160a04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294943724)));
    // 0x160a08: 0x14430004
    ctx->pc = 0x160A08u;
    {
        const bool branch_taken_0x160a08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x160A0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x160a08) {
            ctx->pc = 0x160A1Cu;
            goto label_160a1c;
        }
    }
    ctx->pc = 0x160A10u;
    // 0x160a10: 0x8c43a3f4
    ctx->pc = 0x160a10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943732)));
    // 0x160a14: 0x14600010
    ctx->pc = 0x160A14u;
    {
        const bool branch_taken_0x160a14 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x160A18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x160a14) {
            ctx->pc = 0x160A58u;
            goto label_160a58;
        }
    }
    ctx->pc = 0x160A1Cu;
label_160a1c:
    // 0x160a1c: 0xc0585d4
    ctx->pc = 0x160A1Cu;
    SET_GPR_U32(ctx, 31, 0x160A24u);
    ctx->pc = 0x160A20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160A24u; }
        else if (ctx->pc != 0x160A24u) { ctx->pc = 0x160A24u; }
    }
    if (ctx->pc != 0x160A24u) { return; }
    ctx->pc = 0x160A24u;
    // 0x160a24: 0x1000000d
    ctx->pc = 0x160A24u;
    {
        const bool branch_taken_0x160a24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160A28u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x160a24) {
            ctx->pc = 0x160A5Cu;
            goto label_160a5c;
        }
    }
    ctx->pc = 0x160A2Cu;
label_160a2c:
    // 0x160a2c: 0x30620001
    ctx->pc = 0x160a2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x160a30: 0x1040000a
    ctx->pc = 0x160A30u;
    {
        const bool branch_taken_0x160a30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x160A34u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x160a30) {
            ctx->pc = 0x160A5Cu;
            goto label_160a5c;
        }
    }
    ctx->pc = 0x160A38u;
    // 0x160a38: 0x8c43a3f8
    ctx->pc = 0x160a38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943736)));
    // 0x160a3c: 0x10600007
    ctx->pc = 0x160A3Cu;
    {
        const bool branch_taken_0x160a3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x160A40u;
        SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
        if (branch_taken_0x160a3c) {
            ctx->pc = 0x160A5Cu;
            goto label_160a5c;
        }
    }
    ctx->pc = 0x160A44u;
    // 0x160a44: 0x24020001
    ctx->pc = 0x160a44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160a48: 0x8ca3a3ec
    ctx->pc = 0x160a48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294943724)));
    // 0x160a4c: 0x24040002
    ctx->pc = 0x160a4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x160a50: 0x38630003
    ctx->pc = 0x160a50u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 3));
    // 0x160a54: 0x83100a
    ctx->pc = 0x160a54u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_160a58:
    // 0x160a58: 0xaea20000
    ctx->pc = 0x160a58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_160a5c:
    // 0x160a5c: 0x3c060023
    ctx->pc = 0x160a5cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x160a60: 0x24020003
    ctx->pc = 0x160a60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x160a64: 0x8cc3a3ec
    ctx->pc = 0x160a64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4294943724)));
    // 0x160a68: 0x14620008
    ctx->pc = 0x160A68u;
    {
        const bool branch_taken_0x160a68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x160A6Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 0)));
        if (branch_taken_0x160a68) {
            ctx->pc = 0x160A8Cu;
            goto label_160a8c;
        }
    }
    ctx->pc = 0x160A70u;
    // 0x160a70: 0x24130001
    ctx->pc = 0x160a70u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160a74: 0x24020002
    ctx->pc = 0x160a74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x160a78: 0x38a30001
    ctx->pc = 0x160a78u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 5), 1));
    // 0x160a7c: 0x38a40002
    ctx->pc = 0x160a7cu;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 5), 2));
    // 0x160a80: 0x43980a
    ctx->pc = 0x160a80u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 2));
    // 0x160a84: 0x10000006
    ctx->pc = 0x160A84u;
    {
        const bool branch_taken_0x160a84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160A88u;
        SET_GPR_U32(ctx, 20, SLTU32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x160a84) {
            ctx->pc = 0x160AA0u;
            goto label_160aa0;
        }
    }
    ctx->pc = 0x160A8Cu;
label_160a8c:
    // 0x160a8c: 0x24030002
    ctx->pc = 0x160a8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x160a90: 0x24130001
    ctx->pc = 0x160a90u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160a94: 0xa02d
    ctx->pc = 0x160a94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a98: 0x38a20002
    ctx->pc = 0x160a98u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 2));
    // 0x160a9c: 0x62980a
    ctx->pc = 0x160a9cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
label_160aa0:
    // 0x160aa0: 0x38a20003
    ctx->pc = 0x160aa0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 3));
    // 0x160aa4: 0xb82d
    ctx->pc = 0x160aa4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160aa8: 0x16800005
    ctx->pc = 0x160AA8u;
    {
        const bool branch_taken_0x160aa8 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x160AACu;
        SET_GPR_U32(ctx, 30, SLTU32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x160aa8) {
            ctx->pc = 0x160AC0u;
            goto label_160ac0;
        }
    }
    ctx->pc = 0x160AB0u;
    // 0x160ab0: 0x3c070023
    ctx->pc = 0x160ab0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)35 << 16));
    // 0x160ab4: 0x8ce2a3ec
    ctx->pc = 0x160ab4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4294943724)));
    // 0x160ab8: 0x38420003
    ctx->pc = 0x160ab8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 3));
    // 0x160abc: 0x2c570001
    ctx->pc = 0x160abcu;
    SET_GPR_U32(ctx, 23, SLTU32(GPR_U32(ctx, 2), 1));
label_160ac0:
    // 0x160ac0: 0x3c020023
    ctx->pc = 0x160ac0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x160ac4: 0x8c43a3ec
    ctx->pc = 0x160ac4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943724)));
    // 0x160ac8: 0x24020003
    ctx->pc = 0x160ac8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x160acc: 0x1462000d
    ctx->pc = 0x160ACCu;
    {
        const bool branch_taken_0x160acc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x160AD0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x160acc) {
            ctx->pc = 0x160B04u;
            goto label_160b04;
        }
    }
    ctx->pc = 0x160AD4u;
    // 0x160ad4: 0x3c020023
    ctx->pc = 0x160ad4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x160ad8: 0x8c43a3f4
    ctx->pc = 0x160ad8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943732)));
    // 0x160adc: 0x14600009
    ctx->pc = 0x160ADCu;
    {
        const bool branch_taken_0x160adc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x160AE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x160adc) {
            ctx->pc = 0x160B04u;
            goto label_160b04;
        }
    }
    ctx->pc = 0x160AE4u;
    // 0x160ae4: 0x8e420000
    ctx->pc = 0x160ae4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x160ae8: 0x30420003
    ctx->pc = 0x160ae8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x160aec: 0x10400005
    ctx->pc = 0x160AECu;
    {
        const bool branch_taken_0x160aec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x160AF0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x160aec) {
            ctx->pc = 0x160B04u;
            goto label_160b04;
        }
    }
    ctx->pc = 0x160AF4u;
    // 0x160af4: 0xc0585d4
    ctx->pc = 0x160AF4u;
    SET_GPR_U32(ctx, 31, 0x160AFCu);
    ctx->pc = 0x160AF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160AFCu; }
        else if (ctx->pc != 0x160AFCu) { ctx->pc = 0x160AFCu; }
    }
    if (ctx->pc != 0x160AFCu) { return; }
    ctx->pc = 0x160AFCu;
    // 0x160afc: 0x10000002
    ctx->pc = 0x160AFCu;
    {
        const bool branch_taken_0x160afc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160B00u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x160afc) {
            ctx->pc = 0x160B08u;
            goto label_160b08;
        }
    }
    ctx->pc = 0x160B04u;
label_160b04:
    // 0x160b04: 0x8fa30010
    ctx->pc = 0x160b04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_160b08:
    // 0x160b08: 0xac620000
    ctx->pc = 0x160b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x160b0c: 0x8e440000
    ctx->pc = 0x160b0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x160b10: 0x30820010
    ctx->pc = 0x160b10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 16));
    // 0x160b14: 0x10400007
    ctx->pc = 0x160B14u;
    {
        const bool branch_taken_0x160b14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x160B18u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x160b14) {
            ctx->pc = 0x160B34u;
            goto label_160b34;
        }
    }
    ctx->pc = 0x160B1Cu;
    // 0x160b1c: 0x24040005
    ctx->pc = 0x160b1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x160b20: 0xc0585d4
    ctx->pc = 0x160B20u;
    SET_GPR_U32(ctx, 31, 0x160B28u);
    ctx->pc = 0x160B24u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B28u; }
        else if (ctx->pc != 0x160B28u) { ctx->pc = 0x160B28u; }
    }
    if (ctx->pc != 0x160B28u) { return; }
    ctx->pc = 0x160B28u;
    // 0x160b28: 0xae02a480
    ctx->pc = 0x160b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943872), GPR_U32(ctx, 2));
    // 0x160b2c: 0x8e440000
    ctx->pc = 0x160b2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x160b30: 0x30820008
    ctx->pc = 0x160b30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 8));
label_160b34:
    // 0x160b34: 0x14400007
    ctx->pc = 0x160B34u;
    {
        const bool branch_taken_0x160b34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x160B38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x160b34) {
            ctx->pc = 0x160B54u;
            goto label_160b54;
        }
    }
    ctx->pc = 0x160B3Cu;
    // 0x160b3c: 0x30820001
    ctx->pc = 0x160b3cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
    // 0x160b40: 0x10400022
    ctx->pc = 0x160B40u;
    {
        const bool branch_taken_0x160b40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x160B44u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x160b40) {
            ctx->pc = 0x160BCCu;
            goto label_160bcc;
        }
    }
    ctx->pc = 0x160B48u;
    // 0x160b48: 0x8c43a3f8
    ctx->pc = 0x160b48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943736)));
    // 0x160b4c: 0x1060001f
    ctx->pc = 0x160B4Cu;
    {
        const bool branch_taken_0x160b4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x160B50u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x160b4c) {
            ctx->pc = 0x160BCCu;
            goto label_160bcc;
        }
    }
    ctx->pc = 0x160B54u;
label_160b54:
    // 0x160b54: 0x8c43aaf0
    ctx->pc = 0x160b54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294945520)));
    // 0x160b58: 0x10600011
    ctx->pc = 0x160B58u;
    {
        const bool branch_taken_0x160b58 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x160B5Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x160b58) {
            ctx->pc = 0x160BA0u;
            goto label_160ba0;
        }
    }
    ctx->pc = 0x160B60u;
    // 0x160b60: 0xafbe0000
    ctx->pc = 0x160b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x160b64: 0x2443a3d8
    ctx->pc = 0x160b64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294943704));
    // 0x160b68: 0x8c4aa3d8
    ctx->pc = 0x160b68u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 4294943704)));
    // 0x160b6c: 0x8c6b0004
    ctx->pc = 0x160b6cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x160b70: 0x220202d
    ctx->pc = 0x160b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b74: 0x8fa60014
    ctx->pc = 0x160b74u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x160b78: 0x254affff
    ctx->pc = 0x160b78u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x160b7c: 0xafb70008
    ctx->pc = 0x160b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x160b80: 0x256bffff
    ctx->pc = 0x160b80u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x160b84: 0x2c0282d
    ctx->pc = 0x160b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b88: 0x382d
    ctx->pc = 0x160b88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b8c: 0x260402d
    ctx->pc = 0x160b8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b90: 0xc0583c0
    ctx->pc = 0x160B90u;
    SET_GPR_U32(ctx, 31, 0x160B98u);
    ctx->pc = 0x160B94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionVectors_0x160f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B98u; }
        else if (ctx->pc != 0x160B98u) { ctx->pc = 0x160B98u; }
    }
    if (ctx->pc != 0x160B98u) { return; }
    ctx->pc = 0x160B98u;
    // 0x160b98: 0x1000000d
    ctx->pc = 0x160B98u;
    {
        const bool branch_taken_0x160b98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160B9Cu;
        SET_GPR_U32(ctx, 30, ((uint32_t)35 << 16));
        if (branch_taken_0x160b98) {
            ctx->pc = 0x160BD0u;
            goto label_160bd0;
        }
    }
    ctx->pc = 0x160BA0u;
label_160ba0:
    // 0x160ba0: 0x3c020023
    ctx->pc = 0x160ba0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x160ba4: 0x3c030023
    ctx->pc = 0x160ba4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x160ba8: 0x8c46a3c8
    ctx->pc = 0x160ba8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294943688)));
    // 0x160bac: 0x220202d
    ctx->pc = 0x160bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160bb0: 0x8c6aa3c4
    ctx->pc = 0x160bb0u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 3), 4294943684)));
    // 0x160bb4: 0x2c0282d
    ctx->pc = 0x160bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160bb8: 0x24c6ffff
    ctx->pc = 0x160bb8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x160bbc: 0x402d
    ctx->pc = 0x160bbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160bc0: 0x482d
    ctx->pc = 0x160bc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160bc4: 0xc058420
    ctx->pc = 0x160BC4u;
    SET_GPR_U32(ctx, 31, 0x160BCCu);
    ctx->pc = 0x160BC8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x161080u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x161080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160BCCu; }
        else if (ctx->pc != 0x160BCCu) { ctx->pc = 0x160BCCu; }
    }
    if (ctx->pc != 0x160BCCu) { return; }
    ctx->pc = 0x160BCCu;
label_160bcc:
    // 0x160bcc: 0x3c1e0023
    ctx->pc = 0x160bccu;
    SET_GPR_U32(ctx, 30, ((uint32_t)35 << 16));
label_160bd0:
    // 0x160bd0: 0x8fc2a348
    ctx->pc = 0x160bd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4294943560)));
    // 0x160bd4: 0x1440009b
    ctx->pc = 0x160BD4u;
    {
        const bool branch_taken_0x160bd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x160BD8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x160bd4) {
            ctx->pc = 0x160E44u;
            goto label_160e44;
        }
    }
    ctx->pc = 0x160BDCu;
    // 0x160bdc: 0x8e420000
    ctx->pc = 0x160bdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x160be0: 0x30420004
    ctx->pc = 0x160be0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x160be4: 0x1040001f
    ctx->pc = 0x160BE4u;
    {
        const bool branch_taken_0x160be4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x160BE8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x160be4) {
            ctx->pc = 0x160C64u;
            goto label_160c64;
        }
    }
    ctx->pc = 0x160BECu;
    // 0x160bec: 0x8c43aaf0
    ctx->pc = 0x160becu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294945520)));
    // 0x160bf0: 0x10600011
    ctx->pc = 0x160BF0u;
    {
        const bool branch_taken_0x160bf0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x160BF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x160bf0) {
            ctx->pc = 0x160C38u;
            goto label_160c38;
        }
    }
    ctx->pc = 0x160BF8u;
    // 0x160bf8: 0xafb70008
    ctx->pc = 0x160bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x160bfc: 0x2442a3d8
    ctx->pc = 0x160bfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294943704));
    // 0x160c00: 0x8fa60014
    ctx->pc = 0x160c00u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x160c04: 0x8c4b000c
    ctx->pc = 0x160c04u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x160c08: 0x2c0282d
    ctx->pc = 0x160c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c0c: 0x8c4a0008
    ctx->pc = 0x160c0cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x160c10: 0x260402d
    ctx->pc = 0x160c10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c14: 0x280482d
    ctx->pc = 0x160c14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c18: 0x256bffff
    ctx->pc = 0x160c18u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x160c1c: 0xafa00000
    ctx->pc = 0x160c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x160c20: 0x254affff
    ctx->pc = 0x160c20u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x160c24: 0x220202d
    ctx->pc = 0x160c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c28: 0xc0583c0
    ctx->pc = 0x160C28u;
    SET_GPR_U32(ctx, 31, 0x160C30u);
    ctx->pc = 0x160C2Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x160F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionVectors_0x160f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160C30u; }
        else if (ctx->pc != 0x160C30u) { ctx->pc = 0x160C30u; }
    }
    if (ctx->pc != 0x160C30u) { return; }
    ctx->pc = 0x160C30u;
    // 0x160c30: 0x1000000d
    ctx->pc = 0x160C30u;
    {
        const bool branch_taken_0x160c30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160C34u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4294943560)));
        if (branch_taken_0x160c30) {
            ctx->pc = 0x160C68u;
            goto label_160c68;
        }
    }
    ctx->pc = 0x160C38u;
label_160c38:
    // 0x160c38: 0x3c020023
    ctx->pc = 0x160c38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x160c3c: 0x3c030023
    ctx->pc = 0x160c3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x160c40: 0x8c46a3d0
    ctx->pc = 0x160c40u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294943696)));
    // 0x160c44: 0x2c0282d
    ctx->pc = 0x160c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c48: 0x8c6aa3cc
    ctx->pc = 0x160c48u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 3), 4294943692)));
    // 0x160c4c: 0x26240008
    ctx->pc = 0x160c4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 8));
    // 0x160c50: 0x24c6ffff
    ctx->pc = 0x160c50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x160c54: 0x402d
    ctx->pc = 0x160c54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c58: 0x482d
    ctx->pc = 0x160c58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c5c: 0xc058420
    ctx->pc = 0x160C5Cu;
    SET_GPR_U32(ctx, 31, 0x160C64u);
    ctx->pc = 0x160C60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x161080u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x161080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160C64u; }
        else if (ctx->pc != 0x160C64u) { ctx->pc = 0x160C64u; }
    }
    if (ctx->pc != 0x160C64u) { return; }
    ctx->pc = 0x160C64u;
label_160c64:
    // 0x160c64: 0x8fc2a348
    ctx->pc = 0x160c64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4294943560)));
label_160c68:
    // 0x160c68: 0x14400076
    ctx->pc = 0x160C68u;
    {
        const bool branch_taken_0x160c68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x160C6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x160c68) {
            ctx->pc = 0x160E44u;
            goto label_160e44;
        }
    }
    ctx->pc = 0x160C70u;
    // 0x160c70: 0x8e440000
    ctx->pc = 0x160c70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x160c74: 0x30820001
    ctx->pc = 0x160c74u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
    // 0x160c78: 0x10400007
    ctx->pc = 0x160C78u;
    {
        const bool branch_taken_0x160c78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x160C7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x160c78) {
            ctx->pc = 0x160C98u;
            goto label_160c98;
        }
    }
    ctx->pc = 0x160C80u;
    // 0x160c80: 0x8c43a3f8
    ctx->pc = 0x160c80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943736)));
    // 0x160c84: 0x10600005
    ctx->pc = 0x160C84u;
    {
        const bool branch_taken_0x160c84 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x160C88u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x160c84) {
            ctx->pc = 0x160C9Cu;
            goto label_160c9c;
        }
    }
    ctx->pc = 0x160C8Cu;
    // 0x160c8c: 0xc05858e
    ctx->pc = 0x160C8Cu;
    SET_GPR_U32(ctx, 31, 0x160C94u);
    ctx->pc = 0x160C90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161638u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x161638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160C94u; }
        else if (ctx->pc != 0x160C94u) { ctx->pc = 0x160C94u; }
    }
    if (ctx->pc != 0x160C94u) { return; }
    ctx->pc = 0x160C94u;
    // 0x160c94: 0x8e440000
    ctx->pc = 0x160c94u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_160c98:
    // 0x160c98: 0x30820003
    ctx->pc = 0x160c98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 3));
label_160c9c:
    // 0x160c9c: 0x1040002c
    ctx->pc = 0x160C9Cu;
    {
        const bool branch_taken_0x160c9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x160CA0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x160c9c) {
            ctx->pc = 0x160D50u;
            goto label_160d50;
        }
    }
    ctx->pc = 0x160CA4u;
    // 0x160ca4: 0x24030140
    ctx->pc = 0x160ca4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
    // 0x160ca8: 0x2442a838
    ctx->pc = 0x160ca8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944824));
    // 0x160cac: 0x3c070fff
    ctx->pc = 0x160cacu;
    SET_GPR_U32(ctx, 7, ((uint32_t)4095 << 16));
    // 0x160cb0: 0x8c450280
    ctx->pc = 0x160cb0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x160cb4: 0x34e7ffff
    ctx->pc = 0x160cb4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x160cb8: 0x3c0a8000
    ctx->pc = 0x160cb8u;
    SET_GPR_U32(ctx, 10, ((uint32_t)32768 << 16));
    // 0x160cbc: 0x3c061000
    ctx->pc = 0x160cbcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x160cc0: 0xa32018
    ctx->pc = 0x160cc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x160cc4: 0x34c6b010
    ctx->pc = 0x160cc4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 45072));
    // 0x160cc8: 0x24090030
    ctx->pc = 0x160cc8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 48));
    // 0x160ccc: 0x3c031000
    ctx->pc = 0x160cccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x160cd0: 0x3463b000
    ctx->pc = 0x160cd0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45056));
    // 0x160cd4: 0x24080100
    ctx->pc = 0x160cd4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 256));
    // 0x160cd8: 0x3c100023
    ctx->pc = 0x160cd8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x160cdc: 0x822821
    ctx->pc = 0x160cdcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x160ce0: 0x8ca20004
    ctx->pc = 0x160ce0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x160ce4: 0x3c041000
    ctx->pc = 0x160ce4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x160ce8: 0x3484b020
    ctx->pc = 0x160ce8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 45088));
    // 0x160cec: 0x471024
    ctx->pc = 0x160cecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x160cf0: 0x4a1025
    ctx->pc = 0x160cf0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x160cf4: 0xacc20000
    ctx->pc = 0x160cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x160cf8: 0xac890000
    ctx->pc = 0x160cf8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9)); // MMIO: 0x10000000
    // 0x160cfc: 0xc05847c
    ctx->pc = 0x160CFCu;
    SET_GPR_U32(ctx, 31, 0x160D04u);
    ctx->pc = 0x160D00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    ctx->pc = 0x1611F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x1611f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D04u; }
        else if (ctx->pc != 0x160D04u) { ctx->pc = 0x160D04u; }
    }
    if (ctx->pc != 0x160D04u) { return; }
    ctx->pc = 0x160D04u;
    // 0x160d04: 0x3c020023
    ctx->pc = 0x160d04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x160d08: 0x8e440000
    ctx->pc = 0x160d08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x160d0c: 0x8c45a480
    ctx->pc = 0x160d0cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294943872)));
    // 0x160d10: 0x3c062000
    ctx->pc = 0x160d10u;
    SET_GPR_U32(ctx, 6, ((uint32_t)8192 << 16));
    // 0x160d14: 0x8e03a47c
    ctx->pc = 0x160d14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294943868)));
    // 0x160d18: 0x30840001
    ctx->pc = 0x160d18u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x160d1c: 0x8fa70010
    ctx->pc = 0x160d1cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160d20: 0x426c0
    ctx->pc = 0x160d20u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 27));
    // 0x160d24: 0x52c00
    ctx->pc = 0x160d24u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x160d28: 0x31e80
    ctx->pc = 0x160d28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 26));
    // 0x160d2c: 0x8ce20000
    ctx->pc = 0x160d2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x160d30: 0x852025
    ctx->pc = 0x160d30u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x160d34: 0x661825
    ctx->pc = 0x160d34u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x160d38: 0x832025
    ctx->pc = 0x160d38u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x160d3c: 0x21640
    ctx->pc = 0x160d3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 25));
    // 0x160d40: 0xc058470
    ctx->pc = 0x160D40u;
    SET_GPR_U32(ctx, 31, 0x160D48u);
    ctx->pc = 0x160D44u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x1611C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1611c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160D48u; }
        else if (ctx->pc != 0x160D48u) { ctx->pc = 0x160D48u; }
    }
    if (ctx->pc != 0x160D48u) { return; }
    ctx->pc = 0x160D48u;
    // 0x160d48: 0x1000000b
    ctx->pc = 0x160D48u;
    {
        const bool branch_taken_0x160d48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160D4Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4294943560)));
        if (branch_taken_0x160d48) {
            ctx->pc = 0x160D78u;
            goto label_160d78;
        }
    }
    ctx->pc = 0x160D50u;
label_160d50:
    // 0x160d50: 0x3c030023
    ctx->pc = 0x160d50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x160d54: 0x24050140
    ctx->pc = 0x160d54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 320));
    // 0x160d58: 0x2463a838
    ctx->pc = 0x160d58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294944824));
    // 0x160d5c: 0x24040001
    ctx->pc = 0x160d5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160d60: 0x8c620280
    ctx->pc = 0x160d60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x160d64: 0x3c100023
    ctx->pc = 0x160d64u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x160d68: 0x453018
    ctx->pc = 0x160d68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x160d6c: 0xc31021
    ctx->pc = 0x160d6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x160d70: 0xac44013c
    ctx->pc = 0x160d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 4));
    // 0x160d74: 0x8fc2a348
    ctx->pc = 0x160d74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4294943560)));
label_160d78:
    // 0x160d78: 0x1440ff1c
    ctx->pc = 0x160D78u;
    {
        const bool branch_taken_0x160d78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x160D7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294943868), GPR_U32(ctx, 0));
        if (branch_taken_0x160d78) {
            ctx->pc = 0x1609ECu;
            goto label_1609ec;
        }
    }
    ctx->pc = 0x160D80u;
    // 0x160d80: 0x8e420000
    ctx->pc = 0x160d80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x160d84: 0x30420001
    ctx->pc = 0x160d84u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x160d88: 0x14400007
    ctx->pc = 0x160D88u;
    {
        const bool branch_taken_0x160d88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x160D8Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x160d88) {
            ctx->pc = 0x160DA8u;
            goto label_160da8;
        }
    }
    ctx->pc = 0x160D90u;
    // 0x160d90: 0x24030001
    ctx->pc = 0x160d90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160d94: 0xae03a47c
    ctx->pc = 0x160d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943868), GPR_U32(ctx, 3));
    // 0x160d98: 0x8e420000
    ctx->pc = 0x160d98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x160d9c: 0x30420001
    ctx->pc = 0x160d9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x160da0: 0x1040000c
    ctx->pc = 0x160DA0u;
    {
        const bool branch_taken_0x160da0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x160DA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x160da0) {
            ctx->pc = 0x160DD4u;
            goto label_160dd4;
        }
    }
    ctx->pc = 0x160DA8u;
label_160da8:
    // 0x160da8: 0x8c43a3f8
    ctx->pc = 0x160da8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943736)));
    // 0x160dac: 0x1460000a
    ctx->pc = 0x160DACu;
    {
        const bool branch_taken_0x160dac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x160DB0u;
        SET_GPR_U32(ctx, 7, ((uint32_t)35 << 16));
        if (branch_taken_0x160dac) {
            ctx->pc = 0x160DD8u;
            goto label_160dd8;
        }
    }
    ctx->pc = 0x160DB4u;
    // 0x160db4: 0xae200014
    ctx->pc = 0x160db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x160db8: 0xae200010
    ctx->pc = 0x160db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x160dbc: 0xae200004
    ctx->pc = 0x160dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x160dc0: 0xae200000
    ctx->pc = 0x160dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x160dc4: 0xae20001c
    ctx->pc = 0x160dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x160dc8: 0xae200018
    ctx->pc = 0x160dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x160dcc: 0xae20000c
    ctx->pc = 0x160dccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x160dd0: 0xae200008
    ctx->pc = 0x160dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_160dd4:
    // 0x160dd4: 0x3c070023
    ctx->pc = 0x160dd4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)35 << 16));
label_160dd8:
    // 0x160dd8: 0x24020002
    ctx->pc = 0x160dd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x160ddc: 0x8ce4a3bc
    ctx->pc = 0x160ddcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 4294943676)));
    // 0x160de0: 0x14820018
    ctx->pc = 0x160DE0u;
    {
        const bool branch_taken_0x160de0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x160DE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x160de0) {
            ctx->pc = 0x160E44u;
            goto label_160e44;
        }
    }
    ctx->pc = 0x160DE8u;
    // 0x160de8: 0x8e420000
    ctx->pc = 0x160de8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x160dec: 0x30420009
    ctx->pc = 0x160decu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 9));
    // 0x160df0: 0x14400014
    ctx->pc = 0x160DF0u;
    {
        const bool branch_taken_0x160df0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x160DF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x160df0) {
            ctx->pc = 0x160E44u;
            goto label_160e44;
        }
    }
    ctx->pc = 0x160DF8u;
    // 0x160df8: 0xae200000
    ctx->pc = 0x160df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x160dfc: 0x3c050023
    ctx->pc = 0x160dfcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x160e00: 0xae200010
    ctx->pc = 0x160e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x160e04: 0x24030003
    ctx->pc = 0x160e04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x160e08: 0xae200014
    ctx->pc = 0x160e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x160e0c: 0x8ca2a3ec
    ctx->pc = 0x160e0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294943724)));
    // 0x160e10: 0x14430003
    ctx->pc = 0x160E10u;
    {
        const bool branch_taken_0x160e10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x160E14u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x160e10) {
            ctx->pc = 0x160E20u;
            goto label_160e20;
        }
    }
    ctx->pc = 0x160E18u;
    // 0x160e18: 0x10000009
    ctx->pc = 0x160E18u;
    {
        const bool branch_taken_0x160e18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x160E1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x160e18) {
            ctx->pc = 0x160E40u;
            goto label_160e40;
        }
    }
    ctx->pc = 0x160E20u;
label_160e20:
    // 0x160e20: 0x24030001
    ctx->pc = 0x160e20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x160e24: 0x3c060023
    ctx->pc = 0x160e24u;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x160e28: 0xaea30000
    ctx->pc = 0x160e28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x160e2c: 0x8cc2a3ec
    ctx->pc = 0x160e2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4294943724)));
    // 0x160e30: 0x8fa70014
    ctx->pc = 0x160e30u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x160e34: 0x38420002
    ctx->pc = 0x160e34u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2));
    // 0x160e38: 0x2c420001
    ctx->pc = 0x160e38u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x160e3c: 0xace20000
    ctx->pc = 0x160e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_160e40:
    // 0x160e40: 0x24020001
    ctx->pc = 0x160e40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_160e44:
    // 0x160e44: 0xdfbf00b0
    ctx->pc = 0x160e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x160e48: 0xdfbe00a0
    ctx->pc = 0x160e48u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x160e4c: 0xdfb70090
    ctx->pc = 0x160e4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x160e50: 0xdfb60080
    ctx->pc = 0x160e50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160e54: 0xdfb50070
    ctx->pc = 0x160e54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x160e58: 0xdfb40060
    ctx->pc = 0x160e58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x160e5c: 0xdfb30050
    ctx->pc = 0x160e5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160e60: 0xdfb20040
    ctx->pc = 0x160e60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160e64: 0xdfb10030
    ctx->pc = 0x160e64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160e68: 0xdfb00020
    ctx->pc = 0x160e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160e6c: 0x3e00008
    ctx->pc = 0x160E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160E70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1609ECu: goto label_1609ec;
            case 0x1609F4u: goto label_1609f4;
            case 0x160A1Cu: goto label_160a1c;
            case 0x160A2Cu: goto label_160a2c;
            case 0x160A58u: goto label_160a58;
            case 0x160A5Cu: goto label_160a5c;
            case 0x160A8Cu: goto label_160a8c;
            case 0x160AA0u: goto label_160aa0;
            case 0x160AC0u: goto label_160ac0;
            case 0x160B04u: goto label_160b04;
            case 0x160B08u: goto label_160b08;
            case 0x160B34u: goto label_160b34;
            case 0x160B54u: goto label_160b54;
            case 0x160BA0u: goto label_160ba0;
            case 0x160BCCu: goto label_160bcc;
            case 0x160BD0u: goto label_160bd0;
            case 0x160C38u: goto label_160c38;
            case 0x160C64u: goto label_160c64;
            case 0x160C68u: goto label_160c68;
            case 0x160C98u: goto label_160c98;
            case 0x160C9Cu: goto label_160c9c;
            case 0x160D50u: goto label_160d50;
            case 0x160D78u: goto label_160d78;
            case 0x160DA8u: goto label_160da8;
            case 0x160DD4u: goto label_160dd4;
            case 0x160DD8u: goto label_160dd8;
            case 0x160E20u: goto label_160e20;
            case 0x160E40u: goto label_160e40;
            case 0x160E44u: goto label_160e44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x160E74u;
}
