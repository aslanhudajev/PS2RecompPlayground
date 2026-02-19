#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: Ascii2Sjis
// Address: 0x207ae0 - 0x207b8c
void Ascii2Sjis_0x207ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x207ae0u;

    // 0x207ae0: 0x27bdffe0
    ctx->pc = 0x207ae0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x207ae4: 0xffbe0010
    ctx->pc = 0x207ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x207ae8: 0x3a0f02d
    ctx->pc = 0x207ae8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207aec: 0x80102d
    ctx->pc = 0x207aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207af0: 0xa3c20000
    ctx->pc = 0x207af0u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x207af4: 0xa7c00002
    ctx->pc = 0x207af4u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x207af8: 0x93c20000
    ctx->pc = 0x207af8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x207afc: 0x2c430041
    ctx->pc = 0x207afcu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 65));
    // 0x207b00: 0x1460000a
    ctx->pc = 0x207B00u;
    {
        const bool branch_taken_0x207b00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x207b00) {
            ctx->pc = 0x207B2Cu;
            goto label_207b2c;
        }
    }
    ctx->pc = 0x207B08u;
    // 0x207b08: 0x93c20000
    ctx->pc = 0x207b08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x207b0c: 0x2c43005b
    ctx->pc = 0x207b0cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 91));
    // 0x207b10: 0x10600006
    ctx->pc = 0x207B10u;
    {
        const bool branch_taken_0x207b10 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x207b10) {
            ctx->pc = 0x207B2Cu;
            goto label_207b2c;
        }
    }
    ctx->pc = 0x207B18u;
    // 0x207b18: 0x93c20000
    ctx->pc = 0x207b18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x207b1c: 0x2443821f
    ctx->pc = 0x207b1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294935071));
    // 0x207b20: 0xa7c30002
    ctx->pc = 0x207b20u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x207b24: 0x10000010
    ctx->pc = 0x207B24u;
    {
        const bool branch_taken_0x207b24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207b24) {
            ctx->pc = 0x207B68u;
            goto label_207b68;
        }
    }
    ctx->pc = 0x207B2Cu;
label_207b2c:
    // 0x207b2c: 0x93c20000
    ctx->pc = 0x207b2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x207b30: 0x2c430061
    ctx->pc = 0x207b30u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 97));
    // 0x207b34: 0x1460000a
    ctx->pc = 0x207B34u;
    {
        const bool branch_taken_0x207b34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x207b34) {
            ctx->pc = 0x207B60u;
            goto label_207b60;
        }
    }
    ctx->pc = 0x207B3Cu;
    // 0x207b3c: 0x93c20000
    ctx->pc = 0x207b3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x207b40: 0x2c43007b
    ctx->pc = 0x207b40u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 123));
    // 0x207b44: 0x10600006
    ctx->pc = 0x207B44u;
    {
        const bool branch_taken_0x207b44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x207b44) {
            ctx->pc = 0x207B60u;
            goto label_207b60;
        }
    }
    ctx->pc = 0x207B4Cu;
    // 0x207b4c: 0x93c20000
    ctx->pc = 0x207b4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x207b50: 0x24438220
    ctx->pc = 0x207b50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294935072));
    // 0x207b54: 0xa7c30002
    ctx->pc = 0x207b54u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x207b58: 0x10000003
    ctx->pc = 0x207B58u;
    {
        const bool branch_taken_0x207b58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207b58) {
            ctx->pc = 0x207B68u;
            goto label_207b68;
        }
    }
    ctx->pc = 0x207B60u;
label_207b60:
    // 0x207b60: 0x34028140
    ctx->pc = 0x207b60u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 33088));
    // 0x207b64: 0xa7c20002
    ctx->pc = 0x207b64u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 2), (uint16_t)GPR_U32(ctx, 2));
label_207b68:
    // 0x207b68: 0x97c30002
    ctx->pc = 0x207b68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x207b6c: 0x60102d
    ctx->pc = 0x207b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b70: 0x10000001
    ctx->pc = 0x207B70u;
    {
        const bool branch_taken_0x207b70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207b70) {
            ctx->pc = 0x207B78u;
            goto label_207b78;
        }
    }
    ctx->pc = 0x207B78u;
label_207b78:
    // 0x207b78: 0x3c0e82d
    ctx->pc = 0x207b78u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b7c: 0xdfbe0010
    ctx->pc = 0x207b7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207b80: 0x27bd0020
    ctx->pc = 0x207b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    // 0x207b84: 0x3e00008
    ctx->pc = 0x207B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207B2Cu: goto label_207b2c;
            case 0x207B60u: goto label_207b60;
            case 0x207B68u: goto label_207b68;
            case 0x207B78u: goto label_207b78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x207B8Cu;
}
