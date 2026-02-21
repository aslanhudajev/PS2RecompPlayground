#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MatchTransporters
// Address: 0x252aa8 - 0x252bec
void MatchTransporters_0x252aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x252aa8u;

    // 0x252aa8: 0x27bdffa0
    ctx->pc = 0x252aa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x252aac: 0xffbf0050
    ctx->pc = 0x252aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x252ab0: 0xffb40040
    ctx->pc = 0x252ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x252ab4: 0xffb30030
    ctx->pc = 0x252ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x252ab8: 0xffb20020
    ctx->pc = 0x252ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x252abc: 0xffb10010
    ctx->pc = 0x252abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x252ac0: 0xffb00000
    ctx->pc = 0x252ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252ac4: 0x3c020034
    ctx->pc = 0x252ac4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x252ac8: 0x8c50cd94
    ctx->pc = 0x252ac8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x252acc: 0x3c020034
    ctx->pc = 0x252accu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x252ad0: 0x40282d
    ctx->pc = 0x252ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252ad4: 0x8c42cd98
    ctx->pc = 0x252ad4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x252ad8: 0x1840003c
    ctx->pc = 0x252AD8u;
    {
        const bool branch_taken_0x252ad8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x252ADCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x252ad8) {
            ctx->pc = 0x252BCCu;
            goto label_252bcc;
        }
    }
    ctx->pc = 0x252AE0u;
    // 0x252ae0: 0x2412ffff
    ctx->pc = 0x252ae0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x252ae4: 0x2414000b
    ctx->pc = 0x252ae4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 11));
    // 0x252ae8: 0xa0982d
    ctx->pc = 0x252ae8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252aec: 0x0
    ctx->pc = 0x252aecu;
    // NOP
label_252af0:
    // 0x252af0: 0x860200d8
    ctx->pc = 0x252af0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x252af4: 0x50520030
    ctx->pc = 0x252AF4u;
    {
        const bool branch_taken_0x252af4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        if (branch_taken_0x252af4) {
            ctx->pc = 0x252AF8u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x252BB8u;
            goto label_252bb8;
        }
    }
    ctx->pc = 0x252AFCu;
    // 0x252afc: 0x8e020000
    ctx->pc = 0x252afcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x252b00: 0x8c430000
    ctx->pc = 0x252b00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252b04: 0x5474002c
    ctx->pc = 0x252B04u;
    {
        const bool branch_taken_0x252b04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 20));
        if (branch_taken_0x252b04) {
            ctx->pc = 0x252B08u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x252BB8u;
            goto label_252bb8;
        }
    }
    ctx->pc = 0x252B0Cu;
    // 0x252b0c: 0x3c020034
    ctx->pc = 0x252b0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x252b10: 0x8c44cd94
    ctx->pc = 0x252b10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x252b14: 0x8ca2cd98
    ctx->pc = 0x252b14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294954392)));
    // 0x252b18: 0x18400021
    ctx->pc = 0x252B18u;
    {
        const bool branch_taken_0x252b18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x252B1Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x252b18) {
            ctx->pc = 0x252BA0u;
            goto label_252ba0;
        }
    }
    ctx->pc = 0x252B20u;
    // 0x252b20: 0x52200009
    ctx->pc = 0x252B20u;
    {
        const bool branch_taken_0x252b20 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x252b20) {
            ctx->pc = 0x252B24u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x252B48u;
            goto label_252b48;
        }
    }
    ctx->pc = 0x252B28u;
    // 0x252b28: 0x848200d8
    ctx->pc = 0x252b28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x252b2c: 0x50520006
    ctx->pc = 0x252B2Cu;
    {
        const bool branch_taken_0x252b2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        if (branch_taken_0x252b2c) {
            ctx->pc = 0x252B30u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x252B48u;
            goto label_252b48;
        }
    }
    ctx->pc = 0x252B34u;
    // 0x252b34: 0x8c820000
    ctx->pc = 0x252b34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x252b38: 0x8c420000
    ctx->pc = 0x252b38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252b3c: 0x50430010
    ctx->pc = 0x252B3Cu;
    {
        const bool branch_taken_0x252b3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x252b3c) {
            ctx->pc = 0x252B40u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 244)));
            ctx->pc = 0x252B80u;
            goto label_252b80;
        }
    }
    ctx->pc = 0x252B44u;
    // 0x252b44: 0x24a50001
    ctx->pc = 0x252b44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_252b48:
    // 0x252b48: 0x8e62cd98
    ctx->pc = 0x252b48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294954392)));
    // 0x252b4c: 0xa2102a
    ctx->pc = 0x252b4cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x252b50: 0x10400013
    ctx->pc = 0x252B50u;
    {
        const bool branch_taken_0x252b50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x252B54u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 272));
        if (branch_taken_0x252b50) {
            ctx->pc = 0x252BA0u;
            goto label_252ba0;
        }
    }
    ctx->pc = 0x252B58u;
    // 0x252b58: 0x50b1fffb
    ctx->pc = 0x252B58u;
    {
        const bool branch_taken_0x252b58 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 17));
        if (branch_taken_0x252b58) {
            ctx->pc = 0x252B5Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x252B48u;
            goto label_252b48;
        }
    }
    ctx->pc = 0x252B60u;
    // 0x252b60: 0x848200d8
    ctx->pc = 0x252b60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x252b64: 0x5052fff8
    ctx->pc = 0x252B64u;
    {
        const bool branch_taken_0x252b64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        if (branch_taken_0x252b64) {
            ctx->pc = 0x252B68u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x252B48u;
            goto label_252b48;
        }
    }
    ctx->pc = 0x252B6Cu;
    // 0x252b6c: 0x8c820000
    ctx->pc = 0x252b6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x252b70: 0x8c420000
    ctx->pc = 0x252b70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252b74: 0x5454fff4
    ctx->pc = 0x252B74u;
    {
        const bool branch_taken_0x252b74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        if (branch_taken_0x252b74) {
            ctx->pc = 0x252B78u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x252B48u;
            goto label_252b48;
        }
    }
    ctx->pc = 0x252B7Cu;
    // 0x252b7c: 0x8e0300f4
    ctx->pc = 0x252b7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_252b80:
    // 0x252b80: 0x8c8200f0
    ctx->pc = 0x252b80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x252b84: 0x5462fff0
    ctx->pc = 0x252B84u;
    {
        const bool branch_taken_0x252b84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x252b84) {
            ctx->pc = 0x252B88u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x252B48u;
            goto label_252b48;
        }
    }
    ctx->pc = 0x252B8Cu;
    // 0x252b8c: 0xae0400f8
    ctx->pc = 0x252b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 4));
    // 0x252b90: 0x8e62cd98
    ctx->pc = 0x252b90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294954392)));
    // 0x252b94: 0xa2102a
    ctx->pc = 0x252b94u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x252b98: 0x54400007
    ctx->pc = 0x252B98u;
    {
        const bool branch_taken_0x252b98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x252b98) {
            ctx->pc = 0x252B9Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x252BB8u;
            goto label_252bb8;
        }
    }
    ctx->pc = 0x252BA0u;
