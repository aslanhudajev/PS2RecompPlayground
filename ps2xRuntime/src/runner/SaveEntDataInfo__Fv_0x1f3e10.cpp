#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SaveEntDataInfo__Fv
// Address: 0x1f3e10 - 0x1f406c
void SaveEntDataInfo__Fv_0x1f3e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SaveEntDataInfo__Fv");


    ctx->pc = 0x1f3e10u;

    // 0x1f3e10: 0x27bdff40
    ctx->pc = 0x1f3e10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1f3e14: 0x3c020027
    ctx->pc = 0x1f3e14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f3e18: 0x7fbf0010
    ctx->pc = 0x1f3e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1f3e1c: 0x2444c970
    ctx->pc = 0x1f3e1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953328));
    // 0x1f3e20: 0xc07cf6c
    ctx->pc = 0x1F3E20u;
    SET_GPR_U32(ctx, 31, 0x1F3E28u);
    ctx->pc = 0x1F3E24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1F3DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        myOpen__FPc_0x1f3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E28u; }
        else if (ctx->pc != 0x1F3E28u) { ctx->pc = 0x1F3E28u; }
    }
    if (ctx->pc != 0x1F3E28u) { return; }
    ctx->pc = 0x1F3E28u;
    // 0x1f3e28: 0x70408628
    ctx->pc = 0x1f3e28u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f3e2c: 0x3c020050
    ctx->pc = 0x1f3e2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1f3e30: 0x2445ea20
    ctx->pc = 0x1f3e30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294961696));
    // 0x1f3e34: 0x72002628
    ctx->pc = 0x1f3e34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f3e38: 0xc05646a
    ctx->pc = 0x1F3E38u;
    SET_GPR_U32(ctx, 31, 0x1F3E40u);
    ctx->pc = 0x1F3E3Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4304));
    ctx->pc = 0x1591A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x1591a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E40u; }
        else if (ctx->pc != 0x1F3E40u) { ctx->pc = 0x1F3E40u; }
    }
    if (ctx->pc != 0x1F3E40u) { return; }
    ctx->pc = 0x1F3E40u;
    // 0x1f3e40: 0xc0562e0
    ctx->pc = 0x1F3E40u;
    SET_GPR_U32(ctx, 31, 0x1F3E48u);
    ctx->pc = 0x1F3E44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E48u; }
        else if (ctx->pc != 0x1F3E48u) { ctx->pc = 0x1F3E48u; }
    }
    if (ctx->pc != 0x1F3E48u) { return; }
    ctx->pc = 0x1F3E48u;
    // 0x1f3e48: 0x3c020027
    ctx->pc = 0x1f3e48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f3e4c: 0xc07cf6c
    ctx->pc = 0x1F3E4Cu;
    SET_GPR_U32(ctx, 31, 0x1F3E54u);
    ctx->pc = 0x1F3E50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953360));
    ctx->pc = 0x1F3DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        myOpen__FPc_0x1f3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E54u; }
        else if (ctx->pc != 0x1F3E54u) { ctx->pc = 0x1F3E54u; }
    }
    if (ctx->pc != 0x1F3E54u) { return; }
    ctx->pc = 0x1F3E54u;
    // 0x1f3e54: 0x70408628
    ctx->pc = 0x1f3e54u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f3e58: 0x3c0201fb
    ctx->pc = 0x1f3e58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)507 << 16));
    // 0x1f3e5c: 0x72002628
    ctx->pc = 0x1f3e5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f3e60: 0x34451c28
    ctx->pc = 0x1f3e60u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 7208));
    // 0x1f3e64: 0xc05646a
    ctx->pc = 0x1F3E64u;
    SET_GPR_U32(ctx, 31, 0x1F3E6Cu);
    ctx->pc = 0x1F3E68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 942));
    ctx->pc = 0x1591A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x1591a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E6Cu; }
        else if (ctx->pc != 0x1F3E6Cu) { ctx->pc = 0x1F3E6Cu; }
    }
    if (ctx->pc != 0x1F3E6Cu) { return; }
    ctx->pc = 0x1F3E6Cu;
    // 0x1f3e6c: 0xc0562e0
    ctx->pc = 0x1F3E6Cu;
    SET_GPR_U32(ctx, 31, 0x1F3E74u);
    ctx->pc = 0x1F3E70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E74u; }
        else if (ctx->pc != 0x1F3E74u) { ctx->pc = 0x1F3E74u; }
    }
    if (ctx->pc != 0x1F3E74u) { return; }
    ctx->pc = 0x1F3E74u;
    // 0x1f3e74: 0x3c020027
    ctx->pc = 0x1f3e74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f3e78: 0xc07cf6c
    ctx->pc = 0x1F3E78u;
    SET_GPR_U32(ctx, 31, 0x1F3E80u);
    ctx->pc = 0x1F3E7Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953392));
    ctx->pc = 0x1F3DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        myOpen__FPc_0x1f3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E80u; }
        else if (ctx->pc != 0x1F3E80u) { ctx->pc = 0x1F3E80u; }
    }
    if (ctx->pc != 0x1F3E80u) { return; }
    ctx->pc = 0x1F3E80u;
    // 0x1f3e80: 0x70408628
    ctx->pc = 0x1f3e80u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f3e84: 0x3c02004a
    ctx->pc = 0x1f3e84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)74 << 16));
    // 0x1f3e88: 0x2445f560
    ctx->pc = 0x1f3e88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294964576));
    // 0x1f3e8c: 0x72002628
    ctx->pc = 0x1f3e8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f3e90: 0xc05646a
    ctx->pc = 0x1F3E90u;
    SET_GPR_U32(ctx, 31, 0x1F3E98u);
    ctx->pc = 0x1F3E94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 471));
    ctx->pc = 0x1591A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x1591a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E98u; }
        else if (ctx->pc != 0x1F3E98u) { ctx->pc = 0x1F3E98u; }
    }
    if (ctx->pc != 0x1F3E98u) { return; }
    ctx->pc = 0x1F3E98u;
    // 0x1f3e98: 0xc0562e0
    ctx->pc = 0x1F3E98u;
    SET_GPR_U32(ctx, 31, 0x1F3EA0u);
    ctx->pc = 0x1F3E9Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EA0u; }
        else if (ctx->pc != 0x1F3EA0u) { ctx->pc = 0x1F3EA0u; }
    }
    if (ctx->pc != 0x1F3EA0u) { return; }
    ctx->pc = 0x1F3EA0u;
    // 0x1f3ea0: 0x3c020027
    ctx->pc = 0x1f3ea0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f3ea4: 0xc07cf6c
    ctx->pc = 0x1F3EA4u;
    SET_GPR_U32(ctx, 31, 0x1F3EACu);
    ctx->pc = 0x1F3EA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953424));
    ctx->pc = 0x1F3DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        myOpen__FPc_0x1f3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EACu; }
        else if (ctx->pc != 0x1F3EACu) { ctx->pc = 0x1F3EACu; }
    }
    if (ctx->pc != 0x1F3EACu) { return; }
    ctx->pc = 0x1F3EACu;
    // 0x1f3eac: 0x70408628
    ctx->pc = 0x1f3eacu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f3eb0: 0x3c020092
    ctx->pc = 0x1f3eb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)146 << 16));
    // 0x1f3eb4: 0x24454d00
    ctx->pc = 0x1f3eb4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 19712));
    // 0x1f3eb8: 0x72002628
    ctx->pc = 0x1f3eb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f3ebc: 0xc05646a
    ctx->pc = 0x1F3EBCu;
    SET_GPR_U32(ctx, 31, 0x1F3EC4u);
    ctx->pc = 0x1F3EC0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13188));
    ctx->pc = 0x1591A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x1591a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EC4u; }
        else if (ctx->pc != 0x1F3EC4u) { ctx->pc = 0x1F3EC4u; }
    }
    if (ctx->pc != 0x1F3EC4u) { return; }
    ctx->pc = 0x1F3EC4u;
    // 0x1f3ec4: 0xc0562e0
    ctx->pc = 0x1F3EC4u;
    SET_GPR_U32(ctx, 31, 0x1F3ECCu);
    ctx->pc = 0x1F3EC8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3ECCu; }
        else if (ctx->pc != 0x1F3ECCu) { ctx->pc = 0x1F3ECCu; }
    }
    if (ctx->pc != 0x1F3ECCu) { return; }
    ctx->pc = 0x1F3ECCu;
    // 0x1f3ecc: 0x3c020027
    ctx->pc = 0x1f3eccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f3ed0: 0xc07cf6c
    ctx->pc = 0x1F3ED0u;
    SET_GPR_U32(ctx, 31, 0x1F3ED8u);
    ctx->pc = 0x1F3ED4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953456));
    ctx->pc = 0x1F3DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        myOpen__FPc_0x1f3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3ED8u; }
        else if (ctx->pc != 0x1F3ED8u) { ctx->pc = 0x1F3ED8u; }
    }
    if (ctx->pc != 0x1F3ED8u) { return; }
    ctx->pc = 0x1F3ED8u;
    // 0x1f3ed8: 0x70408628
    ctx->pc = 0x1f3ed8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f3edc: 0x3c020051
    ctx->pc = 0x1f3edcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1f3ee0: 0x24451dd0
    ctx->pc = 0x1f3ee0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 7632));
    // 0x1f3ee4: 0x72002628
    ctx->pc = 0x1f3ee4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f3ee8: 0xc05646a
    ctx->pc = 0x1F3EE8u;
    SET_GPR_U32(ctx, 31, 0x1F3EF0u);
    ctx->pc = 0x1F3EECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1140));
    ctx->pc = 0x1591A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x1591a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EF0u; }
        else if (ctx->pc != 0x1F3EF0u) { ctx->pc = 0x1F3EF0u; }
    }
    if (ctx->pc != 0x1F3EF0u) { return; }
    ctx->pc = 0x1F3EF0u;
    // 0x1f3ef0: 0xc0562e0
    ctx->pc = 0x1F3EF0u;
    SET_GPR_U32(ctx, 31, 0x1F3EF8u);
    ctx->pc = 0x1F3EF4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3EF8u; }
        else if (ctx->pc != 0x1F3EF8u) { ctx->pc = 0x1F3EF8u; }
    }
    if (ctx->pc != 0x1F3EF8u) { return; }
    ctx->pc = 0x1F3EF8u;
    // 0x1f3ef8: 0x3c020027
    ctx->pc = 0x1f3ef8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f3efc: 0xc07cf6c
    ctx->pc = 0x1F3EFCu;
    SET_GPR_U32(ctx, 31, 0x1F3F04u);
    ctx->pc = 0x1F3F00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953488));
    ctx->pc = 0x1F3DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        myOpen__FPc_0x1f3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F04u; }
        else if (ctx->pc != 0x1F3F04u) { ctx->pc = 0x1F3F04u; }
    }
    if (ctx->pc != 0x1F3F04u) { return; }
    ctx->pc = 0x1F3F04u;
    // 0x1f3f04: 0x70408628
    ctx->pc = 0x1f3f04u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f3f08: 0x3c020051
    ctx->pc = 0x1f3f08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1f3f0c: 0x244525f0
    ctx->pc = 0x1f3f0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 9712));
    // 0x1f3f10: 0x72002628
    ctx->pc = 0x1f3f10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f3f14: 0xc05646a
    ctx->pc = 0x1F3F14u;
    SET_GPR_U32(ctx, 31, 0x1F3F1Cu);
    ctx->pc = 0x1F3F18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 3640));
    ctx->pc = 0x1591A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x1591a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F1Cu; }
        else if (ctx->pc != 0x1F3F1Cu) { ctx->pc = 0x1F3F1Cu; }
    }
    if (ctx->pc != 0x1F3F1Cu) { return; }
    ctx->pc = 0x1F3F1Cu;
    // 0x1f3f1c: 0xc0562e0
    ctx->pc = 0x1F3F1Cu;
    SET_GPR_U32(ctx, 31, 0x1F3F24u);
    ctx->pc = 0x1F3F20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F24u; }
        else if (ctx->pc != 0x1F3F24u) { ctx->pc = 0x1F3F24u; }
    }
    if (ctx->pc != 0x1F3F24u) { return; }
    ctx->pc = 0x1F3F24u;
    // 0x1f3f24: 0x3c020027
    ctx->pc = 0x1f3f24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f3f28: 0xc07cf6c
    ctx->pc = 0x1F3F28u;
    SET_GPR_U32(ctx, 31, 0x1F3F30u);
    ctx->pc = 0x1F3F2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953520));
    ctx->pc = 0x1F3DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        myOpen__FPc_0x1f3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F30u; }
        else if (ctx->pc != 0x1F3F30u) { ctx->pc = 0x1F3F30u; }
    }
    if (ctx->pc != 0x1F3F30u) { return; }
    ctx->pc = 0x1F3F30u;
    // 0x1f3f30: 0x70408628
    ctx->pc = 0x1f3f30u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f3f34: 0x3c020050
    ctx->pc = 0x1f3f34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1f3f38: 0x244508b0
    ctx->pc = 0x1f3f38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 2224));
    // 0x1f3f3c: 0x72002628
    ctx->pc = 0x1f3f3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f3f40: 0xc05646a
    ctx->pc = 0x1F3F40u;
    SET_GPR_U32(ctx, 31, 0x1F3F48u);
    ctx->pc = 0x1F3F44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 456));
    ctx->pc = 0x1591A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x1591a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F48u; }
        else if (ctx->pc != 0x1F3F48u) { ctx->pc = 0x1F3F48u; }
    }
    if (ctx->pc != 0x1F3F48u) { return; }
    ctx->pc = 0x1F3F48u;
    // 0x1f3f48: 0xc0562e0
    ctx->pc = 0x1F3F48u;
    SET_GPR_U32(ctx, 31, 0x1F3F50u);
    ctx->pc = 0x1F3F4Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F50u; }
        else if (ctx->pc != 0x1F3F50u) { ctx->pc = 0x1F3F50u; }
    }
    if (ctx->pc != 0x1F3F50u) { return; }
    ctx->pc = 0x1F3F50u;
    // 0x1f3f50: 0x3c020027
    ctx->pc = 0x1f3f50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f3f54: 0xc07cf6c
    ctx->pc = 0x1F3F54u;
    SET_GPR_U32(ctx, 31, 0x1F3F5Cu);
    ctx->pc = 0x1F3F58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953552));
    ctx->pc = 0x1F3DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        myOpen__FPc_0x1f3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F5Cu; }
        else if (ctx->pc != 0x1F3F5Cu) { ctx->pc = 0x1F3F5Cu; }
    }
    if (ctx->pc != 0x1F3F5Cu) { return; }
    ctx->pc = 0x1F3F5Cu;
    // 0x1f3f5c: 0x70408628
    ctx->pc = 0x1f3f5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f3f60: 0x3c020050
    ctx->pc = 0x1f3f60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1f3f64: 0x24450a80
    ctx->pc = 0x1f3f64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 2688));
    // 0x1f3f68: 0x72002628
    ctx->pc = 0x1f3f68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f3f6c: 0xc05646a
    ctx->pc = 0x1F3F6Cu;
    SET_GPR_U32(ctx, 31, 0x1F3F74u);
    ctx->pc = 0x1F3F70u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 184));
    ctx->pc = 0x1591A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x1591a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F74u; }
        else if (ctx->pc != 0x1F3F74u) { ctx->pc = 0x1F3F74u; }
    }
    if (ctx->pc != 0x1F3F74u) { return; }
    ctx->pc = 0x1F3F74u;
    // 0x1f3f74: 0xc0562e0
    ctx->pc = 0x1F3F74u;
    SET_GPR_U32(ctx, 31, 0x1F3F7Cu);
    ctx->pc = 0x1F3F78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3F7Cu; }
        else if (ctx->pc != 0x1F3F7Cu) { ctx->pc = 0x1F3F7Cu; }
    }
    if (ctx->pc != 0x1F3F7Cu) { return; }
    ctx->pc = 0x1F3F7Cu;
    // 0x1f3f7c: 0x3c02009a
    ctx->pc = 0x1f3f7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)154 << 16));
    // 0x1f3f80: 0x27a40020
    ctx->pc = 0x1f3f80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f3f84: 0x10000012
    ctx->pc = 0x1F3F84u;
    {
        const bool branch_taken_0x1f3f84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3F88u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1296));
        if (branch_taken_0x1f3f84) {
            ctx->pc = 0x1F3FD0u;
            goto label_1f3fd0;
        }
    }
    ctx->pc = 0x1F3F8Cu;
