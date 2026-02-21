#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: open_stuff
// Address: 0x280c48 - 0x280d4c
void open_stuff_0x280c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x280c48u;

    // 0x280c48: 0x27bdffa0
    ctx->pc = 0x280c48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x280c4c: 0xffbf0050
    ctx->pc = 0x280c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x280c50: 0xffb40040
    ctx->pc = 0x280c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x280c54: 0xffb30030
    ctx->pc = 0x280c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x280c58: 0xffb20020
    ctx->pc = 0x280c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x280c5c: 0xffb10010
    ctx->pc = 0x280c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x280c60: 0xffb00000
    ctx->pc = 0x280c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x280c64: 0x80882d
    ctx->pc = 0x280c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280c68: 0xc0a02c4
    ctx->pc = 0x280C68u;
    SET_GPR_U32(ctx, 31, 0x280C70u);
    ctx->pc = 0x280C6Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x280B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_int_0x280b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280C70u; }
    }
    if (ctx->pc != 0x280C70u) { return; }
    ctx->pc = 0x280C70u;
    // 0x280c70: 0x2a0203e8
    ctx->pc = 0x280c70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 1000));
    // 0x280c74: 0x1040002d
    ctx->pc = 0x280C74u;
    {
        const bool branch_taken_0x280c74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x280C78u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 998));
        if (branch_taken_0x280c74) {
            ctx->pc = 0x280D2Cu;
            goto label_280d2c;
        }
    }
    ctx->pc = 0x280C7Cu;
    // 0x280c7c: 0x1440002c
    ctx->pc = 0x280C7Cu;
    {
        const bool branch_taken_0x280c7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x280C80u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x280c7c) {
            ctx->pc = 0x280D30u;
            goto label_280d30;
        }
    }
    ctx->pc = 0x280C84u;
    // 0x280c84: 0x8e240000
    ctx->pc = 0x280c84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x280c88: 0x10800005
    ctx->pc = 0x280C88u;
    {
        const bool branch_taken_0x280c88 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x280C8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x280c88) {
            ctx->pc = 0x280CA0u;
            goto label_280ca0;
        }
    }
    ctx->pc = 0x280C90u;
    // 0x280c90: 0x10820006
    ctx->pc = 0x280C90u;
    {
        const bool branch_taken_0x280c90 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x280C94u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x280c90) {
            ctx->pc = 0x280CACu;
            goto label_280cac;
        }
    }
    ctx->pc = 0x280C98u;
    // 0x280c98: 0x10000026
    ctx->pc = 0x280C98u;
    {
        const bool branch_taken_0x280c98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x280C9Cu;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x280c98) {
            ctx->pc = 0x280D34u;
            goto label_280d34;
        }
    }
    ctx->pc = 0x280CA0u;
label_280ca0:
    // 0x280ca0: 0x3c020032
    ctx->pc = 0x280ca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x280ca4: 0x10000021
    ctx->pc = 0x280CA4u;
    {
        const bool branch_taken_0x280ca4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x280CA8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 2008), GPR_U32(ctx, 0));
        if (branch_taken_0x280ca4) {
            ctx->pc = 0x280D2Cu;
            goto label_280d2c;
        }
    }
    ctx->pc = 0x280CACu;
label_280cac:
    // 0x280cac: 0x8c50cd94
    ctx->pc = 0x280cacu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x280cb0: 0x3c020034
    ctx->pc = 0x280cb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x280cb4: 0x8c42cd98
    ctx->pc = 0x280cb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x280cb8: 0x1840001c
    ctx->pc = 0x280CB8u;
    {
        const bool branch_taken_0x280cb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x280CBCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x280cb8) {
            ctx->pc = 0x280D2Cu;
            goto label_280d2c;
        }
    }
    ctx->pc = 0x280CC0u;
    // 0x280cc0: 0x2414ffff
    ctx->pc = 0x280cc0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x280cc4: 0x24130002
    ctx->pc = 0x280cc4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
    // 0x280cc8: 0x3c120034
    ctx->pc = 0x280cc8u;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
    // 0x280ccc: 0x0
    ctx->pc = 0x280cccu;
    // NOP
