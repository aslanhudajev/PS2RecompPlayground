#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _multiply
// Address: 0x143980 - 0x143bac
void _multiply_0x143980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_multiply");


    ctx->pc = 0x143980u;

    // 0x143980: 0x27bdff90
    ctx->pc = 0x143980u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x143984: 0xffb10010
    ctx->pc = 0x143984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x143988: 0xffb00000
    ctx->pc = 0x143988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14398c: 0xc0882d
    ctx->pc = 0x14398cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143990: 0xffbf0060
    ctx->pc = 0x143990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x143994: 0xa0802d
    ctx->pc = 0x143994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143998: 0xffb50050
    ctx->pc = 0x143998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x14399c: 0xffb40040
    ctx->pc = 0x14399cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1439a0: 0xffb30030
    ctx->pc = 0x1439a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1439a4: 0xffb20020
    ctx->pc = 0x1439a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1439a8: 0x8e120010
    ctx->pc = 0x1439a8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1439ac: 0x8e330010
    ctx->pc = 0x1439acu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1439b0: 0x253102a
    ctx->pc = 0x1439b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 19)));
    // 0x1439b4: 0x10400005
    ctx->pc = 0x1439B4u;
    {
        const bool branch_taken_0x1439b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1439B8u;
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1439b4) {
            ctx->pc = 0x1439CCu;
            goto label_1439cc;
        }
    }
    ctx->pc = 0x1439BCu;
    // 0x1439bc: 0x220802d
    ctx->pc = 0x1439bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1439c0: 0x320882d
    ctx->pc = 0x1439c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1439c4: 0x8e120010
    ctx->pc = 0x1439c4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1439c8: 0x8e330010
    ctx->pc = 0x1439c8u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1439cc:
    // 0x1439cc: 0x8e050008
    ctx->pc = 0x1439ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1439d0: 0x253a021
    ctx->pc = 0x1439d0u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1439d4: 0x8e020004
    ctx->pc = 0x1439d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1439d8: 0xb4282a
    ctx->pc = 0x1439d8u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 20)));
    // 0x1439dc: 0xc050d32
    ctx->pc = 0x1439DCu;
    SET_GPR_U32(ctx, 31, 0x1439E4u);
    ctx->pc = 0x1439E0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x1434C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1434c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1439E4u; }
        else if (ctx->pc != 0x1439E4u) { ctx->pc = 0x1439E4u; }
    }
    if (ctx->pc != 0x1439E4u) { return; }
    ctx->pc = 0x1439E4u;
    // 0x1439e4: 0x40c82d
    ctx->pc = 0x1439e4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1439e8: 0x14a880
    ctx->pc = 0x1439e8u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 20), 2));
    // 0x1439ec: 0x27380014
    ctx->pc = 0x1439ecu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 25), 20));
    // 0x1439f0: 0x3152021
    ctx->pc = 0x1439f0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x1439f4: 0x304102b
    ctx->pc = 0x1439f4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x1439f8: 0x1040000e
    ctx->pc = 0x1439F8u;
    {
        const bool branch_taken_0x1439f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1439FCu;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1439f8) {
            ctx->pc = 0x143A34u;
            goto label_143a34;
        }
    }
    ctx->pc = 0x143A00u;
    // 0x143a00: 0x260e0014
    ctx->pc = 0x143a00u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 16), 20));
    // 0x143a04: 0x122880
    ctx->pc = 0x143a04u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 18), 2));
    // 0x143a08: 0x26260014
    ctx->pc = 0x143a08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 20));
    // 0x143a0c: 0x131880
    ctx->pc = 0x143a0cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_143a10:
    // 0x143a10: 0xad200000
    ctx->pc = 0x143a10u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x143a14: 0x25290004
    ctx->pc = 0x143a14u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
    // 0x143a18: 0x124102b
    ctx->pc = 0x143a18u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x143a1c: 0x0
    ctx->pc = 0x143a1cu;
    // NOP
    // 0x143a20: 0x0
    ctx->pc = 0x143a20u;
    // NOP
    // 0x143a24: 0x1440fffa
    ctx->pc = 0x143A24u;
    {
        const bool branch_taken_0x143a24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x143a24) {
            ctx->pc = 0x143A10u;
            goto label_143a10;
        }
    }
    ctx->pc = 0x143A2Cu;
    // 0x143a2c: 0x10000006
    ctx->pc = 0x143A2Cu;
    {
        const bool branch_taken_0x143a2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x143A30u;
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x143a2c) {
            ctx->pc = 0x143A48u;
            goto label_143a48;
        }
    }
    ctx->pc = 0x143A34u;