label_1f3f8c:
    // 0x1f3f8c: 0x84430000
    ctx->pc = 0x1f3f8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f3f90: 0x306207ff
    ctx->pc = 0x1f3f90u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2047));
    // 0x1f3f94: 0x10400007
    ctx->pc = 0x1F3F94u;
    {
        const bool branch_taken_0x1f3f94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3F98u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        if (branch_taken_0x1f3f94) {
            ctx->pc = 0x1F3FB4u;
            goto label_1f3fb4;
        }
    }
    ctx->pc = 0x1F3F9Cu;
    // 0x1f3f9c: 0x3c020027
    ctx->pc = 0x1f3f9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f3fa0: 0xc05114a
    ctx->pc = 0x1F3FA0u;
    SET_GPR_U32(ctx, 31, 0x1F3FA8u);
    ctx->pc = 0x1F3FA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953584));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3FA8u; }
        else if (ctx->pc != 0x1F3FA8u) { ctx->pc = 0x1F3FA8u; }
    }
    if (ctx->pc != 0x1F3FA8u) { return; }
    ctx->pc = 0x1F3FA8u;
label_1f3fa8:
    // 0x1f3fa8: 0x1000ffff
    ctx->pc = 0x1F3FA8u;
    {
        const bool branch_taken_0x1f3fa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3fa8) {
            ctx->pc = 0x1F3FA8u;
            goto label_1f3fa8;
        }
    }
    ctx->pc = 0x1F3FB0u;
    // 0x1f3fb0: 0x312c3
    ctx->pc = 0x1f3fb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
