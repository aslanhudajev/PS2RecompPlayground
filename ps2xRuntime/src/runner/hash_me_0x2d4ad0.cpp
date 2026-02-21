#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: hash_me
// Address: 0x2d4ad0 - 0x2d4d14
void hash_me_0x2d4ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d4ad0u;

label_2d4ad0:
    // 0x2d4ad0: 0x27bdffa0
    ctx->pc = 0x2d4ad0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_2d4ad4:
    // 0x2d4ad4: 0xffbf0050
    ctx->pc = 0x2d4ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2d4ad8:
    // 0x2d4ad8: 0xffb30040
    ctx->pc = 0x2d4ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2d4adc:
    // 0x2d4adc: 0xffb20030
    ctx->pc = 0x2d4adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2d4ae0:
    // 0x2d4ae0: 0xffb10020
    ctx->pc = 0x2d4ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2d4ae4:
    // 0x2d4ae4: 0xffb00010
    ctx->pc = 0x2d4ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2d4ae8:
    // 0x2d4ae8: 0x80882d
    ctx->pc = 0x2d4ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d4aec:
    // 0x2d4aec: 0xc0bf306
label_2d4af0:
    if (ctx->pc == 0x2D4AF0u) {
        ctx->pc = 0x2D4AF0u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x2D4AF4u;
        goto label_2d4af4;
    }
    ctx->pc = 0x2D4AECu;
    SET_GPR_U32(ctx, 31, 0x2D4AF4u);
    ctx->pc = 0x2D4AF0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4AF4u; }
    }
    if (ctx->pc != 0x2D4AF4u) { return; }
    ctx->pc = 0x2D4AF4u;
label_2d4af4:
    // 0x2d4af4: 0x40902d
    ctx->pc = 0x2d4af4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d4af8:
    // 0x2d4af8: 0x240982d
    ctx->pc = 0x2d4af8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d4afc:
    // 0x2d4afc: 0x3c029e37
    ctx->pc = 0x2d4afcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)40503 << 16));
label_2d4b00:
    // 0x2d4b00: 0x344279b9
    ctx->pc = 0x2d4b00u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 31161));
label_2d4b04:
    // 0x2d4b04: 0xafa20004
    ctx->pc = 0x2d4b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2d4b08:
    // 0x2d4b08: 0xafa20000
    ctx->pc = 0x2d4b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2d4b0c:
    // 0x2d4b0c: 0x2e42000c
    ctx->pc = 0x2d4b0cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 12));
label_2d4b10:
    // 0x2d4b10: 0x14400030
label_2d4b14:
    if (ctx->pc == 0x2D4B14u) {
        ctx->pc = 0x2D4B14u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
        ctx->pc = 0x2D4B18u;
        goto label_2d4b18;
    }
    ctx->pc = 0x2D4B10u;
    {
        const bool branch_taken_0x2d4b10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D4B14u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
        if (branch_taken_0x2d4b10) {
            ctx->pc = 0x2D4BD4u;
            goto label_2d4bd4;
        }
    }
    ctx->pc = 0x2D4B18u;
label_2d4b18:
    // 0x2d4b18: 0x92230000
    ctx->pc = 0x2d4b18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2d4b1c:
    // 0x2d4b1c: 0x92220001
    ctx->pc = 0x2d4b1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_2d4b20:
    // 0x2d4b20: 0x21200
    ctx->pc = 0x2d4b20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_2d4b24:
    // 0x2d4b24: 0x621821
    ctx->pc = 0x2d4b24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d4b28:
    // 0x2d4b28: 0x92220002
    ctx->pc = 0x2d4b28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_2d4b2c:
    // 0x2d4b2c: 0x21400
    ctx->pc = 0x2d4b2cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_2d4b30:
    // 0x2d4b30: 0x621821
    ctx->pc = 0x2d4b30u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d4b34:
    // 0x2d4b34: 0x92220003
    ctx->pc = 0x2d4b34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_2d4b38:
    // 0x2d4b38: 0x21600
    ctx->pc = 0x2d4b38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