label_252ba0:
    // 0x252ba0: 0x3c04003b
    ctx->pc = 0x252ba0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x252ba4: 0x248488a8
    ctx->pc = 0x252ba4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936744));
    // 0x252ba8: 0x8e0500f0
    ctx->pc = 0x252ba8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x252bac: 0xc0b492e
    ctx->pc = 0x252BACu;
    SET_GPR_U32(ctx, 31, 0x252BB4u);
    ctx->pc = 0x252BB0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 244)));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252BB4u; }
    }
    if (ctx->pc != 0x252BB4u) { return; }
    ctx->pc = 0x252BB4u;
    // 0x252bb4: 0x26310001
    ctx->pc = 0x252bb4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_252bb8:
    // 0x252bb8: 0x3c050034
    ctx->pc = 0x252bb8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
    // 0x252bbc: 0x8ca2cd98
    ctx->pc = 0x252bbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294954392)));
    // 0x252bc0: 0x222102a
    ctx->pc = 0x252bc0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x252bc4: 0x1440ffca
    ctx->pc = 0x252BC4u;
    {
        const bool branch_taken_0x252bc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x252BC8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 272));
        if (branch_taken_0x252bc4) {
            ctx->pc = 0x252AF0u;
            goto label_252af0;
        }
    }
    ctx->pc = 0x252BCCu;
label_252bcc:
    // 0x252bcc: 0xdfbf0050
    ctx->pc = 0x252bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252bd0: 0xdfb40040
    ctx->pc = 0x252bd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252bd4: 0xdfb30030
    ctx->pc = 0x252bd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252bd8: 0xdfb20020
    ctx->pc = 0x252bd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252bdc: 0xdfb10010
    ctx->pc = 0x252bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252be0: 0xdfb00000
    ctx->pc = 0x252be0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252be4: 0x3e00008
    ctx->pc = 0x252BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252BE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x252AF0u: goto label_252af0;
            case 0x252B48u: goto label_252b48;
            case 0x252B80u: goto label_252b80;
            case 0x252BA0u: goto label_252ba0;
            case 0x252BB8u: goto label_252bb8;
            case 0x252BCCu: goto label_252bcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x252BECu;
}