label_1f3fb4:
    // 0x1f3fb4: 0x4610003
    ctx->pc = 0x1F3FB4u;
    {
        const bool branch_taken_0x1f3fb4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1f3fb4) {
            ctx->pc = 0x1F3FC4u;
            goto label_1f3fc4;
        }
    }
    ctx->pc = 0x1F3FBCu;
    // 0x1f3fbc: 0x246207ff
    ctx->pc = 0x1f3fbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x1f3fc0: 0x212c3
    ctx->pc = 0x1f3fc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_1f3fc4:
    // 0x1f3fc4: 0xa4820000
    ctx->pc = 0x1f3fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f3fc8: 0x24840002
    ctx->pc = 0x1f3fc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x1f3fcc: 0x24a50004
    ctx->pc = 0x1f3fccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
label_1f3fd0:
    // 0x1f3fd0: 0x8ca20000
    ctx->pc = 0x1f3fd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f3fd4: 0x1440ffed
    ctx->pc = 0x1F3FD4u;
    {
        const bool branch_taken_0x1f3fd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f3fd4) {
            ctx->pc = 0x1F3F8Cu;
            goto label_1f3f8c;
        }
    }
    ctx->pc = 0x1F3FDCu;
    // 0x1f3fdc: 0x3c020027
    ctx->pc = 0x1f3fdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f3fe0: 0xc07cf6c
    ctx->pc = 0x1F3FE0u;
    SET_GPR_U32(ctx, 31, 0x1F3FE8u);
    ctx->pc = 0x1F3FE4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953616));
    ctx->pc = 0x1F3DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        myOpen__FPc_0x1f3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3FE8u; }
        else if (ctx->pc != 0x1F3FE8u) { ctx->pc = 0x1F3FE8u; }
    }
    if (ctx->pc != 0x1F3FE8u) { return; }
    ctx->pc = 0x1F3FE8u;
    // 0x1f3fe8: 0x70408628
    ctx->pc = 0x1f3fe8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f3fec: 0x3c020050
    ctx->pc = 0x1f3fecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1f3ff0: 0x244502e0
    ctx->pc = 0x1f3ff0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 736));
    // 0x1f3ff4: 0x72002628
    ctx->pc = 0x1f3ff4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f3ff8: 0xc05646a
    ctx->pc = 0x1F3FF8u;
    SET_GPR_U32(ctx, 31, 0x1F4000u);
    ctx->pc = 0x1F3FFCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1480));
    ctx->pc = 0x1591A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x1591a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4000u; }
        else if (ctx->pc != 0x1F4000u) { ctx->pc = 0x1F4000u; }
    }
    if (ctx->pc != 0x1F4000u) { return; }
    ctx->pc = 0x1F4000u;
    // 0x1f4000: 0xc0562e0
    ctx->pc = 0x1F4000u;
    SET_GPR_U32(ctx, 31, 0x1F4008u);
    ctx->pc = 0x1F4004u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4008u; }
        else if (ctx->pc != 0x1F4008u) { ctx->pc = 0x1F4008u; }
    }
    if (ctx->pc != 0x1F4008u) { return; }
    ctx->pc = 0x1F4008u;
    // 0x1f4008: 0x3c020027
    ctx->pc = 0x1f4008u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f400c: 0xc07cf6c
    ctx->pc = 0x1F400Cu;
    SET_GPR_U32(ctx, 31, 0x1F4014u);
    ctx->pc = 0x1F4010u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953648));
    ctx->pc = 0x1F3DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        myOpen__FPc_0x1f3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4014u; }
        else if (ctx->pc != 0x1F4014u) { ctx->pc = 0x1F4014u; }
    }
    if (ctx->pc != 0x1F4014u) { return; }
    ctx->pc = 0x1F4014u;
    // 0x1f4014: 0x70408628
    ctx->pc = 0x1f4014u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f4018: 0x27a50020
    ctx->pc = 0x1f4018u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f401c: 0x72002628
    ctx->pc = 0x1f401cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f4020: 0xc05646a
    ctx->pc = 0x1F4020u;
    SET_GPR_U32(ctx, 31, 0x1F4028u);
    ctx->pc = 0x1F4024u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 148));
    ctx->pc = 0x1591A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x1591a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4028u; }
        else if (ctx->pc != 0x1F4028u) { ctx->pc = 0x1F4028u; }
    }
    if (ctx->pc != 0x1F4028u) { return; }
    ctx->pc = 0x1F4028u;
    // 0x1f4028: 0xc0562e0
    ctx->pc = 0x1F4028u;
    SET_GPR_U32(ctx, 31, 0x1F4030u);
    ctx->pc = 0x1F402Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4030u; }
        else if (ctx->pc != 0x1F4030u) { ctx->pc = 0x1F4030u; }
    }
    if (ctx->pc != 0x1F4030u) { return; }
    ctx->pc = 0x1F4030u;
    // 0x1f4030: 0x3c020027
    ctx->pc = 0x1f4030u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f4034: 0xc07cf6c
    ctx->pc = 0x1F4034u;
    SET_GPR_U32(ctx, 31, 0x1F403Cu);
    ctx->pc = 0x1F4038u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953680));
    ctx->pc = 0x1F3DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        myOpen__FPc_0x1f3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F403Cu; }
        else if (ctx->pc != 0x1F403Cu) { ctx->pc = 0x1F403Cu; }
    }
    if (ctx->pc != 0x1F403Cu) { return; }
    ctx->pc = 0x1F403Cu;
    // 0x1f403c: 0x70408628
    ctx->pc = 0x1f403cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f4040: 0x3c020050
    ctx->pc = 0x1f4040u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1f4044: 0x2445fb10
    ctx->pc = 0x1f4044u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294966032));
    // 0x1f4048: 0x72002628
    ctx->pc = 0x1f4048u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f404c: 0xc05646a
    ctx->pc = 0x1F404Cu;
    SET_GPR_U32(ctx, 31, 0x1F4054u);
    ctx->pc = 0x1F4050u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 180));
    ctx->pc = 0x1591A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceWrite_0x1591a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4054u; }
        else if (ctx->pc != 0x1F4054u) { ctx->pc = 0x1F4054u; }
    }
    if (ctx->pc != 0x1F4054u) { return; }
    ctx->pc = 0x1F4054u;
    // 0x1f4054: 0xc0562e0
    ctx->pc = 0x1F4054u;
    SET_GPR_U32(ctx, 31, 0x1F405Cu);
    ctx->pc = 0x1F4058u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F405Cu; }
        else if (ctx->pc != 0x1F405Cu) { ctx->pc = 0x1F405Cu; }
    }
    if (ctx->pc != 0x1F405Cu) { return; }
    ctx->pc = 0x1F405Cu;
    // 0x1f405c: 0x7bbf0010
    ctx->pc = 0x1f405cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4060: 0x7bb00000
    ctx->pc = 0x1f4060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4064: 0x3e00008
    ctx->pc = 0x1F4064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4068u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3F8Cu: goto label_1f3f8c;
            case 0x1F3FA8u: goto label_1f3fa8;
            case 0x1F3FB4u: goto label_1f3fb4;
            case 0x1F3FC4u: goto label_1f3fc4;
            case 0x1F3FD0u: goto label_1f3fd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F406Cu;
}
