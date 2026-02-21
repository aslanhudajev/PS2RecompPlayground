#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: uncouple_enemy
// Address: 0x239a20 - 0x239b3c
void uncouple_enemy_0x239a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x239a20u;

    // 0x239a20: 0x27bdffe0
    ctx->pc = 0x239a20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x239a24: 0xffbf0010
    ctx->pc = 0x239a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239a28: 0xffb00000
    ctx->pc = 0x239a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239a2c: 0x240503b0
    ctx->pc = 0x239a2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 944));
    // 0x239a30: 0x851818
    ctx->pc = 0x239a30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x239a34: 0x3c020033
    ctx->pc = 0x239a34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x239a38: 0x2442dfd0
    ctx->pc = 0x239a38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x239a3c: 0x628021
    ctx->pc = 0x239a3cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x239a40: 0x8e030348
    ctx->pc = 0x239a40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 840)));
    // 0x239a44: 0x4600006
    ctx->pc = 0x239A44u;
    {
        const bool branch_taken_0x239a44 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x239A48u;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x239a44) {
            ctx->pc = 0x239A60u;
            goto label_239a60;
        }
    }
    ctx->pc = 0x239A4Cu;
    // 0x239a4c: 0xc21021
    ctx->pc = 0x239a4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x239a50: 0x8e03034c
    ctx->pc = 0x239a50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 844)));
    // 0x239a54: 0xac43034c
    ctx->pc = 0x239a54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 844), GPR_U32(ctx, 3));
    // 0x239a58: 0x2402ffff
    ctx->pc = 0x239a58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239a5c: 0xae020348
    ctx->pc = 0x239a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 2));
label_239a60:
    // 0x239a60: 0x8e05034c
    ctx->pc = 0x239a60u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 844)));
    // 0x239a64: 0x4a00009
    ctx->pc = 0x239A64u;
    {
        const bool branch_taken_0x239a64 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x239A68u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x239a64) {
            ctx->pc = 0x239A8Cu;
            goto label_239a8c;
        }
    }
    ctx->pc = 0x239A6Cu;
    // 0x239a6c: 0x2463dfd0
    ctx->pc = 0x239a6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959056));
    // 0x239a70: 0x240203b0
    ctx->pc = 0x239a70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
    // 0x239a74: 0xa21018
    ctx->pc = 0x239a74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x239a78: 0x431021
    ctx->pc = 0x239a78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x239a7c: 0x8e030348
    ctx->pc = 0x239a7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 840)));
    // 0x239a80: 0xac430348
    ctx->pc = 0x239a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 840), GPR_U32(ctx, 3));
    // 0x239a84: 0x2402ffff
    ctx->pc = 0x239a84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239a88: 0xae02034c
    ctx->pc = 0x239a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 844), GPR_U32(ctx, 2));
label_239a8c:
    // 0x239a8c: 0x86030324
    ctx->pc = 0x239a8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x239a90: 0x24020012
    ctx->pc = 0x239a90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
    // 0x239a94: 0x14620006
    ctx->pc = 0x239A94u;
    {
        const bool branch_taken_0x239a94 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x239A98u;
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
        if (branch_taken_0x239a94) {
            ctx->pc = 0x239AB0u;
            goto label_239ab0;
        }
    }
    ctx->pc = 0x239A9Cu;
    // 0x239a9c: 0x3c020033
    ctx->pc = 0x239a9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x239aa0: 0x2403ffff
    ctx->pc = 0x239aa0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239aa4: 0xac434638
    ctx->pc = 0x239aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17976), GPR_U32(ctx, 3));
    // 0x239aa8: 0x51023
    ctx->pc = 0x239aa8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x239aac: 0xa6020324
    ctx->pc = 0x239aacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 804), (uint16_t)GPR_U32(ctx, 2));
