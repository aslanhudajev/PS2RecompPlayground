#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_files
// Address: 0x2081d8 - 0x208298
void init_files_0x2081d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2081d8u;

    // 0x2081d8: 0x27bdffd0
    ctx->pc = 0x2081d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2081dc: 0xffbf0020
    ctx->pc = 0x2081dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2081e0: 0xffbe0010
    ctx->pc = 0x2081e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2081e4: 0x3a0f02d
    ctx->pc = 0x2081e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081e8: 0xafc40000
    ctx->pc = 0x2081e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2081ec: 0xafc00004
    ctx->pc = 0x2081ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_2081f0:
    // 0x2081f0: 0x8fc20004
    ctx->pc = 0x2081f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2081f4: 0x28430008
    ctx->pc = 0x2081f4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 8));
    // 0x2081f8: 0x14600003
    ctx->pc = 0x2081F8u;
    {
        const bool branch_taken_0x2081f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2081f8) {
            ctx->pc = 0x208208u;
            goto label_208208;
        }
    }
    ctx->pc = 0x208200u;
    // 0x208200: 0x1000001f
    ctx->pc = 0x208200u;
    {
        const bool branch_taken_0x208200 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208200) {
            ctx->pc = 0x208280u;
            goto label_208280;
        }
    }
    ctx->pc = 0x208208u;
label_208208:
    // 0x208208: 0x8fc20004
    ctx->pc = 0x208208u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20820c: 0x40182d
    ctx->pc = 0x20820cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208210: 0x31100
    ctx->pc = 0x208210u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x208214: 0x8fc30000
    ctx->pc = 0x208214u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x208218: 0x431021
    ctx->pc = 0x208218u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20821c: 0x2403ffff
    ctx->pc = 0x20821cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208220: 0xac430000
    ctx->pc = 0x208220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x208224: 0x8fc20004
    ctx->pc = 0x208224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x208228: 0x40182d
    ctx->pc = 0x208228u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20822c: 0x31100
    ctx->pc = 0x20822cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x208230: 0x8fc30000
    ctx->pc = 0x208230u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x208234: 0x431021
    ctx->pc = 0x208234u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208238: 0x2403ffff
    ctx->pc = 0x208238u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20823c: 0xac430004
    ctx->pc = 0x20823cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x208240: 0x8fc20004
    ctx->pc = 0x208240u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x208244: 0x40182d
    ctx->pc = 0x208244u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208248: 0x31100
    ctx->pc = 0x208248u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x20824c: 0x8fc30000
    ctx->pc = 0x20824cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x208250: 0x431021
    ctx->pc = 0x208250u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208254: 0x24430008
    ctx->pc = 0x208254u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8));
    // 0x208258: 0x60202d
    ctx->pc = 0x208258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20825c: 0x3c05003a
    ctx->pc = 0x20825cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x208260: 0x24a54dd0
    ctx->pc = 0x208260u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 19920));
    // 0x208264: 0xc0bf2c1
    ctx->pc = 0x208264u;
    SET_GPR_U32(ctx, 31, 0x20826Cu);
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20826Cu; }
    }
    if (ctx->pc != 0x20826Cu) { return; }
    ctx->pc = 0x20826Cu;
    // 0x20826c: 0x8fc20004
    ctx->pc = 0x20826cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x208270: 0x24430001
    ctx->pc = 0x208270u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x208274: 0xafc30004
    ctx->pc = 0x208274u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x208278: 0x1000ffdd
    ctx->pc = 0x208278u;
    {
        const bool branch_taken_0x208278 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208278) {
            ctx->pc = 0x2081F0u;
            goto label_2081f0;
        }
    }
    ctx->pc = 0x208280u;
label_208280:
    // 0x208280: 0x3c0e82d
    ctx->pc = 0x208280u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208284: 0xdfbf0020
    ctx->pc = 0x208284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208288: 0xdfbe0010
    ctx->pc = 0x208288u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20828c: 0x27bd0030
    ctx->pc = 0x20828cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x208290: 0x3e00008
    ctx->pc = 0x208290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2081F0u: goto label_2081f0;
            case 0x208208u: goto label_208208;
            case 0x208280u: goto label_208280;
            default: break;
        }
        return;
    }
    ctx->pc = 0x208298u;
}
