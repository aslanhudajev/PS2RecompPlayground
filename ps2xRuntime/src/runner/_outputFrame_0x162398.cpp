#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _outputFrame
// Address: 0x162398 - 0x162450
void _outputFrame_0x162398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_outputFrame");


    ctx->pc = 0x162398u;

    // 0x162398: 0x27bdffe0
    ctx->pc = 0x162398u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16239c: 0x3c030023
    ctx->pc = 0x16239cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1623a0: 0xffbf0010
    ctx->pc = 0x1623a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1623a4: 0x80302d
    ctx->pc = 0x1623a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1623a8: 0x8c62a21c
    ctx->pc = 0x1623a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943260)));
    // 0x1623ac: 0xffb00000
    ctx->pc = 0x1623acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1623b0: 0x10a0001e
    ctx->pc = 0x1623B0u;
    {
        const bool branch_taken_0x1623b0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1623B4u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 64)));
        if (branch_taken_0x1623b0) {
            ctx->pc = 0x16242Cu;
            goto label_16242c;
        }
    }
    ctx->pc = 0x1623B8u;
    // 0x1623b8: 0x3c030023
    ctx->pc = 0x1623b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1623bc: 0x24040003
    ctx->pc = 0x1623bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1623c0: 0x8c62a3ec
    ctx->pc = 0x1623c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943724)));
    // 0x1623c4: 0x1444000c
    ctx->pc = 0x1623C4u;
    {
        const bool branch_taken_0x1623c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x1623C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x1623c4) {
            ctx->pc = 0x1623F8u;
            goto label_1623f8;
        }
    }
    ctx->pc = 0x1623CCu;
    // 0x1623cc: 0x8c43a3bc
    ctx->pc = 0x1623ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943676)));
    // 0x1623d0: 0x14640004
    ctx->pc = 0x1623D0u;
    {
        const bool branch_taken_0x1623d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x1623D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x1623d0) {
            ctx->pc = 0x1623E4u;
            goto label_1623e4;
        }
    }
    ctx->pc = 0x1623D8u;
    // 0x1623d8: 0x3c020023
    ctx->pc = 0x1623d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1623dc: 0x10000002
    ctx->pc = 0x1623DCu;
    {
        const bool branch_taken_0x1623dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1623E0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943304)));
        if (branch_taken_0x1623dc) {
            ctx->pc = 0x1623E8u;
            goto label_1623e8;
        }
    }
    ctx->pc = 0x1623E4u;
label_1623e4:
    // 0x1623e4: 0x8c44a240
    ctx->pc = 0x1623e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943296)));
label_1623e8:
    // 0x1623e8: 0xc058b24
    ctx->pc = 0x1623E8u;
    SET_GPR_U32(ctx, 31, 0x1623F0u);
    ctx->pc = 0x1623ECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->pc = 0x162C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImage_0x162c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1623F0u; }
        else if (ctx->pc != 0x1623F0u) { ctx->pc = 0x1623F0u; }
    }
    if (ctx->pc != 0x1623F0u) { return; }
    ctx->pc = 0x1623F0u;
    // 0x1623f0: 0x1000000f
    ctx->pc = 0x1623F0u;
    {
        const bool branch_taken_0x1623f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1623F4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 248)));
        if (branch_taken_0x1623f0) {
            ctx->pc = 0x162430u;
            goto label_162430;
        }
    }
    ctx->pc = 0x1623F8u;
label_1623f8:
    // 0x1623f8: 0x8c43a3bc
    ctx->pc = 0x1623f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943676)));
    // 0x1623fc: 0x14640006
    ctx->pc = 0x1623FCu;
    {
        const bool branch_taken_0x1623fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x162400u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x1623fc) {
            ctx->pc = 0x162418u;
            goto label_162418;
        }
    }
    ctx->pc = 0x162404u;
    // 0x162404: 0x3c020023
    ctx->pc = 0x162404u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x162408: 0x3c030023
    ctx->pc = 0x162408u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16240c: 0x8c44a254
    ctx->pc = 0x16240cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943316)));
    // 0x162410: 0x10000004
    ctx->pc = 0x162410u;
    {
        const bool branch_taken_0x162410 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162414u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294943328)));
        if (branch_taken_0x162410) {
            ctx->pc = 0x162424u;
            goto label_162424;
        }
    }
    ctx->pc = 0x162418u;
label_162418:
    // 0x162418: 0x3c030023
    ctx->pc = 0x162418u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16241c: 0x8c44a24c
    ctx->pc = 0x16241cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943308)));
    // 0x162420: 0x8c65a258
    ctx->pc = 0x162420u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294943320)));
label_162424:
    // 0x162424: 0xc058b6a
    ctx->pc = 0x162424u;
    SET_GPR_U32(ctx, 31, 0x16242Cu);
    ctx->pc = 0x162428u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->pc = 0x162DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImageField_0x162da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16242Cu; }
        else if (ctx->pc != 0x16242Cu) { ctx->pc = 0x16242Cu; }
    }
    if (ctx->pc != 0x16242Cu) { return; }
    ctx->pc = 0x16242Cu;
label_16242c:
    // 0x16242c: 0x8e0300f8
    ctx->pc = 0x16242cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_162430:
    // 0x162430: 0x24020001
    ctx->pc = 0x162430u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x162434: 0x14620003
    ctx->pc = 0x162434u;
    {
        const bool branch_taken_0x162434 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x162438u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x162434) {
            ctx->pc = 0x162444u;
            goto label_162444;
        }
    }
    ctx->pc = 0x16243Cu;
    // 0x16243c: 0x24020002
    ctx->pc = 0x16243cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x162440: 0xae0200f8
    ctx->pc = 0x162440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
label_162444:
    // 0x162444: 0xdfb00000
    ctx->pc = 0x162444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162448: 0x3e00008
    ctx->pc = 0x162448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16244Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1623E4u: goto label_1623e4;
            case 0x1623E8u: goto label_1623e8;
            case 0x1623F8u: goto label_1623f8;
            case 0x162418u: goto label_162418;
            case 0x162424u: goto label_162424;
            case 0x16242Cu: goto label_16242c;
            case 0x162430u: goto label_162430;
            case 0x162444u: goto label_162444;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162450u;
}