label_2d4b3c:
    // 0x2d4b3c: 0x621821
    ctx->pc = 0x2d4b3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d4b40:
    // 0x2d4b40: 0x8fa20000
    ctx->pc = 0x2d4b40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4b44:
    // 0x2d4b44: 0x431021
    ctx->pc = 0x2d4b44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d4b48:
    // 0x2d4b48: 0xafa20000
    ctx->pc = 0x2d4b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2d4b4c:
    // 0x2d4b4c: 0x92230004
    ctx->pc = 0x2d4b4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_2d4b50:
    // 0x2d4b50: 0x92220005
    ctx->pc = 0x2d4b50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_2d4b54:
    // 0x2d4b54: 0x21200
    ctx->pc = 0x2d4b54u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_2d4b58:
    // 0x2d4b58: 0x621821
    ctx->pc = 0x2d4b58u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d4b5c:
    // 0x2d4b5c: 0x92220006
    ctx->pc = 0x2d4b5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_2d4b60:
    // 0x2d4b60: 0x21400
    ctx->pc = 0x2d4b60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_2d4b64:
    // 0x2d4b64: 0x621821
    ctx->pc = 0x2d4b64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d4b68:
    // 0x2d4b68: 0x92220007
    ctx->pc = 0x2d4b68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_2d4b6c:
    // 0x2d4b6c: 0x21600
    ctx->pc = 0x2d4b6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
label_2d4b70:
    // 0x2d4b70: 0x621821
    ctx->pc = 0x2d4b70u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d4b74:
    // 0x2d4b74: 0x8fa20004
    ctx->pc = 0x2d4b74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d4b78:
    // 0x2d4b78: 0x431021
    ctx->pc = 0x2d4b78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d4b7c:
    // 0x2d4b7c: 0xafa20004
    ctx->pc = 0x2d4b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2d4b80:
    // 0x2d4b80: 0x92230008
    ctx->pc = 0x2d4b80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_2d4b84:
    // 0x2d4b84: 0x92220009
    ctx->pc = 0x2d4b84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_2d4b88:
    // 0x2d4b88: 0x21200
    ctx->pc = 0x2d4b88u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_2d4b8c:
    // 0x2d4b8c: 0x621821
    ctx->pc = 0x2d4b8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d4b90:
    // 0x2d4b90: 0x9222000a
    ctx->pc = 0x2d4b90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
label_2d4b94:
    // 0x2d4b94: 0x21400
    ctx->pc = 0x2d4b94u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_2d4b98:
    // 0x2d4b98: 0x621821
    ctx->pc = 0x2d4b98u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d4b9c:
    // 0x2d4b9c: 0x9222000b
    ctx->pc = 0x2d4b9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
label_2d4ba0:
    // 0x2d4ba0: 0x21600
    ctx->pc = 0x2d4ba0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
label_2d4ba4:
    // 0x2d4ba4: 0x621821
    ctx->pc = 0x2d4ba4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d4ba8:
    // 0x2d4ba8: 0x8fa20008
    ctx->pc = 0x2d4ba8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2d4bac:
    // 0x2d4bac: 0x431021
    ctx->pc = 0x2d4bacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d4bb0:
    // 0x2d4bb0: 0xafa20008
    ctx->pc = 0x2d4bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2d4bb4:
    // 0x2d4bb4: 0x3a0202d
    ctx->pc = 0x2d4bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d4bb8:
    // 0x2d4bb8: 0x27a50004
    ctx->pc = 0x2d4bb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 4));
label_2d4bbc:
    // 0x2d4bbc: 0xc0b5250
label_2d4bc0:
    if (ctx->pc == 0x2D4BC0u) {
        ctx->pc = 0x2D4BC0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 8));
        ctx->pc = 0x2D4BC4u;
        goto label_2d4bc4;
    }
    ctx->pc = 0x2D4BBCu;
    SET_GPR_U32(ctx, 31, 0x2D4BC4u);
    ctx->pc = 0x2D4BC0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x2D4940u;
    {
        const uint32_t __entryPc = ctx->pc;
        mix_0x2d4940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4BC4u; }
    }
    if (ctx->pc != 0x2D4BC4u) { return; }
    ctx->pc = 0x2D4BC4u;
label_2d4bc4:
    // 0x2d4bc4: 0x2652fff4
    ctx->pc = 0x2d4bc4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967284));
label_2d4bc8:
    // 0x2d4bc8: 0x2e42000c
    ctx->pc = 0x2d4bc8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 12));
label_2d4bcc:
    // 0x2d4bcc: 0x1040ffd2
label_2d4bd0:
    if (ctx->pc == 0x2D4BD0u) {
        ctx->pc = 0x2D4BD0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 12));
        ctx->pc = 0x2D4BD4u;
        goto label_2d4bd4;
    }
    ctx->pc = 0x2D4BCCu;
    {
        const bool branch_taken_0x2d4bcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D4BD0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 12));
        if (branch_taken_0x2d4bcc) {
            ctx->pc = 0x2D4B18u;
            goto label_2d4b18;
        }
    }
    ctx->pc = 0x2D4BD4u;
