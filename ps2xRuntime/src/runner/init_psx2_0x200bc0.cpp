#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_psx2
// Address: 0x200bc0 - 0x200d94
void init_psx2_0x200bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x200bc0u;

    // 0x200bc0: 0x27bdffa0
    ctx->pc = 0x200bc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x200bc4: 0xffbf0050
    ctx->pc = 0x200bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x200bc8: 0xffb00040
    ctx->pc = 0x200bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x200bcc: 0xc0c1692
    ctx->pc = 0x200BCCu;
    SET_GPR_U32(ctx, 31, 0x200BD4u);
    ctx->pc = 0x200BD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x305A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x305a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200BD4u; }
    }
    if (ctx->pc != 0x200BD4u) { return; }
    ctx->pc = 0x200BD4u;
    // 0x200bd4: 0xc0bd9fc
    ctx->pc = 0x200BD4u;
    SET_GPR_U32(ctx, 31, 0x200BDCu);
    ctx->pc = 0x200BD8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F67F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdInit_0x2f67f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200BDCu; }
    }
    if (ctx->pc != 0x200BDCu) { return; }
    ctx->pc = 0x200BDCu;
    // 0x200bdc: 0xc0bdc4c
    ctx->pc = 0x200BDCu;
    SET_GPR_U32(ctx, 31, 0x200BE4u);
    ctx->pc = 0x200BE0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2F7130u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdMmode_0x2f7130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200BE4u; }
    }
    if (ctx->pc != 0x200BE4u) { return; }
    ctx->pc = 0x200BE4u;
    // 0x200be4: 0x3a0202d
    ctx->pc = 0x200be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200be8: 0x3c05003a
    ctx->pc = 0x200be8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x200bec: 0x24a545b0
    ctx->pc = 0x200becu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17840));
    // 0x200bf0: 0x3c06003a
    ctx->pc = 0x200bf0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x200bf4: 0x24c645c8
    ctx->pc = 0x200bf4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 17864));
    // 0x200bf8: 0x3c07003a
    ctx->pc = 0x200bf8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x200bfc: 0xc0b6252
    ctx->pc = 0x200BFCu;
    SET_GPR_U32(ctx, 31, 0x200C04u);
    ctx->pc = 0x200C00u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 17808));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200C04u; }
    }
    if (ctx->pc != 0x200C04u) { return; }
    ctx->pc = 0x200C04u;
    // 0x200c04: 0x3c020031
    ctx->pc = 0x200c04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x200c08: 0x8c42f184
    ctx->pc = 0x200c08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x200c0c: 0x10400008
    ctx->pc = 0x200C0Cu;
    {
        const bool branch_taken_0x200c0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x200C10u;
        SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
        if (branch_taken_0x200c0c) {
            ctx->pc = 0x200C30u;
            goto label_200c30;
        }
    }
    ctx->pc = 0x200C14u;
    // 0x200c14: 0x0
    ctx->pc = 0x200c14u;
    // NOP
label_200c18:
    // 0x200c18: 0xc0c20d6
    ctx->pc = 0x200C18u;
    SET_GPR_U32(ctx, 31, 0x200C20u);
    ctx->pc = 0x200C1Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 17880));
    ctx->pc = 0x308358u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifRebootIop_0x308358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200C20u; }
    }
    if (ctx->pc != 0x200C20u) { return; }
    ctx->pc = 0x200C20u;
    // 0x200c20: 0x1040fffd
    ctx->pc = 0x200C20u;
    {
        const bool branch_taken_0x200c20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x200c20) {
            ctx->pc = 0x200C18u;
            goto label_200c18;
        }
    }
    ctx->pc = 0x200C28u;
    // 0x200c28: 0x10000007
    ctx->pc = 0x200C28u;
    {
        const bool branch_taken_0x200c28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x200c28) {
            ctx->pc = 0x200C48u;
            goto label_200c48;
        }
    }
    ctx->pc = 0x200C30u;