label_280cd0:
    // 0x280cd0: 0x8e030000
    ctx->pc = 0x280cd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x280cd4: 0x860200d8
    ctx->pc = 0x280cd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x280cd8: 0x1054000f
    ctx->pc = 0x280CD8u;
    {
        const bool branch_taken_0x280cd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 20));
        ctx->pc = 0x280CDCu;
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
        if (branch_taken_0x280cd8) {
            ctx->pc = 0x280D18u;
            goto label_280d18;
        }
    }
    ctx->pc = 0x280CE0u;
    // 0x280ce0: 0x8c620000
    ctx->pc = 0x280ce0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x280ce4: 0x5453000d
    ctx->pc = 0x280CE4u;
    {
        const bool branch_taken_0x280ce4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x280ce4) {
            ctx->pc = 0x280CE8u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x280D1Cu;
            goto label_280d1c;
        }
    }
    ctx->pc = 0x280CECu;
    // 0x280cec: 0x820200dc
    ctx->pc = 0x280cecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x280cf0: 0x5440000a
    ctx->pc = 0x280CF0u;
    {
        const bool branch_taken_0x280cf0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x280cf0) {
            ctx->pc = 0x280CF4u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x280D1Cu;
            goto label_280d1c;
        }
    }
    ctx->pc = 0x280CF8u;
    // 0x280cf8: 0x34820001
    ctx->pc = 0x280cf8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 4), 1));
    // 0x280cfc: 0xa60200d8
    ctx->pc = 0x280cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 216), (uint16_t)GPR_U32(ctx, 2));
    // 0x280d00: 0xa20000df
    ctx->pc = 0x280d00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 223), (uint8_t)GPR_U32(ctx, 0));
    // 0x280d04: 0x860200f0
    ctx->pc = 0x280d04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x280d08: 0x4400003
    ctx->pc = 0x280D08u;
    {
        const bool branch_taken_0x280d08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x280D0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x280d08) {
            ctx->pc = 0x280D18u;
            goto label_280d18;
        }
    }
    ctx->pc = 0x280D10u;
    // 0x280d10: 0xc096234
    ctx->pc = 0x280D10u;
    SET_GPR_U32(ctx, 31, 0x280D18u);
    ctx->pc = 0x280D14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2588D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        OpenChest_0x2588d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D18u; }
    }
    if (ctx->pc != 0x280D18u) { return; }
    ctx->pc = 0x280D18u;
label_280d18:
    // 0x280d18: 0x26310001
    ctx->pc = 0x280d18u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_280d1c:
    // 0x280d1c: 0x8e42cd98
    ctx->pc = 0x280d1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294954392)));
    // 0x280d20: 0x222102a
    ctx->pc = 0x280d20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x280d24: 0x1440ffea
    ctx->pc = 0x280D24u;
    {
        const bool branch_taken_0x280d24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x280D28u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 272));
        if (branch_taken_0x280d24) {
            ctx->pc = 0x280CD0u;
            goto label_280cd0;
        }
    }
    ctx->pc = 0x280D2Cu;
label_280d2c:
    // 0x280d2c: 0xdfbf0050
    ctx->pc = 0x280d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_280d30:
    // 0x280d30: 0xdfb40040
    ctx->pc = 0x280d30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_280d34:
    // 0x280d34: 0xdfb30030
    ctx->pc = 0x280d34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280d38: 0xdfb20020
    ctx->pc = 0x280d38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280d3c: 0xdfb10010
    ctx->pc = 0x280d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280d40: 0xdfb00000
    ctx->pc = 0x280d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280d44: 0x3e00008
    ctx->pc = 0x280D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280D48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280CA0u: goto label_280ca0;
            case 0x280CACu: goto label_280cac;
            case 0x280CD0u: goto label_280cd0;
            case 0x280D18u: goto label_280d18;
            case 0x280D1Cu: goto label_280d1c;
            case 0x280D2Cu: goto label_280d2c;
            case 0x280D30u: goto label_280d30;
            case 0x280D34u: goto label_280d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280D4Cu;
}
