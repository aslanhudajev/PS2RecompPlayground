#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _sequenceDisplayExtension
// Address: 0x164d48 - 0x164de8
void _sequenceDisplayExtension_0x164d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_sequenceDisplayExtension");


    ctx->pc = 0x164d48u;

    // 0x164d48: 0x27bdffd0
    ctx->pc = 0x164d48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x164d4c: 0x24040003
    ctx->pc = 0x164d4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x164d50: 0xffb10010
    ctx->pc = 0x164d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x164d54: 0xffb00000
    ctx->pc = 0x164d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164d58: 0x3c110023
    ctx->pc = 0x164d58u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x164d5c: 0xffbf0020
    ctx->pc = 0x164d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x164d60: 0xc0585d4
    ctx->pc = 0x164D60u;
    SET_GPR_U32(ctx, 31, 0x164D68u);
    ctx->pc = 0x164D64u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D68u; }
        else if (ctx->pc != 0x164D68u) { ctx->pc = 0x164D68u; }
    }
    if (ctx->pc != 0x164D68u) { return; }
    ctx->pc = 0x164D68u;
    // 0x164d68: 0x0
    ctx->pc = 0x164d68u;
    // NOP
    // 0x164d6c: 0xc0585d4
    ctx->pc = 0x164D6Cu;
    SET_GPR_U32(ctx, 31, 0x164D74u);
    ctx->pc = 0x164D70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D74u; }
        else if (ctx->pc != 0x164D74u) { ctx->pc = 0x164D74u; }
    }
    if (ctx->pc != 0x164D74u) { return; }
    ctx->pc = 0x164D74u;
    // 0x164d74: 0x1040000d
    ctx->pc = 0x164D74u;
    {
        const bool branch_taken_0x164d74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x164D78u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294943648), GPR_U32(ctx, 2));
        if (branch_taken_0x164d74) {
            ctx->pc = 0x164DACu;
            goto label_164dac;
        }
    }
    ctx->pc = 0x164D7Cu;
    // 0x164d7c: 0x24040008
    ctx->pc = 0x164d7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x164d80: 0xc0585d4
    ctx->pc = 0x164D80u;
    SET_GPR_U32(ctx, 31, 0x164D88u);
    ctx->pc = 0x164D84u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D88u; }
        else if (ctx->pc != 0x164D88u) { ctx->pc = 0x164D88u; }
    }
    if (ctx->pc != 0x164D88u) { return; }
    ctx->pc = 0x164D88u;
    // 0x164d88: 0x3c110023
    ctx->pc = 0x164d88u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x164d8c: 0x0
    ctx->pc = 0x164d8cu;
    // NOP
    // 0x164d90: 0xc0585d4
    ctx->pc = 0x164D90u;
    SET_GPR_U32(ctx, 31, 0x164D98u);
    ctx->pc = 0x164D94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D98u; }
        else if (ctx->pc != 0x164D98u) { ctx->pc = 0x164D98u; }
    }
    if (ctx->pc != 0x164D98u) { return; }
    ctx->pc = 0x164D98u;
    // 0x164d98: 0x3c100023
    ctx->pc = 0x164d98u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x164d9c: 0x0
    ctx->pc = 0x164d9cu;
    // NOP
    // 0x164da0: 0xc0585d4
    ctx->pc = 0x164DA0u;
    SET_GPR_U32(ctx, 31, 0x164DA8u);
    ctx->pc = 0x164DA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164DA8u; }
        else if (ctx->pc != 0x164DA8u) { ctx->pc = 0x164DA8u; }
    }
    if (ctx->pc != 0x164DA8u) { return; }
    ctx->pc = 0x164DA8u;
    // 0x164da8: 0xae02a3ac
    ctx->pc = 0x164da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943660), GPR_U32(ctx, 2));
label_164dac:
    // 0x164dac: 0x2404000e
    ctx->pc = 0x164dacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    // 0x164db0: 0xc0585d4
    ctx->pc = 0x164DB0u;
    SET_GPR_U32(ctx, 31, 0x164DB8u);
    ctx->pc = 0x164DB4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164DB8u; }
        else if (ctx->pc != 0x164DB8u) { ctx->pc = 0x164DB8u; }
    }
    if (ctx->pc != 0x164DB8u) { return; }
    ctx->pc = 0x164DB8u;
    // 0x164db8: 0x3c110023
    ctx->pc = 0x164db8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x164dbc: 0x0
    ctx->pc = 0x164dbcu;
    // NOP
    // 0x164dc0: 0xc0585d4
    ctx->pc = 0x164DC0u;
    SET_GPR_U32(ctx, 31, 0x164DC8u);
    ctx->pc = 0x164DC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164DC8u; }
        else if (ctx->pc != 0x164DC8u) { ctx->pc = 0x164DC8u; }
    }
    if (ctx->pc != 0x164DC8u) { return; }
    ctx->pc = 0x164DC8u;
    // 0x164dc8: 0xc0585d4
    ctx->pc = 0x164DC8u;
    SET_GPR_U32(ctx, 31, 0x164DD0u);
    ctx->pc = 0x164DCCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164DD0u; }
        else if (ctx->pc != 0x164DD0u) { ctx->pc = 0x164DD0u; }
    }
    if (ctx->pc != 0x164DD0u) { return; }
    ctx->pc = 0x164DD0u;
    // 0x164dd0: 0xae22a3b4
    ctx->pc = 0x164dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294943668), GPR_U32(ctx, 2));
    // 0x164dd4: 0xdfbf0020
    ctx->pc = 0x164dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164dd8: 0xdfb10010
    ctx->pc = 0x164dd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164ddc: 0xdfb00000
    ctx->pc = 0x164ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164de0: 0x3e00008
    ctx->pc = 0x164DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164DE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164DACu: goto label_164dac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164DE8u;
}
