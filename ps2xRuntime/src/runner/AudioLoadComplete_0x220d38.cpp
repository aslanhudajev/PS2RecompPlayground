#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioLoadComplete
// Address: 0x220d38 - 0x220e74
void AudioLoadComplete_0x220d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x220d38u;

    // 0x220d38: 0x27bdffb0
    ctx->pc = 0x220d38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x220d3c: 0xffbf0040
    ctx->pc = 0x220d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x220d40: 0xffb20030
    ctx->pc = 0x220d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x220d44: 0xffb10020
    ctx->pc = 0x220d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x220d48: 0xffb00010
    ctx->pc = 0x220d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x220d4c: 0x80382d
    ctx->pc = 0x220d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d50: 0x8cf10014
    ctx->pc = 0x220d50u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x220d54: 0x3c040032
    ctx->pc = 0x220d54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x220d58: 0x8e220000
    ctx->pc = 0x220d58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x220d5c: 0x24030124
    ctx->pc = 0x220d5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 292));
    // 0x220d60: 0x431018
    ctx->pc = 0x220d60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x220d64: 0x24420014
    ctx->pc = 0x220d64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x220d68: 0x8c83fe28
    ctx->pc = 0x220d68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294966824)));
    // 0x220d6c: 0x439021
    ctx->pc = 0x220d6cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220d70: 0x3c020032
    ctx->pc = 0x220d70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220d74: 0x8c44fd6c
    ctx->pc = 0x220d74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
    // 0x220d78: 0x8e220004
    ctx->pc = 0x220d78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x220d7c: 0x21080
    ctx->pc = 0x220d7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x220d80: 0x2421021
    ctx->pc = 0x220d80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x220d84: 0x8c42001c
    ctx->pc = 0x220d84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x220d88: 0x2403002c
    ctx->pc = 0x220d88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
    // 0x220d8c: 0x431018
    ctx->pc = 0x220d8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x220d90: 0x8c830010
    ctx->pc = 0x220d90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x220d94: 0x438021
    ctx->pc = 0x220d94u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x220d98: 0x8ce20008
    ctx->pc = 0x220d98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x220d9c: 0x1040001a
    ctx->pc = 0x220D9Cu;
    {
        const bool branch_taken_0x220d9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x220DA0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x220d9c) {
            ctx->pc = 0x220E08u;
            goto label_220e08;
        }
    }
    ctx->pc = 0x220DA4u;
    // 0x220da4: 0x248466f8
    ctx->pc = 0x220da4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26360));
    // 0x220da8: 0x8e260008
    ctx->pc = 0x220da8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x220dac: 0x8ce70008
    ctx->pc = 0x220dacu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x220db0: 0xc0b492e
    ctx->pc = 0x220DB0u;
    SET_GPR_U32(ctx, 31, 0x220DB8u);
    ctx->pc = 0x220DB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220DB8u; }
    }
    if (ctx->pc != 0x220DB8u) { return; }
    ctx->pc = 0x220DB8u;
    // 0x220db8: 0x3c030032
    ctx->pc = 0x220db8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x220dbc: 0x8c62fd84
    ctx->pc = 0x220dbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966660)));
    // 0x220dc0: 0x24420001
    ctx->pc = 0x220dc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x220dc4: 0xac62fd84
    ctx->pc = 0x220dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966660), GPR_U32(ctx, 2));
    // 0x220dc8: 0x2402fffe
    ctx->pc = 0x220dc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x220dcc: 0xa6020028
    ctx->pc = 0x220dccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x220dd0: 0x3c030032
    ctx->pc = 0x220dd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x220dd4: 0x8c62fe2c
    ctx->pc = 0x220dd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966828)));
    // 0x220dd8: 0x2442ffff
    ctx->pc = 0x220dd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x220ddc: 0xac62fe2c
    ctx->pc = 0x220ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966828), GPR_U32(ctx, 2));
    // 0x220de0: 0x3c020032
    ctx->pc = 0x220de0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220de4: 0xac40fd70
    ctx->pc = 0x220de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966640), GPR_U32(ctx, 0));
    // 0x220de8: 0x8e270008
    ctx->pc = 0x220de8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x220dec: 0x8e240000
    ctx->pc = 0x220decu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x220df0: 0x8e250004
    ctx->pc = 0x220df0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x220df4: 0x24060002
    ctx->pc = 0x220df4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x220df8: 0xc088468
    ctx->pc = 0x220DF8u;
    SET_GPR_U32(ctx, 31, 0x220E00u);
    ctx->pc = 0x220DFCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x2211A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioLoadBank_0x2211a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E00u; }
    }
    if (ctx->pc != 0x220E00u) { return; }
    ctx->pc = 0x220E00u;
    // 0x220e00: 0x10000015
    ctx->pc = 0x220E00u;
    {
        const bool branch_taken_0x220e00 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x220E04u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x220e00) {
            ctx->pc = 0x220E58u;
            goto label_220e58;
        }
    }
    ctx->pc = 0x220E08u;
label_220e08:
    // 0x220e08: 0x8e220004
    ctx->pc = 0x220e08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x220e0c: 0xae42011c
    ctx->pc = 0x220e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 2));
    // 0x220e10: 0x8ce4000c
    ctx->pc = 0x220e10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x220e14: 0xa6040028
    ctx->pc = 0x220e14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 4));
    // 0x220e18: 0x42400
    ctx->pc = 0x220e18u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x220e1c: 0x42403
    ctx->pc = 0x220e1cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x220e20: 0x3a0282d
    ctx->pc = 0x220e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e24: 0xc088eda
    ctx->pc = 0x220E24u;
    SET_GPR_U32(ctx, 31, 0x220E2Cu);
    ctx->pc = 0x220E28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 2));
    ctx->pc = 0x223B68u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_bank_info_0x223b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E2Cu; }
    }
    if (ctx->pc != 0x220E2Cu) { return; }
    ctx->pc = 0x220E2Cu;
    // 0x220e2c: 0x97a20000
    ctx->pc = 0x220e2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220e30: 0xa602002a
    ctx->pc = 0x220e30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x220e34: 0x3042ffff
    ctx->pc = 0x220e34u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x220e38: 0xae420120
    ctx->pc = 0x220e38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 2));
    // 0x220e3c: 0x3c030032
    ctx->pc = 0x220e3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x220e40: 0x8c62fe2c
    ctx->pc = 0x220e40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966828)));
    // 0x220e44: 0x2442ffff
    ctx->pc = 0x220e44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x220e48: 0xac62fe2c
    ctx->pc = 0x220e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966828), GPR_U32(ctx, 2));
    // 0x220e4c: 0x3c020032
    ctx->pc = 0x220e4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220e50: 0xac40fd70
    ctx->pc = 0x220e50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966640), GPR_U32(ctx, 0));
    // 0x220e54: 0x2402ffff
    ctx->pc = 0x220e54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_220e58:
    // 0x220e58: 0xae220000
    ctx->pc = 0x220e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x220e5c: 0xdfbf0040
    ctx->pc = 0x220e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x220e60: 0xdfb20030
    ctx->pc = 0x220e60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220e64: 0xdfb10020
    ctx->pc = 0x220e64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220e68: 0xdfb00010
    ctx->pc = 0x220e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220e6c: 0x3e00008
    ctx->pc = 0x220E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220E70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220E08u: goto label_220e08;
            case 0x220E58u: goto label_220e58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220E74u;
}