label_143a34:
    // 0x143a34: 0x260e0014
    ctx->pc = 0x143a34u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 16), 20));
    // 0x143a38: 0x122880
    ctx->pc = 0x143a38u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 18), 2));
    // 0x143a3c: 0x26260014
    ctx->pc = 0x143a3cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 20));
    // 0x143a40: 0x131880
    ctx->pc = 0x143a40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x143a44: 0xc0602d
    ctx->pc = 0x143a44u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_143a48:
    // 0x143a48: 0x1c58821
    ctx->pc = 0x143a48u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x143a4c: 0x1839021
    ctx->pc = 0x143a4cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x143a50: 0x192102b
    ctx->pc = 0x143a50u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 12), GPR_U32(ctx, 18)));
    // 0x143a54: 0x10400043
    ctx->pc = 0x143A54u;
    {
        const bool branch_taken_0x143a54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x143A58u;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x143a54) {
            ctx->pc = 0x143B64u;
            goto label_143b64;
        }
    }
    ctx->pc = 0x143A5Cu;
    // 0x143a5c: 0x0
    ctx->pc = 0x143a5cu;
    // NOP
label_143a60:
    // 0x143a60: 0x8d820000
    ctx->pc = 0x143a60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x143a64: 0x304affff
    ctx->pc = 0x143a64u;
    SET_GPR_U32(ctx, 10, AND32(GPR_U32(ctx, 2), 65535));
    // 0x143a68: 0x1140001c
    ctx->pc = 0x143A68u;
    {
        const bool branch_taken_0x143a68 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x143A6Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x143a68) {
            ctx->pc = 0x143ADCu;
            goto label_143adc;
        }
    }
    ctx->pc = 0x143A70u;
    // 0x143a70: 0x1c0482d
    ctx->pc = 0x143a70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143a74: 0x582d
    ctx->pc = 0x143a74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143a78: 0x25900004
    ctx->pc = 0x143a78u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 12), 4));
    // 0x143a7c: 0x250f0004
    ctx->pc = 0x143a7cu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 8), 4));
label_143a80:
    // 0x143a80: 0x8d230000
    ctx->pc = 0x143a80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x143a84: 0x8d040000
    ctx->pc = 0x143a84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x143a88: 0x25290004
    ctx->pc = 0x143a88u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
    // 0x143a8c: 0x3062ffff
    ctx->pc = 0x143a8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 65535));
    // 0x143a90: 0x131302b
    ctx->pc = 0x143a90u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x143a94: 0x4a1018
    ctx->pc = 0x143a94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x143a98: 0x31c02
    ctx->pc = 0x143a98u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 16));
    // 0x143a9c: 0x706a1818
    ctx->pc = 0x143a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x143aa0: 0x3085ffff
    ctx->pc = 0x143aa0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 65535));
    // 0x143aa4: 0x42402
    ctx->pc = 0x143aa4u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 16));
    // 0x143aa8: 0x451021
    ctx->pc = 0x143aa8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x143aac: 0x4b1021
    ctx->pc = 0x143aacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x143ab0: 0x641821
    ctx->pc = 0x143ab0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x143ab4: 0x25c02
    ctx->pc = 0x143ab4u;
    SET_GPR_U32(ctx, 11, SRL32(GPR_U32(ctx, 2), 16));
    // 0x143ab8: 0xa5020000
    ctx->pc = 0x143ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x143abc: 0x6b3821
    ctx->pc = 0x143abcu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x143ac0: 0xa5070002
    ctx->pc = 0x143ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x143ac4: 0x75c02
    ctx->pc = 0x143ac4u;
    SET_GPR_U32(ctx, 11, SRL32(GPR_U32(ctx, 7), 16));
    // 0x143ac8: 0x14c0ffed
    ctx->pc = 0x143AC8u;
    {
        const bool branch_taken_0x143ac8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x143ACCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
        if (branch_taken_0x143ac8) {
            ctx->pc = 0x143A80u;
            goto label_143a80;
        }
    }
    ctx->pc = 0x143AD0u;
    // 0x143ad0: 0xad0b0000
    ctx->pc = 0x143ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x143ad4: 0x10000003
    ctx->pc = 0x143AD4u;
    {
        const bool branch_taken_0x143ad4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x143AD8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 0)));
        if (branch_taken_0x143ad4) {
            ctx->pc = 0x143AE4u;
            goto label_143ae4;
        }
    }
    ctx->pc = 0x143ADCu;
label_143adc:
    // 0x143adc: 0x25900004
    ctx->pc = 0x143adcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 12), 4));
    // 0x143ae0: 0x25af0004
    ctx->pc = 0x143ae0u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 13), 4));
