#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADX_DecodeInfoWav
// Address: 0x168ae0 - 0x168d4c
void ADX_DecodeInfoWav_0x168ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADX_DecodeInfoWav");


    ctx->pc = 0x168ae0u;

    // 0x168ae0: 0x27bdff50
    ctx->pc = 0x168ae0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x168ae4: 0xffbe0090
    ctx->pc = 0x168ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x168ae8: 0xffb70080
    ctx->pc = 0x168ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x168aec: 0xe0f02d
    ctx->pc = 0x168aecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168af0: 0xffb60070
    ctx->pc = 0x168af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x168af4: 0xc0b82d
    ctx->pc = 0x168af4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168af8: 0xffb50060
    ctx->pc = 0x168af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x168afc: 0x120b02d
    ctx->pc = 0x168afcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b00: 0xffb40050
    ctx->pc = 0x168b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x168b04: 0x140a82d
    ctx->pc = 0x168b04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b08: 0xffb20030
    ctx->pc = 0x168b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x168b0c: 0x100a02d
    ctx->pc = 0x168b0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b10: 0xffb10020
    ctx->pc = 0x168b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x168b14: 0x80902d
    ctx->pc = 0x168b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b18: 0xffb00010
    ctx->pc = 0x168b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x168b1c: 0xa0882d
    ctx->pc = 0x168b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b20: 0xafab0000
    ctx->pc = 0x168b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x168b24: 0x802d
    ctx->pc = 0x168b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b28: 0xffbf00a0
    ctx->pc = 0x168b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x168b2c: 0xffb30040
    ctx->pc = 0x168b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_168b30:
    // 0x168b30: 0x211102a
    ctx->pc = 0x168b30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x168b34: 0x10400006
    ctx->pc = 0x168B34u;
    {
        const bool branch_taken_0x168b34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x168B38u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
        if (branch_taken_0x168b34) {
            ctx->pc = 0x168B50u;
            goto label_168b50;
        }
    }
    ctx->pc = 0x168B3Cu;
    // 0x168b3c: 0x2502021
    ctx->pc = 0x168b3cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x168b40: 0xc050c6a
    ctx->pc = 0x168B40u;
    SET_GPR_U32(ctx, 31, 0x168B48u);
    ctx->pc = 0x168B44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B48u; }
        else if (ctx->pc != 0x168B48u) { ctx->pc = 0x168B48u; }
    }
    if (ctx->pc != 0x168B48u) { return; }
    ctx->pc = 0x168B48u;
    // 0x168b48: 0x5440fff9
    ctx->pc = 0x168B48u;
    {
        const bool branch_taken_0x168b48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x168b48) {
            ctx->pc = 0x168B4Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x168B30u;
            goto label_168b30;
        }
    }
    ctx->pc = 0x168B50u;
label_168b50:
    // 0x168b50: 0x12110072
    ctx->pc = 0x168B50u;
    {
        const bool branch_taken_0x168b50 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 17));
        ctx->pc = 0x168B54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x168b50) {
            ctx->pc = 0x168D1Cu;
            goto label_168d1c;
        }
    }
    ctx->pc = 0x168B58u;
    // 0x168b58: 0x32020003
    ctx->pc = 0x168b58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 3));
    // 0x168b5c: 0x1440006f
    ctx->pc = 0x168B5Cu;
    {
        const bool branch_taken_0x168b5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x168B60u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x168b5c) {
            ctx->pc = 0x168D1Cu;
            goto label_168d1c;
        }
    }
    ctx->pc = 0x168B64u;
    // 0x168b64: 0x26030008
    ctx->pc = 0x168b64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 8));
    // 0x168b68: 0x2439821
    ctx->pc = 0x168b68u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x168b6c: 0x96620000
    ctx->pc = 0x168b6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x168b70: 0x2c420002
    ctx->pc = 0x168b70u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x168b74: 0x10400064
    ctx->pc = 0x168B74u;
    {
        const bool branch_taken_0x168b74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x168B78u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x168b74) {
            ctx->pc = 0x168D08u;
            goto label_168d08;
        }
    }
    ctx->pc = 0x168B7Cu;
    // 0x168b7c: 0x0
    ctx->pc = 0x168b7cu;
    // NOP