label_200c30:
    // 0x200c30: 0x3c10003a
    ctx->pc = 0x200c30u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x200c34: 0x0
    ctx->pc = 0x200c34u;
    // NOP
label_200c38:
    // 0x200c38: 0xc0c20d6
    ctx->pc = 0x200C38u;
    SET_GPR_U32(ctx, 31, 0x200C40u);
    ctx->pc = 0x200C3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 17912));
    ctx->pc = 0x308358u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifRebootIop_0x308358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200C40u; }
    }
    if (ctx->pc != 0x200C40u) { return; }
    ctx->pc = 0x200C40u;
    // 0x200c40: 0x1040fffd
    ctx->pc = 0x200C40u;
    {
        const bool branch_taken_0x200c40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x200c40) {
            ctx->pc = 0x200C38u;
            goto label_200c38;
        }
    }
    ctx->pc = 0x200C48u;
label_200c48:
    // 0x200c48: 0x4410009
    ctx->pc = 0x200C48u;
    {
        const bool branch_taken_0x200c48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x200C4Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x200c48) {
            ctx->pc = 0x200C70u;
            goto label_200c70;
        }
    }
    ctx->pc = 0x200C50u;
    // 0x200c50: 0x24844610
    ctx->pc = 0x200c50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17936));
    // 0x200c54: 0x3c05003a
    ctx->pc = 0x200c54u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x200c58: 0x24a545c8
    ctx->pc = 0x200c58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17864));
    // 0x200c5c: 0x3c06003a
    ctx->pc = 0x200c5cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x200c60: 0x24c64590
    ctx->pc = 0x200c60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 17808));
    // 0x200c64: 0xc0b4976
    ctx->pc = 0x200C64u;
    SET_GPR_U32(ctx, 31, 0x200C6Cu);
    ctx->pc = 0x200C68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200C6Cu; }
    }
    if (ctx->pc != 0x200C6Cu) { return; }
    ctx->pc = 0x200C6Cu;
    // 0x200c6c: 0x0
    ctx->pc = 0x200c6cu;
    // NOP