label_2d4bd4:
    // 0x2d4bd4: 0x8fa20008
    ctx->pc = 0x2d4bd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2d4bd8:
    // 0x2d4bd8: 0x2621021
    ctx->pc = 0x2d4bd8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2d4bdc:
    // 0x2d4bdc: 0xafa20008
    ctx->pc = 0x2d4bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2d4be0:
    // 0x2d4be0: 0x2643ffff
    ctx->pc = 0x2d4be0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 4294967295));
label_2d4be4:
    // 0x2d4be4: 0x2c62000b
    ctx->pc = 0x2d4be4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 11));
label_2d4be8:
    // 0x2d4be8: 0x1040003c
label_2d4bec:
    if (ctx->pc == 0x2D4BECu) {
        ctx->pc = 0x2D4BECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2D4BF0u;
        goto label_2d4bf0;
    }
    ctx->pc = 0x2D4BE8u;
    {
        const bool branch_taken_0x2d4be8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D4BECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2d4be8) {
            ctx->pc = 0x2D4CDCu;
            goto label_2d4cdc;
        }
    }
    ctx->pc = 0x2D4BF0u;
label_2d4bf0:
    // 0x2d4bf0: 0x24427c90
    ctx->pc = 0x2d4bf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 31888));
label_2d4bf4:
    // 0x2d4bf4: 0x31880
    ctx->pc = 0x2d4bf4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2d4bf8:
    // 0x2d4bf8: 0x621821
    ctx->pc = 0x2d4bf8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d4bfc:
    // 0x2d4bfc: 0x8c620000
    ctx->pc = 0x2d4bfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d4c00:
    // 0x2d4c00: 0x400008