label_168b80:
    // 0x168b80: 0x211102a
    ctx->pc = 0x168b80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x168b84: 0x10400006
    ctx->pc = 0x168B84u;
    {
        const bool branch_taken_0x168b84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x168B88u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
        if (branch_taken_0x168b84) {
            ctx->pc = 0x168BA0u;
            goto label_168ba0;
        }
    }
    ctx->pc = 0x168B8Cu;
    // 0x168b8c: 0x2502021
    ctx->pc = 0x168b8cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x168b90: 0xc050c6a
    ctx->pc = 0x168B90u;
    SET_GPR_U32(ctx, 31, 0x168B98u);
    ctx->pc = 0x168B94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1431A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x1431a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168B98u; }
        else if (ctx->pc != 0x168B98u) { ctx->pc = 0x168B98u; }
    }
    if (ctx->pc != 0x168B98u) { return; }
    ctx->pc = 0x168B98u;
    // 0x168b98: 0x5440fff9
    ctx->pc = 0x168B98u;
    {
        const bool branch_taken_0x168b98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x168b98) {
            ctx->pc = 0x168B9Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x168B80u;
            goto label_168b80;
        }
    }
    ctx->pc = 0x168BA0u;
label_168ba0:
    // 0x168ba0: 0x1211005e
    ctx->pc = 0x168BA0u;
    {
        const bool branch_taken_0x168ba0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 17));
        ctx->pc = 0x168BA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x168ba0) {
            ctx->pc = 0x168D1Cu;
            goto label_168d1c;
        }
    }
    ctx->pc = 0x168BA8u;
    // 0x168ba8: 0x26020004
    ctx->pc = 0x168ba8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4));
    // 0x168bac: 0x26040008
    ctx->pc = 0x168bacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 8));
    // 0x168bb0: 0x2424021
    ctx->pc = 0x168bb0u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x168bb4: 0x2405ffff
    ctx->pc = 0x168bb4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168bb8: 0x91060001
    ctx->pc = 0x168bb8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x168bbc: 0x24090001
    ctx->pc = 0x168bbcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    // 0x168bc0: 0x91070000
    ctx->pc = 0x168bc0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x168bc4: 0x240a0010
    ctx->pc = 0x168bc4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 16));
    // 0x168bc8: 0x91030003
    ctx->pc = 0x168bc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x168bcc: 0x63200
    ctx->pc = 0x168bccu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
    // 0x168bd0: 0x91020002
    ctx->pc = 0x168bd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x168bd4: 0xa6e40000
    ctx->pc = 0x168bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x168bd8: 0x31e00
    ctx->pc = 0x168bd8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x168bdc: 0xa3c50000
    ctx->pc = 0x168bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x168be0: 0x21400
    ctx->pc = 0x168be0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x168be4: 0x26680004
    ctx->pc = 0x168be4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 19), 4));
    // 0x168be8: 0xe33825
    ctx->pc = 0x168be8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x168bec: 0x461025
    ctx->pc = 0x168becu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x168bf0: 0x91050001
    ctx->pc = 0x168bf0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x168bf4: 0x91040003
    ctx->pc = 0x168bf4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x168bf8: 0xe23825
    ctx->pc = 0x168bf8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x168bfc: 0x91030002
    ctx->pc = 0x168bfcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x168c00: 0x52a00
    ctx->pc = 0x168c00u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 8));
    // 0x168c04: 0x92620004
    ctx->pc = 0x168c04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x168c08: 0x42600
    ctx->pc = 0x168c08u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
    // 0x168c0c: 0x31c00
    ctx->pc = 0x168c0cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x168c10: 0x651825
    ctx->pc = 0x168c10u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x168c14: 0x441025
    ctx->pc = 0x168c14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x168c18: 0x431025
    ctx->pc = 0x168c18u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168c1c: 0x8fa30000
    ctx->pc = 0x168c1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168c20: 0xac620000
    ctx->pc = 0x168c20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x168c24: 0x92630002
    ctx->pc = 0x168c24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x168c28: 0xa2a30000
    ctx->pc = 0x168c28u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x168c2c: 0x9262000e
    ctx->pc = 0x168c2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x168c30: 0xa2820000
    ctx->pc = 0x168c30u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x168c34: 0x9263000c
    ctx->pc = 0x168c34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x168c38: 0x31600
    ctx->pc = 0x168c38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
    // 0x168c3c: 0xa2c30000
    ctx->pc = 0x168c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x168c40: 0x21603
    ctx->pc = 0x168c40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x168c44: 0xe2001a
    ctx->pc = 0x168c44u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x168c48: 0x50400001
    ctx->pc = 0x168C48u;
    {
        const bool branch_taken_0x168c48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x168c48) {
            ctx->pc = 0x168C4Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x168C50u;
            goto label_168c50;
        }
    }
    ctx->pc = 0x168C50u;
