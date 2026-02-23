#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htci_load_flist
// Address: 0x179620 - 0x1796ec
void htci_load_flist_0x179620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htci_load_flist");


    ctx->pc = 0x179620u;

    // 0x179620: 0x27bdfec0
    ctx->pc = 0x179620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x179624: 0x24060100
    ctx->pc = 0x179624u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    // 0x179628: 0xffb20120
    ctx->pc = 0x179628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x17962c: 0xffb00100
    ctx->pc = 0x17962cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x179630: 0xa0902d
    ctx->pc = 0x179630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179634: 0x80802d
    ctx->pc = 0x179634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179638: 0xffb10110
    ctx->pc = 0x179638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x17963c: 0xffbf0130
    ctx->pc = 0x17963cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x179640: 0x3a0202d
    ctx->pc = 0x179640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179644: 0xc050cfe
    ctx->pc = 0x179644u;
    SET_GPR_U32(ctx, 31, 0x17964Cu);
    ctx->pc = 0x179648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17964Cu; }
        else if (ctx->pc != 0x17964Cu) { ctx->pc = 0x17964Cu; }
    }
    if (ctx->pc != 0x17964Cu) { return; }
    ctx->pc = 0x17964Cu;
    // 0x17964c: 0x200202d
    ctx->pc = 0x17964cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179650: 0xc05e4aa
    ctx->pc = 0x179650u;
    SET_GPR_U32(ctx, 31, 0x179658u);
    ctx->pc = 0x179654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1792A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_conv_fname_0x1792a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179658u; }
        else if (ctx->pc != 0x179658u) { ctx->pc = 0x179658u; }
    }
    if (ctx->pc != 0x179658u) { return; }
    ctx->pc = 0x179658u;
    // 0x179658: 0x3a0202d
    ctx->pc = 0x179658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17965c: 0xc05623e
    ctx->pc = 0x17965Cu;
    SET_GPR_U32(ctx, 31, 0x179664u);
    ctx->pc = 0x179660u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1588F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x1588f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179664u; }
        else if (ctx->pc != 0x179664u) { ctx->pc = 0x179664u; }
    }
    if (ctx->pc != 0x179664u) { return; }
    ctx->pc = 0x179664u;
    // 0x179664: 0x40882d
    ctx->pc = 0x179664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179668: 0x6200015
    ctx->pc = 0x179668u;
    {
        const bool branch_taken_0x179668 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x17966Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179668) {
            ctx->pc = 0x1796C0u;
            goto label_1796c0;
        }
    }
    ctx->pc = 0x179670u;
    // 0x179670: 0x220202d
    ctx->pc = 0x179670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179674: 0xc056340
    ctx->pc = 0x179674u;
    SET_GPR_U32(ctx, 31, 0x17967Cu);
    ctx->pc = 0x179678u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x158D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x158d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17967Cu; }
        else if (ctx->pc != 0x17967Cu) { ctx->pc = 0x17967Cu; }
    }
    if (ctx->pc != 0x17967Cu) { return; }
    ctx->pc = 0x17967Cu;
    // 0x17967c: 0x40802d
    ctx->pc = 0x17967cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179680: 0x600000f
    ctx->pc = 0x179680u;
    {
        const bool branch_taken_0x179680 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x179684u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179680) {
            ctx->pc = 0x1796C0u;
            goto label_1796c0;
        }
    }
    ctx->pc = 0x179688u;
    // 0x179688: 0x220202d
    ctx->pc = 0x179688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17968c: 0xc056340
    ctx->pc = 0x17968Cu;
    SET_GPR_U32(ctx, 31, 0x179694u);
    ctx->pc = 0x179690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x158D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceLseek_0x158d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179694u; }
        else if (ctx->pc != 0x179694u) { ctx->pc = 0x179694u; }
    }
    if (ctx->pc != 0x179694u) { return; }
    ctx->pc = 0x179694u;
    // 0x179694: 0x440000a
    ctx->pc = 0x179694u;
    {
        const bool branch_taken_0x179694 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x179698u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4097));
        if (branch_taken_0x179694) {
            ctx->pc = 0x1796C0u;
            goto label_1796c0;
        }
    }
    ctx->pc = 0x17969Cu;
    // 0x17969c: 0x24061000
    ctx->pc = 0x17969cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1796a0: 0x202300b
    ctx->pc = 0x1796a0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 16));
    // 0x1796a4: 0x240282d
    ctx->pc = 0x1796a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1796a8: 0xc0563ce
    ctx->pc = 0x1796A8u;
    SET_GPR_U32(ctx, 31, 0x1796B0u);
    ctx->pc = 0x1796ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x158F38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x158f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1796B0u; }
        else if (ctx->pc != 0x1796B0u) { ctx->pc = 0x1796B0u; }
    }
    if (ctx->pc != 0x1796B0u) { return; }
    ctx->pc = 0x1796B0u;
    // 0x1796b0: 0x4410005
    ctx->pc = 0x1796B0u;
    {
        const bool branch_taken_0x1796b0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1796b0) {
            ctx->pc = 0x1796C8u;
            goto label_1796c8;
        }
    }
    ctx->pc = 0x1796B8u;
    // 0x1796b8: 0xc0562e0
    ctx->pc = 0x1796B8u;
    SET_GPR_U32(ctx, 31, 0x1796C0u);
    ctx->pc = 0x1796BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1796C0u; }
        else if (ctx->pc != 0x1796C0u) { ctx->pc = 0x1796C0u; }
    }
    if (ctx->pc != 0x1796C0u) { return; }
    ctx->pc = 0x1796C0u;
label_1796c0:
    // 0x1796c0: 0x10000004
    ctx->pc = 0x1796C0u;
    {
        const bool branch_taken_0x1796c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1796C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1796c0) {
            ctx->pc = 0x1796D4u;
            goto label_1796d4;
        }
    }
    ctx->pc = 0x1796C8u;
label_1796c8:
    // 0x1796c8: 0xc0562e0
    ctx->pc = 0x1796C8u;
    SET_GPR_U32(ctx, 31, 0x1796D0u);
    ctx->pc = 0x1796CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1796D0u; }
        else if (ctx->pc != 0x1796D0u) { ctx->pc = 0x1796D0u; }
    }
    if (ctx->pc != 0x1796D0u) { return; }
    ctx->pc = 0x1796D0u;
    // 0x1796d0: 0x24020001
    ctx->pc = 0x1796d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1796d4:
    // 0x1796d4: 0xdfbf0130
    ctx->pc = 0x1796d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1796d8: 0xdfb20120
    ctx->pc = 0x1796d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1796dc: 0xdfb10110
    ctx->pc = 0x1796dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1796e0: 0xdfb00100
    ctx->pc = 0x1796e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1796e4: 0x3e00008
    ctx->pc = 0x1796E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1796E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1796C0u: goto label_1796c0;
            case 0x1796C8u: goto label_1796c8;
            case 0x1796D4u: goto label_1796d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1796ECu;
}