label_239ab0:
    // 0x239ab0: 0x8e0302a4
    ctx->pc = 0x239ab0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x239ab4: 0x1060001e
    ctx->pc = 0x239AB4u;
    {
        const bool branch_taken_0x239ab4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x239AB8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x239ab4) {
            ctx->pc = 0x239B30u;
            goto label_239b30;
        }
    }
    ctx->pc = 0x239ABCu;
    // 0x239abc: 0x806200f5
    ctx->pc = 0x239abcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 245)));
    // 0x239ac0: 0x54440004
    ctx->pc = 0x239AC0u;
    {
        const bool branch_taken_0x239ac0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x239ac0) {
            ctx->pc = 0x239AC4u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
            ctx->pc = 0x239AD4u;
            goto label_239ad4;
        }
    }
    ctx->pc = 0x239AC8u;
    // 0x239ac8: 0x92020348
    ctx->pc = 0x239ac8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 840)));
    // 0x239acc: 0xa06200f5
    ctx->pc = 0x239accu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 245), (uint8_t)GPR_U32(ctx, 2));
    // 0x239ad0: 0x86030324
    ctx->pc = 0x239ad0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
label_239ad4:
    // 0x239ad4: 0x2402000f
    ctx->pc = 0x239ad4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x239ad8: 0x54620006
    ctx->pc = 0x239AD8u;
    {
        const bool branch_taken_0x239ad8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x239ad8) {
            ctx->pc = 0x239ADCu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 676)));
            ctx->pc = 0x239AF4u;
            goto label_239af4;
        }
    }
    ctx->pc = 0x239AE0u;
    // 0x239ae0: 0x8e0202a4
    ctx->pc = 0x239ae0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x239ae4: 0xa04000f7
    ctx->pc = 0x239ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 247), (uint8_t)GPR_U32(ctx, 0));
    // 0x239ae8: 0x8e0202a4
    ctx->pc = 0x239ae8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x239aec: 0xa04000f2
    ctx->pc = 0x239aecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 242), (uint8_t)GPR_U32(ctx, 0));
    // 0x239af0: 0x8e0402a4
    ctx->pc = 0x239af0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 676)));
label_239af4:
    // 0x239af4: 0x8c820000
    ctx->pc = 0x239af4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x239af8: 0x8c430000
    ctx->pc = 0x239af8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239afc: 0x24020003
    ctx->pc = 0x239afcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x239b00: 0x54620007
    ctx->pc = 0x239B00u;
    {
        const bool branch_taken_0x239b00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x239b00) {
            ctx->pc = 0x239B04u;
            SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
            ctx->pc = 0x239B20u;
            goto label_239b20;
        }
    }
    ctx->pc = 0x239B08u;
    // 0x239b08: 0x808200f2
    ctx->pc = 0x239b08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 242)));
    // 0x239b0c: 0x18400006
    ctx->pc = 0x239B0Cu;
    {
        const bool branch_taken_0x239b0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x239B10u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 242)));
        if (branch_taken_0x239b0c) {
            ctx->pc = 0x239B28u;
            goto label_239b28;
        }
    }
    ctx->pc = 0x239B14u;
    // 0x239b14: 0x2462ffff
    ctx->pc = 0x239b14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x239b18: 0x10000003
    ctx->pc = 0x239B18u;
    {
        const bool branch_taken_0x239b18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x239B1Cu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 242), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x239b18) {
            ctx->pc = 0x239B28u;
            goto label_239b28;
        }
    }
    ctx->pc = 0x239B20u;
label_239b20:
    // 0x239b20: 0xc0b492e
    ctx->pc = 0x239B20u;
    SET_GPR_U32(ctx, 31, 0x239B28u);
    ctx->pc = 0x239B24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32600));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B28u; }
    }
    if (ctx->pc != 0x239B28u) { return; }
    ctx->pc = 0x239B28u;
label_239b28:
    // 0x239b28: 0xae0002a4
    ctx->pc = 0x239b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
    // 0x239b2c: 0xdfbf0010
    ctx->pc = 0x239b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239b30:
    // 0x239b30: 0xdfb00000
    ctx->pc = 0x239b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239b34: 0x3e00008
    ctx->pc = 0x239B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239B38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x239A60u: goto label_239a60;
            case 0x239A8Cu: goto label_239a8c;
            case 0x239AB0u: goto label_239ab0;
            case 0x239AD4u: goto label_239ad4;
            case 0x239AF4u: goto label_239af4;
            case 0x239B20u: goto label_239b20;
            case 0x239B28u: goto label_239b28;
            case 0x239B30u: goto label_239b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239B3Cu;
}