label_143ae4:
    // 0x143ae4: 0x25402
    ctx->pc = 0x143ae4u;
    SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 2), 16));
    // 0x143ae8: 0x1140001a
    ctx->pc = 0x143AE8u;
    {
        const bool branch_taken_0x143ae8 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x143AECu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x143ae8) {
            ctx->pc = 0x143B54u;
            goto label_143b54;
        }
    }
    ctx->pc = 0x143AF0u;
    // 0x143af0: 0x1c0482d
    ctx->pc = 0x143af0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143af4: 0x8d070000
    ctx->pc = 0x143af4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x143af8: 0x582d
    ctx->pc = 0x143af8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143afc: 0xe0102d
    ctx->pc = 0x143afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_143b00:
    // 0x143b00: 0x8d240000
    ctx->pc = 0x143b00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x143b04: 0x21c02
    ctx->pc = 0x143b04u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 16));
    // 0x143b08: 0xa5070000
    ctx->pc = 0x143b08u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x143b0c: 0x25290004
    ctx->pc = 0x143b0cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
    // 0x143b10: 0x3082ffff
    ctx->pc = 0x143b10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 65535));
    // 0x143b14: 0x131282b
    ctx->pc = 0x143b14u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x143b18: 0x4a1018
    ctx->pc = 0x143b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x143b1c: 0x42402
    ctx->pc = 0x143b1cu;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 16));
    // 0x143b20: 0x708a2018
    ctx->pc = 0x143b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x143b24: 0x431021
    ctx->pc = 0x143b24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x143b28: 0x4b1021
    ctx->pc = 0x143b28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x143b2c: 0xa5020002
    ctx->pc = 0x143b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x143b30: 0x25c02
    ctx->pc = 0x143b30u;
    SET_GPR_U32(ctx, 11, SRL32(GPR_U32(ctx, 2), 16));
    // 0x143b34: 0x25080004
    ctx->pc = 0x143b34u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x143b38: 0x8d020000
    ctx->pc = 0x143b38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x143b3c: 0x3043ffff
    ctx->pc = 0x143b3cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 65535));
    // 0x143b40: 0x832021
    ctx->pc = 0x143b40u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x143b44: 0x8b3821
    ctx->pc = 0x143b44u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x143b48: 0x14a0ffed
    ctx->pc = 0x143B48u;
    {
        const bool branch_taken_0x143b48 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x143B4Cu;
        SET_GPR_U32(ctx, 11, SRL32(GPR_U32(ctx, 7), 16));
        if (branch_taken_0x143b48) {
            ctx->pc = 0x143B00u;
            goto label_143b00;
        }
    }
    ctx->pc = 0x143B50u;
    // 0x143b50: 0xad070000
    ctx->pc = 0x143b50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_143b54:
    // 0x143b54: 0x200602d
    ctx->pc = 0x143b54u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b58: 0x192102b
    ctx->pc = 0x143b58u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 12), GPR_U32(ctx, 18)));
    // 0x143b5c: 0x1440ffc0
    ctx->pc = 0x143B5Cu;
    {
        const bool branch_taken_0x143b5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x143B60u;
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x143b5c) {
            ctx->pc = 0x143A60u;
            goto label_143a60;
        }
    }
    ctx->pc = 0x143B64u;
label_143b64:
    // 0x143b64: 0x3154021
    ctx->pc = 0x143b64u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
label_143b68:
    // 0x143b68: 0x5a800006
    ctx->pc = 0x143B68u;
    {
        const bool branch_taken_0x143b68 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x143b68) {
            ctx->pc = 0x143B6Cu;
            WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
            ctx->pc = 0x143B84u;
            goto label_143b84;
        }
    }
    ctx->pc = 0x143B70u;
    // 0x143b70: 0x2508fffc
    ctx->pc = 0x143b70u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x143b74: 0x8d020000
    ctx->pc = 0x143b74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x143b78: 0x5040fffb
    ctx->pc = 0x143B78u;
    {
        const bool branch_taken_0x143b78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x143b78) {
            ctx->pc = 0x143B7Cu;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->pc = 0x143B68u;
            goto label_143b68;
        }
    }
    ctx->pc = 0x143B80u;
    // 0x143b80: 0xaf340010
    ctx->pc = 0x143b80u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
label_143b84:
    // 0x143b84: 0x320102d
    ctx->pc = 0x143b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b88: 0xdfbf0060
    ctx->pc = 0x143b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x143b8c: 0xdfb50050
    ctx->pc = 0x143b8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143b90: 0xdfb40040
    ctx->pc = 0x143b90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143b94: 0xdfb30030
    ctx->pc = 0x143b94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143b98: 0xdfb20020
    ctx->pc = 0x143b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143b9c: 0xdfb10010
    ctx->pc = 0x143b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143ba0: 0xdfb00000
    ctx->pc = 0x143ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143ba4: 0x3e00008
    ctx->pc = 0x143BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143BA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1439CCu: goto label_1439cc;
            case 0x143A10u: goto label_143a10;
            case 0x143A34u: goto label_143a34;
            case 0x143A48u: goto label_143a48;
            case 0x143A60u: goto label_143a60;
            case 0x143A80u: goto label_143a80;
            case 0x143ADCu: goto label_143adc;
            case 0x143AE4u: goto label_143ae4;
            case 0x143B00u: goto label_143b00;
            case 0x143B54u: goto label_143b54;
            case 0x143B64u: goto label_143b64;
            case 0x143B68u: goto label_143b68;
            case 0x143B84u: goto label_143b84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143BACu;
}
