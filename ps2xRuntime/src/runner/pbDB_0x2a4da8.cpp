#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDB
// Address: 0x2a4da8 - 0x2a4e64
void pbDB_0x2a4da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a4da8u;

    // 0x2a4da8: 0x27bdffd0
    ctx->pc = 0x2a4da8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a4dac: 0xffbf0020
    ctx->pc = 0x2a4dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a4db0: 0xffb10010
    ctx->pc = 0x2a4db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a4db4: 0xc0b89a4
    ctx->pc = 0x2A4DB4u;
    SET_GPR_U32(ctx, 31, 0x2A4DBCu);
    ctx->pc = 0x2A4DB8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x2E2690u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDevVu0Pause_0x2e2690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4DBCu; }
    }
    if (ctx->pc != 0x2A4DBCu) { return; }
    ctx->pc = 0x2A4DBCu;
    // 0x2a4dbc: 0x3c10003c
    ctx->pc = 0x2a4dbcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x2a4dc0: 0xae024250
    ctx->pc = 0x2a4dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16976), GPR_U32(ctx, 2));
    // 0x2a4dc4: 0x3c11003c
    ctx->pc = 0x2a4dc4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x2a4dc8: 0xc0b8a00
    ctx->pc = 0x2A4DC8u;
    SET_GPR_U32(ctx, 31, 0x2A4DD0u);
    ctx->pc = 0x2A4DCCu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18336)));
    ctx->pc = 0x2E2800u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDevVu0Exec_0x2e2800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4DD0u; }
    }
    if (ctx->pc != 0x2A4DD0u) { return; }
    ctx->pc = 0x2A4DD0u;
    // 0x2a4dd0: 0xc0b89d0
    ctx->pc = 0x2A4DD0u;
    SET_GPR_U32(ctx, 31, 0x2A4DD8u);
    ctx->pc = 0x2A4DD4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2E2740u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDevVu0PutDBit_0x2e2740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4DD8u; }
    }
    if (ctx->pc != 0x2A4DD8u) { return; }
    ctx->pc = 0x2A4DD8u;
    // 0x2a4dd8: 0xc0b89dc
    ctx->pc = 0x2A4DD8u;
    SET_GPR_U32(ctx, 31, 0x2A4DE0u);
    ctx->pc = 0x2A4DDCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2E2770u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDevVu0PutTBit_0x2e2770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4DE0u; }
    }
    if (ctx->pc != 0x2A4DE0u) { return; }
    ctx->pc = 0x2A4DE0u;
    // 0x2a4de0: 0x3c04003c
    ctx->pc = 0x2a4de0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a4de4: 0xc0b8cf4
    ctx->pc = 0x2A4DE4u;
    SET_GPR_U32(ctx, 31, 0x2A4DECu);
    ctx->pc = 0x2A4DE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16984));
    ctx->pc = 0x2E33D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDevVif0GetCnd_0x2e33d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4DECu; }
    }
    if (ctx->pc != 0x2A4DECu) { return; }
    ctx->pc = 0x2A4DECu;
    // 0x2a4dec: 0xae024250
    ctx->pc = 0x2a4decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16976), GPR_U32(ctx, 2));
    // 0x2a4df0: 0x3c04003c
    ctx->pc = 0x2a4df0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a4df4: 0xc0b8a08
    ctx->pc = 0x2A4DF4u;
    SET_GPR_U32(ctx, 31, 0x2A4DFCu);
    ctx->pc = 0x2A4DF8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17056));
    ctx->pc = 0x2E2820u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDevVu0GetCnd_0x2e2820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4DFCu; }
    }
    if (ctx->pc != 0x2A4DFCu) { return; }
    ctx->pc = 0x2A4DFCu;
    // 0x2a4dfc: 0xc0b8ad0
    ctx->pc = 0x2A4DFCu;
    SET_GPR_U32(ctx, 31, 0x2A4E04u);
    ctx->pc = 0x2A4E00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16976), GPR_U32(ctx, 2));
    ctx->pc = 0x2E2B40u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDevVu1Pause_0x2e2b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4E04u; }
    }
    if (ctx->pc != 0x2A4E04u) { return; }
    ctx->pc = 0x2A4E04u;
    // 0x2a4e04: 0xae024250
    ctx->pc = 0x2a4e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16976), GPR_U32(ctx, 2));
    // 0x2a4e08: 0xc0b8b2e
    ctx->pc = 0x2A4E08u;
    SET_GPR_U32(ctx, 31, 0x2A4E10u);
    ctx->pc = 0x2A4E0Cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18336)));
    ctx->pc = 0x2E2CB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDevVu1Exec_0x2e2cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4E10u; }
    }
    if (ctx->pc != 0x2A4E10u) { return; }
    ctx->pc = 0x2A4E10u;
    // 0x2a4e10: 0xc0b8afc
    ctx->pc = 0x2A4E10u;
    SET_GPR_U32(ctx, 31, 0x2A4E18u);
    ctx->pc = 0x2A4E14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2E2BF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDevVu1PutDBit_0x2e2bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4E18u; }
    }
    if (ctx->pc != 0x2A4E18u) { return; }
    ctx->pc = 0x2A4E18u;
    // 0x2a4e18: 0xc0b8b08
    ctx->pc = 0x2A4E18u;
    SET_GPR_U32(ctx, 31, 0x2A4E20u);
    ctx->pc = 0x2A4E1Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2E2C20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDevVu1PutTBit_0x2e2c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4E20u; }
    }
    if (ctx->pc != 0x2A4E20u) { return; }
    ctx->pc = 0x2A4E20u;
    // 0x2a4e20: 0x3c04003c
    ctx->pc = 0x2a4e20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a4e24: 0xc0b8dc0
    ctx->pc = 0x2A4E24u;
    SET_GPR_U32(ctx, 31, 0x2A4E2Cu);
    ctx->pc = 0x2A4E28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17632));
    ctx->pc = 0x2E3700u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDevVif1GetCnd_0x2e3700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4E2Cu; }
    }
    if (ctx->pc != 0x2A4E2Cu) { return; }
    ctx->pc = 0x2A4E2Cu;
    // 0x2a4e2c: 0xae024250
    ctx->pc = 0x2a4e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16976), GPR_U32(ctx, 2));
    // 0x2a4e30: 0x3c04003c
    ctx->pc = 0x2a4e30u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a4e34: 0xc0b8b3c
    ctx->pc = 0x2A4E34u;
    SET_GPR_U32(ctx, 31, 0x2A4E3Cu);
    ctx->pc = 0x2A4E38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17712));
    ctx->pc = 0x2E2CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDevVu1GetCnd_0x2e2cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4E3Cu; }
    }
    if (ctx->pc != 0x2A4E3Cu) { return; }
    ctx->pc = 0x2A4E3Cu;
    // 0x2a4e3c: 0xae024250
    ctx->pc = 0x2a4e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16976), GPR_U32(ctx, 2));
    // 0x2a4e40: 0x3c04003c
    ctx->pc = 0x2a4e40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a4e44: 0xc0b8c5a
    ctx->pc = 0x2A4E44u;
    SET_GPR_U32(ctx, 31, 0x2A4E4Cu);
    ctx->pc = 0x2A4E48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18288));
    ctx->pc = 0x2E3168u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDevGifGetCnd_0x2e3168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4E4Cu; }
    }
    if (ctx->pc != 0x2A4E4Cu) { return; }
    ctx->pc = 0x2A4E4Cu;
    // 0x2a4e4c: 0xae024250
    ctx->pc = 0x2a4e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16976), GPR_U32(ctx, 2));
    // 0x2a4e50: 0xdfbf0020
    ctx->pc = 0x2a4e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4e54: 0xdfb10010
    ctx->pc = 0x2a4e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4e58: 0xdfb00000
    ctx->pc = 0x2a4e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4e5c: 0x3e00008
    ctx->pc = 0x2A4E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4E60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4E64u;
}