label_2d4c04:
    if (ctx->pc == 0x2D4C04u) {
        ctx->pc = 0x2D4C08u;
        goto label_2d4c08;
    }
    ctx->pc = 0x2D4C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D4AD0u: goto label_2d4ad0;
            case 0x2D4AD4u: goto label_2d4ad4;
            case 0x2D4AD8u: goto label_2d4ad8;
            case 0x2D4ADCu: goto label_2d4adc;
            case 0x2D4AE0u: goto label_2d4ae0;
            case 0x2D4AE4u: goto label_2d4ae4;
            case 0x2D4AE8u: goto label_2d4ae8;
            case 0x2D4AECu: goto label_2d4aec;
            case 0x2D4AF0u: goto label_2d4af0;
            case 0x2D4AF4u: goto label_2d4af4;
            case 0x2D4AF8u: goto label_2d4af8;
            case 0x2D4AFCu: goto label_2d4afc;
            case 0x2D4B00u: goto label_2d4b00;
            case 0x2D4B04u: goto label_2d4b04;
            case 0x2D4B08u: goto label_2d4b08;
            case 0x2D4B0Cu: goto label_2d4b0c;
            case 0x2D4B10u: goto label_2d4b10;
            case 0x2D4B14u: goto label_2d4b14;
            case 0x2D4B18u: goto label_2d4b18;
            case 0x2D4B1Cu: goto label_2d4b1c;
            case 0x2D4B20u: goto label_2d4b20;
            case 0x2D4B24u: goto label_2d4b24;
            case 0x2D4B28u: goto label_2d4b28;
            case 0x2D4B2Cu: goto label_2d4b2c;
            case 0x2D4B30u: goto label_2d4b30;
            case 0x2D4B34u: goto label_2d4b34;
            case 0x2D4B38u: goto label_2d4b38;
            case 0x2D4B3Cu: goto label_2d4b3c;
            case 0x2D4B40u: goto label_2d4b40;
            case 0x2D4B44u: goto label_2d4b44;
            case 0x2D4B48u: goto label_2d4b48;
            case 0x2D4B4Cu: goto label_2d4b4c;
            case 0x2D4B50u: goto label_2d4b50;
            case 0x2D4B54u: goto label_2d4b54;
            case 0x2D4B58u: goto label_2d4b58;
            case 0x2D4B5Cu: goto label_2d4b5c;
            case 0x2D4B60u: goto label_2d4b60;
            case 0x2D4B64u: goto label_2d4b64;
            case 0x2D4B68u: goto label_2d4b68;
            case 0x2D4B6Cu: goto label_2d4b6c;
            case 0x2D4B70u: goto label_2d4b70;
            case 0x2D4B74u: goto label_2d4b74;
            case 0x2D4B78u: goto label_2d4b78;
            case 0x2D4B7Cu: goto label_2d4b7c;
            case 0x2D4B80u: goto label_2d4b80;
            case 0x2D4B84u: goto label_2d4b84;
            case 0x2D4B88u: goto label_2d4b88;
            case 0x2D4B8Cu: goto label_2d4b8c;
            case 0x2D4B90u: goto label_2d4b90;
            case 0x2D4B94u: goto label_2d4b94;
            case 0x2D4B98u: goto label_2d4b98;
            case 0x2D4B9Cu: goto label_2d4b9c;
            case 0x2D4BA0u: goto label_2d4ba0;
            case 0x2D4BA4u: goto label_2d4ba4;
            case 0x2D4BA8u: goto label_2d4ba8;
            case 0x2D4BACu: goto label_2d4bac;
            case 0x2D4BB0u: goto label_2d4bb0;
            case 0x2D4BB4u: goto label_2d4bb4;
            case 0x2D4BB8u: goto label_2d4bb8;
            case 0x2D4BBCu: goto label_2d4bbc;
            case 0x2D4BC0u: goto label_2d4bc0;
            case 0x2D4BC4u: goto label_2d4bc4;
            case 0x2D4BC8u: goto label_2d4bc8;
            case 0x2D4BCCu: goto label_2d4bcc;
            case 0x2D4BD0u: goto label_2d4bd0;
            case 0x2D4BD4u: goto label_2d4bd4;
            case 0x2D4BD8u: goto label_2d4bd8;
            case 0x2D4BDCu: goto label_2d4bdc;
            case 0x2D4BE0u: goto label_2d4be0;
            case 0x2D4BE4u: goto label_2d4be4;
            case 0x2D4BE8u: goto label_2d4be8;
            case 0x2D4BECu: goto label_2d4bec;
            case 0x2D4BF0u: goto label_2d4bf0;
            case 0x2D4BF4u: goto label_2d4bf4;
            case 0x2D4BF8u: goto label_2d4bf8;
            case 0x2D4BFCu: goto label_2d4bfc;
            case 0x2D4C00u: goto label_2d4c00;
            case 0x2D4C04u: goto label_2d4c04;
            case 0x2D4C08u: goto label_2d4c08;
            case 0x2D4C0Cu: goto label_2d4c0c;
            case 0x2D4C10u: goto label_2d4c10;
            case 0x2D4C14u: goto label_2d4c14;
            case 0x2D4C18u: goto label_2d4c18;
            case 0x2D4C1Cu: goto label_2d4c1c;
            case 0x2D4C20u: goto label_2d4c20;
            case 0x2D4C24u: goto label_2d4c24;
            case 0x2D4C28u: goto label_2d4c28;
            case 0x2D4C2Cu: goto label_2d4c2c;
            case 0x2D4C30u: goto label_2d4c30;
            case 0x2D4C34u: goto label_2d4c34;
            case 0x2D4C38u: goto label_2d4c38;
            case 0x2D4C3Cu: goto label_2d4c3c;
            case 0x2D4C40u: goto label_2d4c40;
            case 0x2D4C44u: goto label_2d4c44;
            case 0x2D4C48u: goto label_2d4c48;
            case 0x2D4C4Cu: goto label_2d4c4c;
            case 0x2D4C50u: goto label_2d4c50;
            case 0x2D4C54u: goto label_2d4c54;
            case 0x2D4C58u: goto label_2d4c58;
            case 0x2D4C5Cu: goto label_2d4c5c;
            case 0x2D4C60u: goto label_2d4c60;
            case 0x2D4C64u: goto label_2d4c64;
            case 0x2D4C68u: goto label_2d4c68;
            case 0x2D4C6Cu: goto label_2d4c6c;
            case 0x2D4C70u: goto label_2d4c70;
            case 0x2D4C74u: goto label_2d4c74;
            case 0x2D4C78u: goto label_2d4c78;
            case 0x2D4C7Cu: goto label_2d4c7c;
            case 0x2D4C80u: goto label_2d4c80;
            case 0x2D4C84u: goto label_2d4c84;
            case 0x2D4C88u: goto label_2d4c88;
            case 0x2D4C8Cu: goto label_2d4c8c;
            case 0x2D4C90u: goto label_2d4c90;
            case 0x2D4C94u: goto label_2d4c94;
            case 0x2D4C98u: goto label_2d4c98;
            case 0x2D4C9Cu: goto label_2d4c9c;
            case 0x2D4CA0u: goto label_2d4ca0;
            case 0x2D4CA4u: goto label_2d4ca4;
            case 0x2D4CA8u: goto label_2d4ca8;
            case 0x2D4CACu: goto label_2d4cac;
            case 0x2D4CB0u: goto label_2d4cb0;
            case 0x2D4CB4u: goto label_2d4cb4;
            case 0x2D4CB8u: goto label_2d4cb8;
            case 0x2D4CBCu: goto label_2d4cbc;
            case 0x2D4CC0u: goto label_2d4cc0;
            case 0x2D4CC4u: goto label_2d4cc4;
            case 0x2D4CC8u: goto label_2d4cc8;
            case 0x2D4CCCu: goto label_2d4ccc;
            case 0x2D4CD0u: goto label_2d4cd0;
            case 0x2D4CD4u: goto label_2d4cd4;
            case 0x2D4CD8u: goto label_2d4cd8;
            case 0x2D4CDCu: goto label_2d4cdc;
            case 0x2D4CE0u: goto label_2d4ce0;
            case 0x2D4CE4u: goto label_2d4ce4;
            case 0x2D4CE8u: goto label_2d4ce8;
            case 0x2D4CECu: goto label_2d4cec;
            case 0x2D4CF0u: goto label_2d4cf0;
            case 0x2D4CF4u: goto label_2d4cf4;
            case 0x2D4CF8u: goto label_2d4cf8;
            case 0x2D4CFCu: goto label_2d4cfc;
            case 0x2D4D00u: goto label_2d4d00;
            case 0x2D4D04u: goto label_2d4d04;
            case 0x2D4D08u: goto label_2d4d08;
            case 0x2D4D0Cu: goto label_2d4d0c;
            case 0x2D4D10u: goto label_2d4d10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D4C08u;
