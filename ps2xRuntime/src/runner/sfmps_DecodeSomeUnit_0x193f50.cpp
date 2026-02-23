#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_DecodeSomeUnit
// Address: 0x193f50 - 0x194010
void sfmps_DecodeSomeUnit_0x193f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_DecodeSomeUnit");


    ctx->pc = 0x193f50u;

    // 0x193f50: 0x27bdffa0
    ctx->pc = 0x193f50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x193f54: 0x182d
    ctx->pc = 0x193f54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f58: 0xffb20030
    ctx->pc = 0x193f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x193f5c: 0xffb10020
    ctx->pc = 0x193f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x193f60: 0x902d
    ctx->pc = 0x193f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f64: 0xffb00010
    ctx->pc = 0x193f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x193f68: 0x3c117fff
    ctx->pc = 0x193f68u;
    SET_GPR_U32(ctx, 17, ((uint32_t)32767 << 16));
    // 0x193f6c: 0xffbf0050
    ctx->pc = 0x193f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x193f70: 0x80802d
    ctx->pc = 0x193f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f74: 0xffb30040
    ctx->pc = 0x193f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x193f78: 0x3631fffe
    ctx->pc = 0x193f78u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 65534));
    // 0x193f7c: 0x10000008
    ctx->pc = 0x193F7Cu;
    {
        const bool branch_taken_0x193f7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x193F80u;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        if (branch_taken_0x193f7c) {
            ctx->pc = 0x193FA0u;
            goto label_193fa0;
        }
    }
    ctx->pc = 0x193F84u;
    // 0x193f84: 0x0
    ctx->pc = 0x193f84u;
    // NOP
label_193f88:
    // 0x193f88: 0xc065018
    ctx->pc = 0x193F88u;
    SET_GPR_U32(ctx, 31, 0x193F90u);
    ctx->pc = 0x193F8Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x194060u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_RingAddRead_0x194060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193F90u; }
        else if (ctx->pc != 0x193F90u) { ctx->pc = 0x193F90u; }
    }
    if (ctx->pc != 0x193F90u) { return; }
    ctx->pc = 0x193F90u;
    // 0x193f90: 0x40182d
    ctx->pc = 0x193f90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193f94: 0x14600016
    ctx->pc = 0x193F94u;
    {
        const bool branch_taken_0x193f94 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x193F98u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x193f94) {
            ctx->pc = 0x193FF0u;
            goto label_193ff0;
        }
    }
    ctx->pc = 0x193F9Cu;
    // 0x193f9c: 0x2429021
    ctx->pc = 0x193f9cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_193fa0:
    // 0x193fa0: 0x232102a
    ctx->pc = 0x193fa0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x193fa4: 0x14400012
    ctx->pc = 0x193FA4u;
    {
        const bool branch_taken_0x193fa4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x193FA8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193fa4) {
            ctx->pc = 0x193FF0u;
            goto label_193ff0;
        }
    }
    ctx->pc = 0x193FACu;
    // 0x193fac: 0x3a0282d
    ctx->pc = 0x193facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193fb0: 0x27a60004
    ctx->pc = 0x193fb0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 4));
    // 0x193fb4: 0xc065004
    ctx->pc = 0x193FB4u;
    SET_GPR_U32(ctx, 31, 0x193FBCu);
    ctx->pc = 0x193FB8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x194010u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_RingGetRead_0x194010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193FBCu; }
        else if (ctx->pc != 0x193FBCu) { ctx->pc = 0x193FBCu; }
    }
    if (ctx->pc != 0x193FBCu) { return; }
    ctx->pc = 0x193FBCu;
    // 0x193fbc: 0x40182d
    ctx->pc = 0x193fbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193fc0: 0x1460000b
    ctx->pc = 0x193FC0u;
    {
        const bool branch_taken_0x193fc0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x193FC4u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x193fc0) {
            ctx->pc = 0x193FF0u;
            goto label_193ff0;
        }
    }
    ctx->pc = 0x193FC8u;
    // 0x193fc8: 0x200202d
    ctx->pc = 0x193fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193fcc: 0x8fa50000
    ctx->pc = 0x193fccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193fd0: 0xc065020
    ctx->pc = 0x193FD0u;
    SET_GPR_U32(ctx, 31, 0x193FD8u);
    ctx->pc = 0x193FD4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 8));
    ctx->pc = 0x194080u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_DecodeOneUnit_0x194080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193FD8u; }
        else if (ctx->pc != 0x193FD8u) { ctx->pc = 0x193FD8u; }
    }
    if (ctx->pc != 0x193FD8u) { return; }
    ctx->pc = 0x193FD8u;
    // 0x193fd8: 0x40182d
    ctx->pc = 0x193fd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193fdc: 0x14600005
    ctx->pc = 0x193FDCu;
    {
        const bool branch_taken_0x193fdc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x193FE0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x193fdc) {
            ctx->pc = 0x193FF4u;
            goto label_193ff4;
        }
    }
    ctx->pc = 0x193FE4u;
    // 0x193fe4: 0x8fa50008
    ctx->pc = 0x193fe4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193fe8: 0x14a0ffe7
    ctx->pc = 0x193FE8u;
    {
        const bool branch_taken_0x193fe8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x193fe8) {
            ctx->pc = 0x193F88u;
            goto label_193f88;
        }
    }
    ctx->pc = 0x193FF0u;
label_193ff0:
    // 0x193ff0: 0xdfbf0050
    ctx->pc = 0x193ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_193ff4:
    // 0x193ff4: 0x60102d
    ctx->pc = 0x193ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193ff8: 0xdfb30040
    ctx->pc = 0x193ff8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193ffc: 0xdfb20030
    ctx->pc = 0x193ffcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194000: 0xdfb10020
    ctx->pc = 0x194000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194004: 0xdfb00010
    ctx->pc = 0x194004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194008: 0x3e00008
    ctx->pc = 0x194008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19400Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193F88u: goto label_193f88;
            case 0x193FA0u: goto label_193fa0;
            case 0x193FF0u: goto label_193ff0;
            case 0x193FF4u: goto label_193ff4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194010u;
}
