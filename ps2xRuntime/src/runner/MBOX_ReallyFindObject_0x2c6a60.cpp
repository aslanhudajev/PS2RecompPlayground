#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_ReallyFindObject
// Address: 0x2c6a60 - 0x2c6bd0
void MBOX_ReallyFindObject_0x2c6a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c6a60u;

    // 0x2c6a60: 0x27bdff70
    ctx->pc = 0x2c6a60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c6a64: 0xffbf0080
    ctx->pc = 0x2c6a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2c6a68: 0xffb70070
    ctx->pc = 0x2c6a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2c6a6c: 0xffb60060
    ctx->pc = 0x2c6a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2c6a70: 0xffb50050
    ctx->pc = 0x2c6a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2c6a74: 0xffb40040
    ctx->pc = 0x2c6a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c6a78: 0xffb30030
    ctx->pc = 0x2c6a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c6a7c: 0xffb20020
    ctx->pc = 0x2c6a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c6a80: 0xffb10010
    ctx->pc = 0x2c6a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c6a84: 0xffb00000
    ctx->pc = 0x2c6a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c6a88: 0x80b82d
    ctx->pc = 0x2c6a88u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a8c: 0x3c020036
    ctx->pc = 0x2c6a8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c6a90: 0x8c53dee0
    ctx->pc = 0x2c6a90u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c6a94: 0x2405ffff
    ctx->pc = 0x2c6a94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6a98: 0x2406ffff
    ctx->pc = 0x2c6a98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6a9c: 0xc0b19fe
    ctx->pc = 0x2C6A9Cu;
    SET_GPR_U32(ctx, 31, 0x2C6AA4u);
    ctx->pc = 0x2C6AA0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6AA4u; }
    }
    if (ctx->pc != 0x2C6AA4u) { return; }
    ctx->pc = 0x2C6AA4u;
    // 0x2c6aa4: 0x14400040
    ctx->pc = 0x2C6AA4u;
    {
        const bool branch_taken_0x2c6aa4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C6AA8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2c6aa4) {
            ctx->pc = 0x2C6BA8u;
            goto label_2c6ba8;
        }
    }
    ctx->pc = 0x2C6AACu;
    // 0x2c6aac: 0x3c020038
    ctx->pc = 0x2c6aacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c6ab0: 0x8c42c500
    ctx->pc = 0x2c6ab0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952192)));
    // 0x2c6ab4: 0x1840003a
    ctx->pc = 0x2C6AB4u;
    {
        const bool branch_taken_0x2c6ab4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C6AB8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ab4) {
            ctx->pc = 0x2C6BA0u;
            goto label_2c6ba0;
        }
    }
    ctx->pc = 0x2C6ABCu;
    // 0x2c6abc: 0x8e640038
    ctx->pc = 0x2c6abcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_2c6ac0:
    // 0x2c6ac0: 0x80302d
    ctx->pc = 0x2c6ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ac4: 0x121900
    ctx->pc = 0x2c6ac4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 4));
    // 0x2c6ac8: 0x831021
    ctx->pc = 0x2c6ac8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c6acc: 0x8c420010
    ctx->pc = 0x2c6accu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c6ad0: 0x1440002d
    ctx->pc = 0x2C6AD0u;
    {
        const bool branch_taken_0x2c6ad0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C6AD4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ad0) {
            ctx->pc = 0x2C6B88u;
            goto label_2c6b88;
        }
    }
    ctx->pc = 0x2C6AD8u;
    // 0x2c6ad8: 0x831021
    ctx->pc = 0x2c6ad8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c6adc: 0x8c420004
    ctx->pc = 0x2c6adcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c6ae0: 0x8c42004c
    ctx->pc = 0x2c6ae0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2c6ae4: 0x10400028
    ctx->pc = 0x2C6AE4u;
    {
        const bool branch_taken_0x2c6ae4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C6AE8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ae4) {
            ctx->pc = 0x2C6B88u;
            goto label_2c6b88;
        }
    }
    ctx->pc = 0x2C6AECu;
    // 0x2c6aec: 0x24140018
    ctx->pc = 0x2c6aecu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2c6af0: 0x60a82d
    ctx->pc = 0x2c6af0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6af4: 0x12b400
    ctx->pc = 0x2c6af4u;
    SET_GPR_U32(ctx, 22, SLL32(GPR_U32(ctx, 18), 16));
    // 0x2c6af8: 0xa0802d
    ctx->pc = 0x2c6af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6afc: 0x0
    ctx->pc = 0x2c6afcu;
    // NOP