label_2d4c08:
    // 0x2d4c08: 0x9222000a
    ctx->pc = 0x2d4c08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
label_2d4c0c:
    // 0x2d4c0c: 0x21600
    ctx->pc = 0x2d4c0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
label_2d4c10:
    // 0x2d4c10: 0x8fa30008
    ctx->pc = 0x2d4c10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2d4c14:
    // 0x2d4c14: 0x431021
    ctx->pc = 0x2d4c14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d4c18:
    // 0x2d4c18: 0xafa20008
    ctx->pc = 0x2d4c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2d4c1c:
    // 0x2d4c1c: 0x92220009
    ctx->pc = 0x2d4c1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_2d4c20:
    // 0x2d4c20: 0x21400
    ctx->pc = 0x2d4c20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_2d4c24:
    // 0x2d4c24: 0x8fa30008
    ctx->pc = 0x2d4c24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2d4c28:
    // 0x2d4c28: 0x431021
    ctx->pc = 0x2d4c28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d4c2c:
    // 0x2d4c2c: 0xafa20008
    ctx->pc = 0x2d4c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2d4c30:
    // 0x2d4c30: 0x92220008
    ctx->pc = 0x2d4c30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_2d4c34:
    // 0x2d4c34: 0x21200
    ctx->pc = 0x2d4c34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_2d4c38:
    // 0x2d4c38: 0x8fa30008
    ctx->pc = 0x2d4c38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2d4c3c:
    // 0x2d4c3c: 0x431021
    ctx->pc = 0x2d4c3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d4c40:
    // 0x2d4c40: 0xafa20008
    ctx->pc = 0x2d4c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2d4c44:
    // 0x2d4c44: 0x92220007
    ctx->pc = 0x2d4c44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_2d4c48:
    // 0x2d4c48: 0x21600
    ctx->pc = 0x2d4c48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
label_2d4c4c:
    // 0x2d4c4c: 0x8fa30004
    ctx->pc = 0x2d4c4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d4c50:
    // 0x2d4c50: 0x431021
    ctx->pc = 0x2d4c50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d4c54:
    // 0x2d4c54: 0xafa20004
    ctx->pc = 0x2d4c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2d4c58:
    // 0x2d4c58: 0x92220006
    ctx->pc = 0x2d4c58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_2d4c5c:
    // 0x2d4c5c: 0x21400
    ctx->pc = 0x2d4c5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_2d4c60:
    // 0x2d4c60: 0x8fa30004
    ctx->pc = 0x2d4c60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d4c64:
    // 0x2d4c64: 0x431021
    ctx->pc = 0x2d4c64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d4c68:
    // 0x2d4c68: 0xafa20004
    ctx->pc = 0x2d4c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2d4c6c:
    // 0x2d4c6c: 0x92220005
    ctx->pc = 0x2d4c6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_2d4c70:
    // 0x2d4c70: 0x21200
    ctx->pc = 0x2d4c70u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_2d4c74:
    // 0x2d4c74: 0x8fa30004
    ctx->pc = 0x2d4c74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d4c78:
    // 0x2d4c78: 0x431021
    ctx->pc = 0x2d4c78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d4c7c:
    // 0x2d4c7c: 0xafa20004
    ctx->pc = 0x2d4c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2d4c80:
    // 0x2d4c80: 0x92220004
    ctx->pc = 0x2d4c80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_2d4c84:
    // 0x2d4c84: 0x8fa30004
    ctx->pc = 0x2d4c84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d4c88:
    // 0x2d4c88: 0x431021
    ctx->pc = 0x2d4c88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d4c8c:
    // 0x2d4c8c: 0xafa20004
    ctx->pc = 0x2d4c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2d4c90:
    // 0x2d4c90: 0x92220003
    ctx->pc = 0x2d4c90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_2d4c94:
    // 0x2d4c94: 0x21600
    ctx->pc = 0x2d4c94u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