label_200c70:
    // 0x200c70: 0xc0c20c4
    ctx->pc = 0x200C70u;
    SET_GPR_U32(ctx, 31, 0x200C78u);
    ctx->pc = 0x308310u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSyncIop_0x308310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200C78u; }
    }
    if (ctx->pc != 0x200C78u) { return; }
    ctx->pc = 0x200C78u;
    // 0x200c78: 0x1040fffd
    ctx->pc = 0x200C78u;
    {
        const bool branch_taken_0x200c78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x200c78) {
            ctx->pc = 0x200C70u;
            goto label_200c70;
        }
    }
    ctx->pc = 0x200C80u;
    // 0x200c80: 0xc0c1692
    ctx->pc = 0x200C80u;
    SET_GPR_U32(ctx, 31, 0x200C88u);
    ctx->pc = 0x200C84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x305A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitRpc_0x305a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200C88u; }
    }
    if (ctx->pc != 0x200C88u) { return; }
    ctx->pc = 0x200C88u;
    // 0x200c88: 0xc0bd9fc
    ctx->pc = 0x200C88u;
    SET_GPR_U32(ctx, 31, 0x200C90u);
    ctx->pc = 0x200C8Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F67F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdInit_0x2f67f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200C90u; }
    }
    if (ctx->pc != 0x200C90u) { return; }
    ctx->pc = 0x200C90u;
    // 0x200c90: 0xc0bdc4c
    ctx->pc = 0x200C90u;
    SET_GPR_U32(ctx, 31, 0x200C98u);
    ctx->pc = 0x200C94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2F7130u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceCdMmode_0x2f7130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200C98u; }
    }
    if (ctx->pc != 0x200C98u) { return; }
    ctx->pc = 0x200C98u;
    // 0x200c98: 0xc0c1af8
    ctx->pc = 0x200C98u;
    SET_GPR_U32(ctx, 31, 0x200CA0u);
    ctx->pc = 0x200C9Cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x306BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceFsReset_0x306be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200CA0u; }
    }
    if (ctx->pc != 0x200CA0u) { return; }
    ctx->pc = 0x200CA0u;
    // 0x200ca0: 0xc0c1e94
    ctx->pc = 0x200CA0u;
    SET_GPR_U32(ctx, 31, 0x200CA8u);
    ctx->pc = 0x307A50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifLoadFileReset_0x307a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200CA8u; }
    }
    if (ctx->pc != 0x200CA8u) { return; }
    ctx->pc = 0x200CA8u;
    // 0x200ca8: 0xc0c1da2
    ctx->pc = 0x200CA8u;
    SET_GPR_U32(ctx, 31, 0x200CB0u);
    ctx->pc = 0x307688u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x307688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200CB0u; }
    }
    if (ctx->pc != 0x200CB0u) { return; }
    ctx->pc = 0x200CB0u;
    // 0x200cb0: 0x3a0202d
    ctx->pc = 0x200cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200cb4: 0x3c05003a
    ctx->pc = 0x200cb4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x200cb8: 0x24a54630
    ctx->pc = 0x200cb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17968));
    // 0x200cbc: 0xc0b6252
    ctx->pc = 0x200CBCu;
    SET_GPR_U32(ctx, 31, 0x200CC4u);
    ctx->pc = 0x200CC0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 17984));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200CC4u; }
    }
    if (ctx->pc != 0x200CC4u) { return; }
    ctx->pc = 0x200CC4u;
    // 0x200cc4: 0x26044640
    ctx->pc = 0x200cc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 17984));
    // 0x200cc8: 0x3c05003a
    ctx->pc = 0x200cc8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x200ccc: 0x24a54650
    ctx->pc = 0x200cccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18000));
    // 0x200cd0: 0xc0802e8
    ctx->pc = 0x200CD0u;
    SET_GPR_U32(ctx, 31, 0x200CD8u);
    ctx->pc = 0x200CD4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x200BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_irx_0x200ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200CD8u; }
    }
    if (ctx->pc != 0x200CD8u) { return; }
    ctx->pc = 0x200CD8u;
    // 0x200cd8: 0x26044640
    ctx->pc = 0x200cd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 17984));
    // 0x200cdc: 0x3c05003a
    ctx->pc = 0x200cdcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x200ce0: 0x24a54660
    ctx->pc = 0x200ce0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18016));
    // 0x200ce4: 0xc0802e8
    ctx->pc = 0x200CE4u;
    SET_GPR_U32(ctx, 31, 0x200CECu);
    ctx->pc = 0x200CE8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x200BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_irx_0x200ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200CECu; }
    }
    if (ctx->pc != 0x200CECu) { return; }
    ctx->pc = 0x200CECu;
    // 0x200cec: 0x14400004
    ctx->pc = 0x200CECu;
    {
        const bool branch_taken_0x200cec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x200CF0u;
        SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
        if (branch_taken_0x200cec) {
            ctx->pc = 0x200D00u;
            goto label_200d00;
        }
    }
    ctx->pc = 0x200CF4u;
    // 0x200cf4: 0x3c030031
    ctx->pc = 0x200cf4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x200cf8: 0x2402ffff
    ctx->pc = 0x200cf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x200cfc: 0xac620f10
    ctx->pc = 0x200cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3856), GPR_U32(ctx, 2));