label_168c50:
    // 0x168c50: 0x8fa200b0
    ctx->pc = 0x168c50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168c54: 0x1812
    ctx->pc = 0x168c54u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x168c58: 0xac430000
    ctx->pc = 0x168c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x168c5c: 0x8fa300b8
    ctx->pc = 0x168c5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x168c60: 0xac690000
    ctx->pc = 0x168c60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x168c64: 0x82850000
    ctx->pc = 0x168c64u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x168c68: 0x14aa0004
    ctx->pc = 0x168C68u;
    {
        const bool branch_taken_0x168c68 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 10));
        ctx->pc = 0x168C6Cu;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        if (branch_taken_0x168c68) {
            ctx->pc = 0x168C7Cu;
            goto label_168c7c;
        }
    }
    ctx->pc = 0x168C70u;
    // 0x168c70: 0x8fa200c0
    ctx->pc = 0x168c70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x168c74: 0x10000019
    ctx->pc = 0x168C74u;
    {
        const bool branch_taken_0x168c74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x168C78u;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x168c74) {
            ctx->pc = 0x168CDCu;
            goto label_168cdc;
        }
    }
    ctx->pc = 0x168C7Cu;
label_168c7c:
    // 0x168c7c: 0x24020008
    ctx->pc = 0x168c7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x168c80: 0x14a20004
    ctx->pc = 0x168C80u;
    {
        const bool branch_taken_0x168c80 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x168C84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x168c80) {
            ctx->pc = 0x168C94u;
            goto label_168c94;
        }
    }
    ctx->pc = 0x168C88u;
    // 0x168c88: 0x8fa300c0
    ctx->pc = 0x168c88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x168c8c: 0x10000013
    ctx->pc = 0x168C8Cu;
    {
        const bool branch_taken_0x168c8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x168C90u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 9));
        if (branch_taken_0x168c8c) {
            ctx->pc = 0x168CDCu;
            goto label_168cdc;
        }
    }
    ctx->pc = 0x168C94u;
label_168c94:
    // 0x168c94: 0x14a20012
    ctx->pc = 0x168C94u;
    {
        const bool branch_taken_0x168c94 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x168C98u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x168c94) {
            ctx->pc = 0x168CE0u;
            goto label_168ce0;
        }
    }
    ctx->pc = 0x168C9Cu;
    // 0x168c9c: 0x82a20000
    ctx->pc = 0x168c9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168ca0: 0x71842
    ctx->pc = 0x168ca0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 7), 1));
    // 0x168ca4: 0x21040
    ctx->pc = 0x168ca4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x168ca8: 0xa2c20000
    ctx->pc = 0x168ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x168cac: 0x8fa200b8
    ctx->pc = 0x168cacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x168cb0: 0xac450000
    ctx->pc = 0x168cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x168cb4: 0x82a20000
    ctx->pc = 0x168cb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168cb8: 0x62001b
    ctx->pc = 0x168cb8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = GPR_U32(ctx, 3) / divisor; ctx->hi = GPR_U32(ctx, 2) % divisor; } else { ctx->lo = 0xFFFFFFFF; ctx->hi = GPR_U32(ctx,3); } }
    // 0x168cbc: 0x50400001
    ctx->pc = 0x168CBCu;
    {
        const bool branch_taken_0x168cbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x168cbc) {
            ctx->pc = 0x168CC0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x168CC4u;
            goto label_168cc4;
        }
    }
    ctx->pc = 0x168CC4u;
