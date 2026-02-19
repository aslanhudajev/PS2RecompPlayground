#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _pictureHeader
// Address: 0x2f2c30 - 0x2f2cfc
void _pictureHeader_0x2f2c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f2c30u;

    // 0x2f2c30: 0x27bdffc0
    ctx->pc = 0x2f2c30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f2c34: 0x2404000a
    ctx->pc = 0x2f2c34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f2c38: 0xffb20020
    ctx->pc = 0x2f2c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f2c3c: 0xffb00000
    ctx->pc = 0x2f2c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f2c40: 0x3c12003a
    ctx->pc = 0x2f2c40u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2f2c44: 0xffbf0030
    ctx->pc = 0x2f2c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f2c48: 0x3c10003a
    ctx->pc = 0x2f2c48u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f2c4c: 0xc0bca32
    ctx->pc = 0x2F2C4Cu;
    SET_GPR_U32(ctx, 31, 0x2F2C54u);
    ctx->pc = 0x2F2C50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2C54u; }
    }
    if (ctx->pc != 0x2F2C54u) { return; }
    ctx->pc = 0x2F2C54u;
    // 0x2f2c54: 0xae0231b8
    ctx->pc = 0x2f2c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12728), GPR_U32(ctx, 2));
    // 0x2f2c58: 0xc0bca32
    ctx->pc = 0x2F2C58u;
    SET_GPR_U32(ctx, 31, 0x2F2C60u);
    ctx->pc = 0x2F2C5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2C60u; }
    }
    if (ctx->pc != 0x2F2C60u) { return; }
    ctx->pc = 0x2F2C60u;
    // 0x2f2c60: 0x3c10003a
    ctx->pc = 0x2f2c60u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f2c64: 0xae4231bc
    ctx->pc = 0x2f2c64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12732), GPR_U32(ctx, 2));
    // 0x2f2c68: 0xc0bca32
    ctx->pc = 0x2F2C68u;
    SET_GPR_U32(ctx, 31, 0x2F2C70u);
    ctx->pc = 0x2F2C6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2C70u; }
    }
    if (ctx->pc != 0x2F2C70u) { return; }
    ctx->pc = 0x2F2C70u;
    // 0x2f2c70: 0x8e4331bc
    ctx->pc = 0x2f2c70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12732)));
    // 0x2f2c74: 0xae0231c0
    ctx->pc = 0x2f2c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12736), GPR_U32(ctx, 2));
    // 0x2f2c78: 0x2462fffe
    ctx->pc = 0x2f2c78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2f2c7c: 0x2c420002
    ctx->pc = 0x2f2c7cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2f2c80: 0x1040000b
    ctx->pc = 0x2F2C80u;
    {
        const bool branch_taken_0x2f2c80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F2C84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2f2c80) {
            ctx->pc = 0x2F2CB0u;
            goto label_2f2cb0;
        }
    }
    ctx->pc = 0x2F2C88u;
    // 0x2f2c88: 0x24040001
    ctx->pc = 0x2f2c88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2c8c: 0xc0bca32
    ctx->pc = 0x2F2C8Cu;
    SET_GPR_U32(ctx, 31, 0x2F2C94u);
    ctx->pc = 0x2F2C90u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2C94u; }
    }
    if (ctx->pc != 0x2F2C94u) { return; }
    ctx->pc = 0x2F2C94u;
    // 0x2f2c94: 0x3c11003a
    ctx->pc = 0x2f2c94u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2f2c98: 0xae0231c4
    ctx->pc = 0x2f2c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12740), GPR_U32(ctx, 2));
    // 0x2f2c9c: 0xc0bca32
    ctx->pc = 0x2F2C9Cu;
    SET_GPR_U32(ctx, 31, 0x2F2CA4u);
    ctx->pc = 0x2F2CA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2CA4u; }
    }
    if (ctx->pc != 0x2F2CA4u) { return; }
    ctx->pc = 0x2F2CA4u;
    // 0x2f2ca4: 0xae2231c8
    ctx->pc = 0x2f2ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12744), GPR_U32(ctx, 2));
    // 0x2f2ca8: 0x8e4331bc
    ctx->pc = 0x2f2ca8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12732)));
    // 0x2f2cac: 0x24020003
    ctx->pc = 0x2f2cacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_2f2cb0:
    // 0x2f2cb0: 0x14620008
    ctx->pc = 0x2F2CB0u;
    {
        const bool branch_taken_0x2f2cb0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F2CB4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f2cb0) {
            ctx->pc = 0x2F2CD4u;
            goto label_2f2cd4;
        }
    }
    ctx->pc = 0x2F2CB8u;
    // 0x2f2cb8: 0xc0bca32
    ctx->pc = 0x2F2CB8u;
    SET_GPR_U32(ctx, 31, 0x2F2CC0u);
    ctx->pc = 0x2F2CBCu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2CC0u; }
    }
    if (ctx->pc != 0x2F2CC0u) { return; }
    ctx->pc = 0x2F2CC0u;
    // 0x2f2cc0: 0x3c11003a
    ctx->pc = 0x2f2cc0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2f2cc4: 0xae0231cc
    ctx->pc = 0x2f2cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12748), GPR_U32(ctx, 2));
    // 0x2f2cc8: 0xc0bca32
    ctx->pc = 0x2F2CC8u;
    SET_GPR_U32(ctx, 31, 0x2F2CD0u);
    ctx->pc = 0x2F2CCCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2CD0u; }
    }
    if (ctx->pc != 0x2F2CD0u) { return; }
    ctx->pc = 0x2F2CD0u;
    // 0x2f2cd0: 0xae2231d0
    ctx->pc = 0x2f2cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12752), GPR_U32(ctx, 2));
label_2f2cd4:
    // 0x2f2cd4: 0xc0bcbf8
    ctx->pc = 0x2F2CD4u;
    SET_GPR_U32(ctx, 31, 0x2F2CDCu);
    ctx->pc = 0x2F2FE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _extrainfo_0x2f2fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2CDCu; }
    }
    if (ctx->pc != 0x2F2CDCu) { return; }
    ctx->pc = 0x2F2CDCu;
    // 0x2f2cdc: 0xc0bcb40
    ctx->pc = 0x2F2CDCu;
    SET_GPR_U32(ctx, 31, 0x2F2CE4u);
    ctx->pc = 0x2F2D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _extensionAndUserData_0x2f2d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2CE4u; }
    }
    if (ctx->pc != 0x2F2CE4u) { return; }
    ctx->pc = 0x2F2CE4u;
    // 0x2f2ce4: 0xdfbf0030
    ctx->pc = 0x2f2ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2ce8: 0xdfb20020
    ctx->pc = 0x2f2ce8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2cec: 0xdfb10010
    ctx->pc = 0x2f2cecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2cf0: 0xdfb00000
    ctx->pc = 0x2f2cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2cf4: 0x80bcc06
    ctx->pc = 0x2F2CF4u;
    ctx->pc = 0x2F2CF8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2F3018u;
    _updateTempTackData_0x2f3018(rdram, ctx, runtime); return;
    ctx->pc = 0x2F2CFCu;
}