label_2d4c98:
    // 0x2d4c98: 0x8fa30000
    ctx->pc = 0x2d4c98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4c9c:
    // 0x2d4c9c: 0x431021
    ctx->pc = 0x2d4c9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d4ca0:
    // 0x2d4ca0: 0xafa20000
    ctx->pc = 0x2d4ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2d4ca4:
    // 0x2d4ca4: 0x92220002
    ctx->pc = 0x2d4ca4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_2d4ca8:
    // 0x2d4ca8: 0x21400
    ctx->pc = 0x2d4ca8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_2d4cac:
    // 0x2d4cac: 0x8fa30000
    ctx->pc = 0x2d4cacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4cb0:
    // 0x2d4cb0: 0x431021
    ctx->pc = 0x2d4cb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d4cb4:
    // 0x2d4cb4: 0xafa20000
    ctx->pc = 0x2d4cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2d4cb8:
    // 0x2d4cb8: 0x92220001
    ctx->pc = 0x2d4cb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_2d4cbc:
    // 0x2d4cbc: 0x21200
    ctx->pc = 0x2d4cbcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
label_2d4cc0:
    // 0x2d4cc0: 0x8fa30000
    ctx->pc = 0x2d4cc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4cc4:
    // 0x2d4cc4: 0x431021
    ctx->pc = 0x2d4cc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d4cc8:
    // 0x2d4cc8: 0xafa20000
    ctx->pc = 0x2d4cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2d4ccc:
    // 0x2d4ccc: 0x92220000
    ctx->pc = 0x2d4cccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2d4cd0:
    // 0x2d4cd0: 0x8fa30000
    ctx->pc = 0x2d4cd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4cd4:
    // 0x2d4cd4: 0x431021
    ctx->pc = 0x2d4cd4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d4cd8:
    // 0x2d4cd8: 0xafa20000
    ctx->pc = 0x2d4cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2d4cdc:
    // 0x2d4cdc: 0x3a0202d
    ctx->pc = 0x2d4cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d4ce0:
    // 0x2d4ce0: 0x27a50004
    ctx->pc = 0x2d4ce0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 4));
label_2d4ce4:
    // 0x2d4ce4: 0xc0b5250
label_2d4ce8:
    if (ctx->pc == 0x2D4CE8u) {
        ctx->pc = 0x2D4CE8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 8));
        ctx->pc = 0x2D4CECu;
        goto label_2d4cec;
    }
    ctx->pc = 0x2D4CE4u;
    SET_GPR_U32(ctx, 31, 0x2D4CECu);
    ctx->pc = 0x2D4CE8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x2D4940u;
    {
        const uint32_t __entryPc = ctx->pc;
        mix_0x2d4940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4CECu; }
    }
    if (ctx->pc != 0x2D4CECu) { return; }
    ctx->pc = 0x2D4CECu;
label_2d4cec:
    // 0x2d4cec: 0x3c03003a
    ctx->pc = 0x2d4cecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2d4cf0:
    // 0x2d4cf0: 0x8fa20008
    ctx->pc = 0x2d4cf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2d4cf4:
    // 0x2d4cf4: 0xac6223a0
    ctx->pc = 0x2d4cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9120), GPR_U32(ctx, 2));
label_2d4cf8:
    // 0x2d4cf8: 0xdfbf0050
    ctx->pc = 0x2d4cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2d4cfc:
    // 0x2d4cfc: 0xdfb30040
    ctx->pc = 0x2d4cfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d4d00:
    // 0x2d4d00: 0xdfb20030
    ctx->pc = 0x2d4d00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d4d04:
    // 0x2d4d04: 0xdfb10020
    ctx->pc = 0x2d4d04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d4d08:
    // 0x2d4d08: 0xdfb00010
    ctx->pc = 0x2d4d08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d4d0c:
    // 0x2d4d0c: 0x3e00008
