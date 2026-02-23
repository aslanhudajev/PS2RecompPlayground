#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _pictureHeader
// Address: 0x161ab8 - 0x161b84
void _pictureHeader_0x161ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_pictureHeader");


    ctx->pc = 0x161ab8u;

    // 0x161ab8: 0x27bdffc0
    ctx->pc = 0x161ab8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x161abc: 0x2404000a
    ctx->pc = 0x161abcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10));
    // 0x161ac0: 0xffb20020
    ctx->pc = 0x161ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x161ac4: 0xffb00000
    ctx->pc = 0x161ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161ac8: 0x3c120023
    ctx->pc = 0x161ac8u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x161acc: 0xffbf0030
    ctx->pc = 0x161accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x161ad0: 0x3c100023
    ctx->pc = 0x161ad0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x161ad4: 0xc0585d4
    ctx->pc = 0x161AD4u;
    SET_GPR_U32(ctx, 31, 0x161ADCu);
    ctx->pc = 0x161AD8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161ADCu; }
        else if (ctx->pc != 0x161ADCu) { ctx->pc = 0x161ADCu; }
    }
    if (ctx->pc != 0x161ADCu) { return; }
    ctx->pc = 0x161ADCu;
    // 0x161adc: 0xae02a3b8
    ctx->pc = 0x161adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943672), GPR_U32(ctx, 2));
    // 0x161ae0: 0xc0585d4
    ctx->pc = 0x161AE0u;
    SET_GPR_U32(ctx, 31, 0x161AE8u);
    ctx->pc = 0x161AE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AE8u; }
        else if (ctx->pc != 0x161AE8u) { ctx->pc = 0x161AE8u; }
    }
    if (ctx->pc != 0x161AE8u) { return; }
    ctx->pc = 0x161AE8u;
    // 0x161ae8: 0x3c100023
    ctx->pc = 0x161ae8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x161aec: 0xae42a3bc
    ctx->pc = 0x161aecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294943676), GPR_U32(ctx, 2));
    // 0x161af0: 0xc0585d4
    ctx->pc = 0x161AF0u;
    SET_GPR_U32(ctx, 31, 0x161AF8u);
    ctx->pc = 0x161AF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AF8u; }
        else if (ctx->pc != 0x161AF8u) { ctx->pc = 0x161AF8u; }
    }
    if (ctx->pc != 0x161AF8u) { return; }
    ctx->pc = 0x161AF8u;
    // 0x161af8: 0x8e43a3bc
    ctx->pc = 0x161af8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294943676)));
    // 0x161afc: 0xae02a3c0
    ctx->pc = 0x161afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943680), GPR_U32(ctx, 2));
    // 0x161b00: 0x2462fffe
    ctx->pc = 0x161b00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x161b04: 0x2c420002
    ctx->pc = 0x161b04u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x161b08: 0x1040000b
    ctx->pc = 0x161B08u;
    {
        const bool branch_taken_0x161b08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x161B0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x161b08) {
            ctx->pc = 0x161B38u;
            goto label_161b38;
        }
    }
    ctx->pc = 0x161B10u;
    // 0x161b10: 0x24040001
    ctx->pc = 0x161b10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x161b14: 0xc0585d4
    ctx->pc = 0x161B14u;
    SET_GPR_U32(ctx, 31, 0x161B1Cu);
    ctx->pc = 0x161B18u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B1Cu; }
        else if (ctx->pc != 0x161B1Cu) { ctx->pc = 0x161B1Cu; }
    }
    if (ctx->pc != 0x161B1Cu) { return; }
    ctx->pc = 0x161B1Cu;
    // 0x161b1c: 0x3c110023
    ctx->pc = 0x161b1cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x161b20: 0x0
    ctx->pc = 0x161b20u;
    // NOP
    // 0x161b24: 0xc0585d4
    ctx->pc = 0x161B24u;
    SET_GPR_U32(ctx, 31, 0x161B2Cu);
    ctx->pc = 0x161B28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B2Cu; }
        else if (ctx->pc != 0x161B2Cu) { ctx->pc = 0x161B2Cu; }
    }
    if (ctx->pc != 0x161B2Cu) { return; }
    ctx->pc = 0x161B2Cu;
    // 0x161b2c: 0xae22a3c8
    ctx->pc = 0x161b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294943688), GPR_U32(ctx, 2));
    // 0x161b30: 0x8e43a3bc
    ctx->pc = 0x161b30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294943676)));
    // 0x161b34: 0x24020003
    ctx->pc = 0x161b34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_161b38:
    // 0x161b38: 0x14620008
    ctx->pc = 0x161B38u;
    {
        const bool branch_taken_0x161b38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x161B3Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x161b38) {
            ctx->pc = 0x161B5Cu;
            goto label_161b5c;
        }
    }
    ctx->pc = 0x161B40u;
    // 0x161b40: 0xc0585d4
    ctx->pc = 0x161B40u;
    SET_GPR_U32(ctx, 31, 0x161B48u);
    ctx->pc = 0x161B44u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B48u; }
        else if (ctx->pc != 0x161B48u) { ctx->pc = 0x161B48u; }
    }
    if (ctx->pc != 0x161B48u) { return; }
    ctx->pc = 0x161B48u;
    // 0x161b48: 0x3c110023
    ctx->pc = 0x161b48u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x161b4c: 0x0
    ctx->pc = 0x161b4cu;
    // NOP
    // 0x161b50: 0xc0585d4
    ctx->pc = 0x161B50u;
    SET_GPR_U32(ctx, 31, 0x161B58u);
    ctx->pc = 0x161B54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B58u; }
        else if (ctx->pc != 0x161B58u) { ctx->pc = 0x161B58u; }
    }
    if (ctx->pc != 0x161B58u) { return; }
    ctx->pc = 0x161B58u;
    // 0x161b58: 0x0
    ctx->pc = 0x161b58u;
    // NOP
label_161b5c:
    // 0x161b5c: 0xc05879a
    ctx->pc = 0x161B5Cu;
    SET_GPR_U32(ctx, 31, 0x161B64u);
    ctx->pc = 0x161E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        _extrainfo_0x161e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B64u; }
        else if (ctx->pc != 0x161B64u) { ctx->pc = 0x161B64u; }
    }
    if (ctx->pc != 0x161B64u) { return; }
    ctx->pc = 0x161B64u;
    // 0x161b64: 0xc0586e2
    ctx->pc = 0x161B64u;
    SET_GPR_U32(ctx, 31, 0x161B6Cu);
    ctx->pc = 0x161B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        _extensionAndUserData_0x161b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B6Cu; }
        else if (ctx->pc != 0x161B6Cu) { ctx->pc = 0x161B6Cu; }
    }
    if (ctx->pc != 0x161B6Cu) { return; }
    ctx->pc = 0x161B6Cu;
    // 0x161b6c: 0xdfbf0030
    ctx->pc = 0x161b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161b70: 0xdfb20020
    ctx->pc = 0x161b70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161b74: 0xdfb10010
    ctx->pc = 0x161b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161b78: 0xdfb00000
    ctx->pc = 0x161b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161b7c: 0x80587a8
    ctx->pc = 0x161B7Cu;
    ctx->pc = 0x161B80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x161EA0u;
    _updateTempTackData_0x161ea0(rdram, ctx, runtime); return;
    ctx->pc = 0x161B84u;
}