label_200d00:
    // 0x200d00: 0x26044640
    ctx->pc = 0x200d00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 17984));
    // 0x200d04: 0x3c05003a
    ctx->pc = 0x200d04u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x200d08: 0x24a54670
    ctx->pc = 0x200d08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18032));
    // 0x200d0c: 0xc0802e8
    ctx->pc = 0x200D0Cu;
    SET_GPR_U32(ctx, 31, 0x200D14u);
    ctx->pc = 0x200D10u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x200BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_irx_0x200ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D14u; }
    }
    if (ctx->pc != 0x200D14u) { return; }
    ctx->pc = 0x200D14u;
    // 0x200d14: 0x26044640
    ctx->pc = 0x200d14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 17984));
    // 0x200d18: 0x3c05003a
    ctx->pc = 0x200d18u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x200d1c: 0x24a54680
    ctx->pc = 0x200d1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18048));
    // 0x200d20: 0xc0802e8
    ctx->pc = 0x200D20u;
    SET_GPR_U32(ctx, 31, 0x200D28u);
    ctx->pc = 0x200D24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x200BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_irx_0x200ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D28u; }
    }
    if (ctx->pc != 0x200D28u) { return; }
    ctx->pc = 0x200D28u;
    // 0x200d28: 0x26044640
    ctx->pc = 0x200d28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 17984));
    // 0x200d2c: 0x3c05003a
    ctx->pc = 0x200d2cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x200d30: 0x24a54690
    ctx->pc = 0x200d30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18064));
    // 0x200d34: 0xc0802e8
    ctx->pc = 0x200D34u;
    SET_GPR_U32(ctx, 31, 0x200D3Cu);
    ctx->pc = 0x200D38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x200BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_irx_0x200ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D3Cu; }
    }
    if (ctx->pc != 0x200D3Cu) { return; }
    ctx->pc = 0x200D3Cu;
    // 0x200d3c: 0x26044640
    ctx->pc = 0x200d3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 17984));
    // 0x200d40: 0x3c05003a
    ctx->pc = 0x200d40u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x200d44: 0x24a546a0
    ctx->pc = 0x200d44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18080));
    // 0x200d48: 0xc0802e8
    ctx->pc = 0x200D48u;
    SET_GPR_U32(ctx, 31, 0x200D50u);
    ctx->pc = 0x200D4Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x200BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_irx_0x200ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D50u; }
    }
    if (ctx->pc != 0x200D50u) { return; }
    ctx->pc = 0x200D50u;
    // 0x200d50: 0x26044640
    ctx->pc = 0x200d50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 17984));
    // 0x200d54: 0x3c05003a
    ctx->pc = 0x200d54u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x200d58: 0x24a546b0
    ctx->pc = 0x200d58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18096));
    // 0x200d5c: 0xc0802e8
    ctx->pc = 0x200D5Cu;
    SET_GPR_U32(ctx, 31, 0x200D64u);
    ctx->pc = 0x200D60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x200BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        load_irx_0x200ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200D64u; }
    }
    if (ctx->pc != 0x200D64u) { return; }
    ctx->pc = 0x200D64u;
    // 0x200d64: 0x3c031000
    ctx->pc = 0x200d64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x200d68: 0x34630010
    ctx->pc = 0x200d68u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 16));
    // 0x200d6c: 0x24020083
    ctx->pc = 0x200d6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 131));
    // 0x200d70: 0xac620000
    ctx->pc = 0x200d70u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x200d74: 0x3c031000
    ctx->pc = 0x200d74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x200d78: 0x34630810
    ctx->pc = 0x200d78u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2064));
    // 0x200d7c: 0x24020082
    ctx->pc = 0x200d7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 130));
    // 0x200d80: 0xac620000
    ctx->pc = 0x200d80u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x200d84: 0xdfbf0050
    ctx->pc = 0x200d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x200d88: 0xdfb00040
    ctx->pc = 0x200d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200d8c: 0x3e00008
    ctx->pc = 0x200D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200D90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200C18u: goto label_200c18;
            case 0x200C30u: goto label_200c30;
            case 0x200C38u: goto label_200c38;
            case 0x200C48u: goto label_200c48;
            case 0x200C70u: goto label_200c70;
            case 0x200D00u: goto label_200d00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200D94u;
}