label_2c6b00:
    // 0x2c6b00: 0xd01021
    ctx->pc = 0x2c6b00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2c6b04: 0x8c420004
    ctx->pc = 0x2c6b04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c6b08: 0x2341818
    ctx->pc = 0x2c6b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c6b0c: 0x8c44005c
    ctx->pc = 0x2c6b0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2c6b10: 0x642021
    ctx->pc = 0x2c6b10u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c6b14: 0xc0bf4b2
    ctx->pc = 0x2C6B14u;
    SET_GPR_U32(ctx, 31, 0x2C6B1Cu);
    ctx->pc = 0x2C6B18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FD2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strstr_0x2fd2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6B1Cu; }
    }
    if (ctx->pc != 0x2C6B1Cu) { return; }
    ctx->pc = 0x2C6B1Cu;
    // 0x2c6b1c: 0x50400012
    ctx->pc = 0x2C6B1Cu;
    {
        const bool branch_taken_0x2c6b1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c6b1c) {
            ctx->pc = 0x2C6B20u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x2C6B68u;
            goto label_2c6b68;
        }
    }
    ctx->pc = 0x2C6B24u;
    // 0x2c6b24: 0x8e620038
    ctx->pc = 0x2c6b24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2c6b28: 0x501021
    ctx->pc = 0x2c6b28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c6b2c: 0x8c420004
    ctx->pc = 0x2c6b2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c6b30: 0x8c42004c
    ctx->pc = 0x2c6b30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2c6b34: 0x54400003
    ctx->pc = 0x2C6B34u;
    {
        const bool branch_taken_0x2c6b34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c6b34) {
            ctx->pc = 0x2C6B38u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->pc = 0x2C6B44u;
            goto label_2c6b44;
        }
    }
    ctx->pc = 0x2C6B3Cu;
    // 0x2c6b3c: 0x10000007
    ctx->pc = 0x2C6B3Cu;
    {
        const bool branch_taken_0x2c6b3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C6B40u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c6b3c) {
            ctx->pc = 0x2C6B5Cu;
            goto label_2c6b5c;
        }
    }
    ctx->pc = 0x2C6B44u;
label_2c6b44:
    // 0x2c6b44: 0x551021
    ctx->pc = 0x2c6b44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2c6b48: 0x8c420004
    ctx->pc = 0x2c6b48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c6b4c: 0x8c43005c
    ctx->pc = 0x2c6b4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2c6b50: 0x2341018
    ctx->pc = 0x2c6b50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c6b54: 0x431021
    ctx->pc = 0x2c6b54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c6b58: 0x84420014
    ctx->pc = 0x2c6b58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
label_2c6b5c:
    // 0x2c6b5c: 0x3042ffff
    ctx->pc = 0x2c6b5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2c6b60: 0x10000010
    ctx->pc = 0x2C6B60u;
    {
        const bool branch_taken_0x2c6b60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C6B64u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        if (branch_taken_0x2c6b60) {
            ctx->pc = 0x2C6BA4u;
            goto label_2c6ba4;
        }
    }
    ctx->pc = 0x2C6B68u;
label_2c6b68:
    // 0x2c6b68: 0x8e660038
    ctx->pc = 0x2c6b68u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2c6b6c: 0x122900
    ctx->pc = 0x2c6b6cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 18), 4));
    // 0x2c6b70: 0xc51021
    ctx->pc = 0x2c6b70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2c6b74: 0x8c420004
    ctx->pc = 0x2c6b74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c6b78: 0x8c42004c
    ctx->pc = 0x2c6b78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x2c6b7c: 0x222102b
    ctx->pc = 0x2c6b7cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c6b80: 0x1440ffdf
    ctx->pc = 0x2C6B80u;
    {
        const bool branch_taken_0x2c6b80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C6B84u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c6b80) {
            ctx->pc = 0x2C6B00u;
            goto label_2c6b00;
        }
    }
    ctx->pc = 0x2C6B88u;
label_2c6b88:
    // 0x2c6b88: 0x26520001
    ctx->pc = 0x2c6b88u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x2c6b8c: 0x3c020038
    ctx->pc = 0x2c6b8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c6b90: 0x8c42c500
    ctx->pc = 0x2c6b90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952192)));
    // 0x2c6b94: 0x242102a
    ctx->pc = 0x2c6b94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x2c6b98: 0x5440ffc9
    ctx->pc = 0x2C6B98u;
    {
        const bool branch_taken_0x2c6b98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c6b98) {
            ctx->pc = 0x2C6B9Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 56)));
            ctx->pc = 0x2C6AC0u;
            goto label_2c6ac0;
        }
    }
    ctx->pc = 0x2C6BA0u;
label_2c6ba0:
    // 0x2c6ba0: 0x102d
    ctx->pc = 0x2c6ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6ba4:
    // 0x2c6ba4: 0xdfbf0080
    ctx->pc = 0x2c6ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2c6ba8:
    // 0x2c6ba8: 0xdfb70070
    ctx->pc = 0x2c6ba8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c6bac: 0xdfb60060
    ctx->pc = 0x2c6bacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c6bb0: 0xdfb50050
    ctx->pc = 0x2c6bb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c6bb4: 0xdfb40040
    ctx->pc = 0x2c6bb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c6bb8: 0xdfb30030
    ctx->pc = 0x2c6bb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c6bbc: 0xdfb20020
    ctx->pc = 0x2c6bbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c6bc0: 0xdfb10010
    ctx->pc = 0x2c6bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6bc4: 0xdfb00000
    ctx->pc = 0x2c6bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6bc8: 0x3e00008
    ctx->pc = 0x2C6BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6BCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C6AC0u: goto label_2c6ac0;
            case 0x2C6B00u: goto label_2c6b00;
            case 0x2C6B44u: goto label_2c6b44;
            case 0x2C6B5Cu: goto label_2c6b5c;
            case 0x2C6B68u: goto label_2c6b68;
            case 0x2C6B88u: goto label_2c6b88;
            case 0x2C6BA0u: goto label_2c6ba0;
            case 0x2C6BA4u: goto label_2c6ba4;
            case 0x2C6BA8u: goto label_2c6ba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C6BD0u;
}
