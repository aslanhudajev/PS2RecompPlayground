#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htci_get_fsize_opened
// Address: 0x178bc8 - 0x178c54
void htci_get_fsize_opened_0x178bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htci_get_fsize_opened");


    ctx->pc = 0x178bc8u;

    // 0x178bc8: 0x27bdffd0
    ctx->pc = 0x178bc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178bcc: 0xffb10010
    ctx->pc = 0x178bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x178bd0: 0xffb00000
    ctx->pc = 0x178bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178bd4: 0xffbf0020
    ctx->pc = 0x178bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x178bd8: 0xc05e21c
    ctx->pc = 0x178BD8u;
    SET_GPR_U32(ctx, 31, 0x178BE0u);
    ctx->pc = 0x178BDCu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178870u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_wait_by_fd_0x178870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178BE0u; }
        else if (ctx->pc != 0x178BE0u) { ctx->pc = 0x178BE0u; }
    }
    if (ctx->pc != 0x178BE0u) { return; }
    ctx->pc = 0x178BE0u;
    // 0x178be0: 0xc05d95e
    ctx->pc = 0x178BE0u;
    SET_GPR_U32(ctx, 31, 0x178BE8u);
    ctx->pc = 0x176578u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Lock_0x176578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178BE8u; }
        else if (ctx->pc != 0x178BE8u) { ctx->pc = 0x178BE8u; }
    }
    if (ctx->pc != 0x178BE8u) { return; }
    ctx->pc = 0x178BE8u;
    // 0x178be8: 0x220202d
    ctx->pc = 0x178be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bec: 0x282d
    ctx->pc = 0x178becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178bf0: 0xc056340
    ctx->pc = 0x178BF0u;
    SET_GPR_U32(ctx, 31, 0x178BF8u);
    ctx->pc = 0x178BF4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x158D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x158d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178BF8u; }
        else if (ctx->pc != 0x178BF8u) { ctx->pc = 0x178BF8u; }
    }
    if (ctx->pc != 0x178BF8u) { return; }
    ctx->pc = 0x178BF8u;
    // 0x178bf8: 0xc05d966
    ctx->pc = 0x178BF8u;
    SET_GPR_U32(ctx, 31, 0x178C00u);
    ctx->pc = 0x178BFCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176598u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Unlock_0x176598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178C00u; }
        else if (ctx->pc != 0x178C00u) { ctx->pc = 0x178C00u; }
    }
    if (ctx->pc != 0x178C00u) { return; }
    ctx->pc = 0x178C00u;
    // 0x178c00: 0x600000f
    ctx->pc = 0x178C00u;
    {
        const bool branch_taken_0x178c00 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x178C04u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178c00) {
            ctx->pc = 0x178C40u;
            goto label_178c40;
        }
    }
    ctx->pc = 0x178C08u;
    // 0x178c08: 0xc05e21c
    ctx->pc = 0x178C08u;
    SET_GPR_U32(ctx, 31, 0x178C10u);
    ctx->pc = 0x178C0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178870u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_wait_by_fd_0x178870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178C10u; }
        else if (ctx->pc != 0x178C10u) { ctx->pc = 0x178C10u; }
    }
    if (ctx->pc != 0x178C10u) { return; }
    ctx->pc = 0x178C10u;
    // 0x178c10: 0xc05d95e
    ctx->pc = 0x178C10u;
    SET_GPR_U32(ctx, 31, 0x178C18u);
    ctx->pc = 0x176578u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Lock_0x176578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178C18u; }
        else if (ctx->pc != 0x178C18u) { ctx->pc = 0x178C18u; }
    }
    if (ctx->pc != 0x178C18u) { return; }
    ctx->pc = 0x178C18u;
    // 0x178c18: 0x220202d
    ctx->pc = 0x178c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c1c: 0x282d
    ctx->pc = 0x178c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c20: 0xc056340
    ctx->pc = 0x178C20u;
    SET_GPR_U32(ctx, 31, 0x178C28u);
    ctx->pc = 0x178C24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x158D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x158d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178C28u; }
        else if (ctx->pc != 0x178C28u) { ctx->pc = 0x178C28u; }
    }
    if (ctx->pc != 0x178C28u) { return; }
    ctx->pc = 0x178C28u;
    // 0x178c28: 0xc05d966
    ctx->pc = 0x178C28u;
    SET_GPR_U32(ctx, 31, 0x178C30u);
    ctx->pc = 0x178C2Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x176598u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_Unlock_0x176598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178C30u; }
        else if (ctx->pc != 0x178C30u) { ctx->pc = 0x178C30u; }
    }
    if (ctx->pc != 0x178C30u) { return; }
    ctx->pc = 0x178C30u;
    // 0x178c30: 0x2403ffff
    ctx->pc = 0x178c30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178c34: 0x102d
    ctx->pc = 0x178c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c38: 0x70182a
    ctx->pc = 0x178c38u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
    // 0x178c3c: 0x203100b
    ctx->pc = 0x178c3cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 16));
label_178c40:
    // 0x178c40: 0xdfbf0020
    ctx->pc = 0x178c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178c44: 0xdfb10010
    ctx->pc = 0x178c44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178c48: 0xdfb00000
    ctx->pc = 0x178c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178c4c: 0x3e00008
    ctx->pc = 0x178C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178C40u: goto label_178c40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178C54u;
}