label_168cc4:
    // 0x168cc4: 0x8fa200b0
    ctx->pc = 0x168cc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x168cc8: 0x1812
    ctx->pc = 0x168cc8u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x168ccc: 0xac430000
    ctx->pc = 0x168cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x168cd0: 0xa28a0000
    ctx->pc = 0x168cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x168cd4: 0x8fa300c0
    ctx->pc = 0x168cd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x168cd8: 0xa4640000
    ctx->pc = 0x168cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_168cdc:
    // 0x168cdc: 0x92830000
    ctx->pc = 0x168cdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_168ce0:
    // 0x168ce0: 0x1060000e
    ctx->pc = 0x168CE0u;
    {
        const bool branch_taken_0x168ce0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x168CE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x168ce0) {
            ctx->pc = 0x168D1Cu;
            goto label_168d1c;
        }
    }
    ctx->pc = 0x168CE8u;
    // 0x168ce8: 0x82c20000
    ctx->pc = 0x168ce8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x168cec: 0x1040000b
    ctx->pc = 0x168CECu;
    {
        const bool branch_taken_0x168cec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x168CF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x168cec) {
            ctx->pc = 0x168D1Cu;
            goto label_168d1c;
        }
    }
    ctx->pc = 0x168CF4u;
    // 0x168cf4: 0x92a20000
    ctx->pc = 0x168cf4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x168cf8: 0x2442ffff
    ctx->pc = 0x168cf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x168cfc: 0x2c420002
    ctx->pc = 0x168cfcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x168d00: 0x14400003
    ctx->pc = 0x168D00u;
    {
        const bool branch_taken_0x168d00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x168D04u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x168d00) {
            ctx->pc = 0x168D10u;
            goto label_168d10;
        }
    }
    ctx->pc = 0x168D08u;
label_168d08:
    // 0x168d08: 0x10000004
    ctx->pc = 0x168D08u;
    {
        const bool branch_taken_0x168d08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x168D0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x168d08) {
            ctx->pc = 0x168D1Cu;
            goto label_168d1c;
        }
    }
    ctx->pc = 0x168D10u;
label_168d10:
    // 0x168d10: 0x8c430000
    ctx->pc = 0x168d10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168d14: 0x2402ffff
    ctx->pc = 0x168d14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168d18: 0x3100b
    ctx->pc = 0x168d18u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
label_168d1c:
    // 0x168d1c: 0xdfbf00a0
    ctx->pc = 0x168d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x168d20: 0xdfbe0090
    ctx->pc = 0x168d20u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x168d24: 0xdfb70080
    ctx->pc = 0x168d24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x168d28: 0xdfb60070
    ctx->pc = 0x168d28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x168d2c: 0xdfb50060
    ctx->pc = 0x168d2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x168d30: 0xdfb40050
    ctx->pc = 0x168d30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x168d34: 0xdfb30040
    ctx->pc = 0x168d34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168d38: 0xdfb20030
    ctx->pc = 0x168d38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168d3c: 0xdfb10020
    ctx->pc = 0x168d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168d40: 0xdfb00010
    ctx->pc = 0x168d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168d44: 0x3e00008
    ctx->pc = 0x168D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168D48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168B30u: goto label_168b30;
            case 0x168B50u: goto label_168b50;
            case 0x168B80u: goto label_168b80;
            case 0x168BA0u: goto label_168ba0;
            case 0x168C50u: goto label_168c50;
            case 0x168C7Cu: goto label_168c7c;
            case 0x168C94u: goto label_168c94;
            case 0x168CC4u: goto label_168cc4;
            case 0x168CDCu: goto label_168cdc;
            case 0x168CE0u: goto label_168ce0;
            case 0x168D08u: goto label_168d08;
            case 0x168D10u: goto label_168d10;
            case 0x168D1Cu: goto label_168d1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168D4Cu;
}