label_2d4d10:
    if (ctx->pc == 0x2D4D10u) {
        ctx->pc = 0x2D4D10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2D4D14u;
        goto label_fallthrough_0x2d4d0c;
    }
    ctx->pc = 0x2D4D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4D10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D4AD0u: goto label_2d4ad0;
            case 0x2D4AD4u: goto label_2d4ad4;
            case 0x2D4AD8u: goto label_2d4ad8;
            case 0x2D4ADCu: goto label_2d4adc;
            case 0x2D4AE0u: goto label_2d4ae0;
            case 0x2D4AE4u: goto label_2d4ae4;
            case 0x2D4AE8u: goto label_2d4ae8;
            case 0x2D4AECu: goto label_2d4aec;
            case 0x2D4AF0u: goto label_2d4af0;
            case 0x2D4AF4u: goto label_2d4af4;
            case 0x2D4AF8u: goto label_2d4af8;
            case 0x2D4AFCu: goto label_2d4afc;
            case 0x2D4B00u: goto label_2d4b00;
            case 0x2D4B04u: goto label_2d4b04;
            case 0x2D4B08u: goto label_2d4b08;
            case 0x2D4B0Cu: goto label_2d4b0c;
            case 0x2D4B10u: goto label_2d4b10;
            case 0x2D4B14u: goto label_2d4b14;
            case 0x2D4B18u: goto label_2d4b18;
            case 0x2D4B1Cu: goto label_2d4b1c;
            case 0x2D4B20u: goto label_2d4b20;
            case 0x2D4B24u: goto label_2d4b24;
            case 0x2D4B28u: goto label_2d4b28;
            case 0x2D4B2Cu: goto label_2d4b2c;
            case 0x2D4B30u: goto label_2d4b30;
            case 0x2D4B34u: goto label_2d4b34;
            case 0x2D4B38u: goto label_2d4b38;
            case 0x2D4B3Cu: goto label_2d4b3c;
            case 0x2D4B40u: goto label_2d4b40;
            case 0x2D4B44u: goto label_2d4b44;
            case 0x2D4B48u: goto label_2d4b48;
            case 0x2D4B4Cu: goto label_2d4b4c;
            case 0x2D4B50u: goto label_2d4b50;
            case 0x2D4B54u: goto label_2d4b54;
            case 0x2D4B58u: goto label_2d4b58;
            case 0x2D4B5Cu: goto label_2d4b5c;
            case 0x2D4B60u: goto label_2d4b60;
            case 0x2D4B64u: goto label_2d4b64;
            case 0x2D4B68u: goto label_2d4b68;
            case 0x2D4B6Cu: goto label_2d4b6c;
            case 0x2D4B70u: goto label_2d4b70;
            case 0x2D4B74u: goto label_2d4b74;
            case 0x2D4B78u: goto label_2d4b78;
            case 0x2D4B7Cu: goto label_2d4b7c;
            case 0x2D4B80u: goto label_2d4b80;
            case 0x2D4B84u: goto label_2d4b84;
            case 0x2D4B88u: goto label_2d4b88;
            case 0x2D4B8Cu: goto label_2d4b8c;
            case 0x2D4B90u: goto label_2d4b90;
            case 0x2D4B94u: goto label_2d4b94;
            case 0x2D4B98u: goto label_2d4b98;
            case 0x2D4B9Cu: goto label_2d4b9c;
            case 0x2D4BA0u: goto label_2d4ba0;
            case 0x2D4BA4u: goto label_2d4ba4;
            case 0x2D4BA8u: goto label_2d4ba8;
            case 0x2D4BACu: goto label_2d4bac;
            case 0x2D4BB0u: goto label_2d4bb0;
            case 0x2D4BB4u: goto label_2d4bb4;
            case 0x2D4BB8u: goto label_2d4bb8;
            case 0x2D4BBCu: goto label_2d4bbc;
            case 0x2D4BC0u: goto label_2d4bc0;
            case 0x2D4BC4u: goto label_2d4bc4;
            case 0x2D4BC8u: goto label_2d4bc8;
            case 0x2D4BCCu: goto label_2d4bcc;
            case 0x2D4BD0u: goto label_2d4bd0;
            case 0x2D4BD4u: goto label_2d4bd4;
            case 0x2D4BD8u: goto label_2d4bd8;
            case 0x2D4BDCu: goto label_2d4bdc;
            case 0x2D4BE0u: goto label_2d4be0;
            case 0x2D4BE4u: goto label_2d4be4;
            case 0x2D4BE8u: goto label_2d4be8;
            case 0x2D4BECu: goto label_2d4bec;
            case 0x2D4BF0u: goto label_2d4bf0;
            case 0x2D4BF4u: goto label_2d4bf4;
            case 0x2D4BF8u: goto label_2d4bf8;
            case 0x2D4BFCu: goto label_2d4bfc;
            case 0x2D4C00u: goto label_2d4c00;
            case 0x2D4C04u: goto label_2d4c04;
            case 0x2D4C08u: goto label_2d4c08;
            case 0x2D4C0Cu: goto label_2d4c0c;
            case 0x2D4C10u: goto label_2d4c10;
            case 0x2D4C14u: goto label_2d4c14;
            case 0x2D4C18u: goto label_2d4c18;
            case 0x2D4C1Cu: goto label_2d4c1c;
            case 0x2D4C20u: goto label_2d4c20;
            case 0x2D4C24u: goto label_2d4c24;
            case 0x2D4C28u: goto label_2d4c28;
            case 0x2D4C2Cu: goto label_2d4c2c;
            case 0x2D4C30u: goto label_2d4c30;
            case 0x2D4C34u: goto label_2d4c34;
            case 0x2D4C38u: goto label_2d4c38;
            case 0x2D4C3Cu: goto label_2d4c3c;
            case 0x2D4C40u: goto label_2d4c40;
            case 0x2D4C44u: goto label_2d4c44;
            case 0x2D4C48u: goto label_2d4c48;
            case 0x2D4C4Cu: goto label_2d4c4c;
            case 0x2D4C50u: goto label_2d4c50;
            case 0x2D4C54u: goto label_2d4c54;
            case 0x2D4C58u: goto label_2d4c58;
            case 0x2D4C5Cu: goto label_2d4c5c;
            case 0x2D4C60u: goto label_2d4c60;
            case 0x2D4C64u: goto label_2d4c64;
            case 0x2D4C68u: goto label_2d4c68;
            case 0x2D4C6Cu: goto label_2d4c6c;
            case 0x2D4C70u: goto label_2d4c70;
            case 0x2D4C74u: goto label_2d4c74;
            case 0x2D4C78u: goto label_2d4c78;
            case 0x2D4C7Cu: goto label_2d4c7c;
            case 0x2D4C80u: goto label_2d4c80;
            case 0x2D4C84u: goto label_2d4c84;
            case 0x2D4C88u: goto label_2d4c88;
            case 0x2D4C8Cu: goto label_2d4c8c;
            case 0x2D4C90u: goto label_2d4c90;
            case 0x2D4C94u: goto label_2d4c94;
            case 0x2D4C98u: goto label_2d4c98;
            case 0x2D4C9Cu: goto label_2d4c9c;
            case 0x2D4CA0u: goto label_2d4ca0;
            case 0x2D4CA4u: goto label_2d4ca4;
            case 0x2D4CA8u: goto label_2d4ca8;
            case 0x2D4CACu: goto label_2d4cac;
            case 0x2D4CB0u: goto label_2d4cb0;
            case 0x2D4CB4u: goto label_2d4cb4;
            case 0x2D4CB8u: goto label_2d4cb8;
            case 0x2D4CBCu: goto label_2d4cbc;
            case 0x2D4CC0u: goto label_2d4cc0;
            case 0x2D4CC4u: goto label_2d4cc4;
            case 0x2D4CC8u: goto label_2d4cc8;
            case 0x2D4CCCu: goto label_2d4ccc;
            case 0x2D4CD0u: goto label_2d4cd0;
            case 0x2D4CD4u: goto label_2d4cd4;
            case 0x2D4CD8u: goto label_2d4cd8;
            case 0x2D4CDCu: goto label_2d4cdc;
            case 0x2D4CE0u: goto label_2d4ce0;
            case 0x2D4CE4u: goto label_2d4ce4;
            case 0x2D4CE8u: goto label_2d4ce8;
            case 0x2D4CECu: goto label_2d4cec;
            case 0x2D4CF0u: goto label_2d4cf0;
            case 0x2D4CF4u: goto label_2d4cf4;
            case 0x2D4CF8u: goto label_2d4cf8;
            case 0x2D4CFCu: goto label_2d4cfc;
            case 0x2D4D00u: goto label_2d4d00;
            case 0x2D4D04u: goto label_2d4d04;
            case 0x2D4D08u: goto label_2d4d08;
            case 0x2D4D0Cu: goto label_2d4d0c;
            case 0x2D4D10u: goto label_2d4d10;
            default: break;
        }
        return;
    }
label_fallthrough_0x2d4d0c:
    ctx->pc = 0x2D4D14u;
}
