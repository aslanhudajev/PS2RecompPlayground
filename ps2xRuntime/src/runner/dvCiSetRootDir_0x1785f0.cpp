#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiSetRootDir
// Address: 0x1785f0 - 0x1786b0
void dvCiSetRootDir_0x1785f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiSetRootDir");


    ctx->pc = 0x1785f0u;

    // 0x1785f0: 0x27bdffd0
    ctx->pc = 0x1785f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1785f4: 0xffb00000
    ctx->pc = 0x1785f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1785f8: 0xffbf0020
    ctx->pc = 0x1785f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1785fc: 0x80802d
    ctx->pc = 0x1785fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178600: 0x16000004
    ctx->pc = 0x178600u;
    {
        const bool branch_taken_0x178600 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x178604u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        if (branch_taken_0x178600) {
            ctx->pc = 0x178614u;
            goto label_178614;
        }
    }
    ctx->pc = 0x178608u;
    // 0x178608: 0x3c020024
    ctx->pc = 0x178608u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x17860c: 0x10000023
    ctx->pc = 0x17860Cu;
    {
        const bool branch_taken_0x17860c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x178610u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294942496), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x17860c) {
            ctx->pc = 0x17869Cu;
            goto label_17869c;
        }
    }
    ctx->pc = 0x178614u;
label_178614:
    // 0x178614: 0x82030000
    ctx->pc = 0x178614u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x178618: 0x2402002f
    ctx->pc = 0x178618u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
    // 0x17861c: 0x1062000c
    ctx->pc = 0x17861Cu;
    {
        const bool branch_taken_0x17861c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x178620u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 92));
        if (branch_taken_0x17861c) {
            ctx->pc = 0x178650u;
            goto label_178650;
        }
    }
    ctx->pc = 0x178624u;
    // 0x178624: 0x1062000a
    ctx->pc = 0x178624u;
    {
        const bool branch_taken_0x178624 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x178628u;
        SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
        if (branch_taken_0x178624) {
            ctx->pc = 0x178650u;
            goto label_178650;
        }
    }
    ctx->pc = 0x17862Cu;
    // 0x17862c: 0x3c040024
    ctx->pc = 0x17862cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x178630: 0x2447b460
    ctx->pc = 0x178630u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294947936));
    // 0x178634: 0x24869f20
    ctx->pc = 0x178634u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 4294942496));
    // 0x178638: 0x80e30000
    ctx->pc = 0x178638u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17863c: 0x80e50001
    ctx->pc = 0x17863cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x178640: 0xa0c30000
    ctx->pc = 0x178640u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x178644: 0xa0c50001
    ctx->pc = 0x178644u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x178648: 0x10000004
    ctx->pc = 0x178648u;
    {
        const bool branch_taken_0x178648 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17864Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 4294942496));
        if (branch_taken_0x178648) {
            ctx->pc = 0x17865Cu;
            goto label_17865c;
        }
    }
    ctx->pc = 0x178650u;
label_178650:
    // 0x178650: 0x3c040024
    ctx->pc = 0x178650u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x178654: 0xa0809f20
    ctx->pc = 0x178654u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294942496), (uint8_t)GPR_U32(ctx, 0));
    // 0x178658: 0x24919f20
    ctx->pc = 0x178658u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 4294942496));
label_17865c:
    // 0x17865c: 0x200282d
    ctx->pc = 0x17865cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178660: 0xc051470
    ctx->pc = 0x178660u;
    SET_GPR_U32(ctx, 31, 0x178668u);
    ctx->pc = 0x178664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1451C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x1451c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178668u; }
        else if (ctx->pc != 0x178668u) { ctx->pc = 0x178668u; }
    }
    if (ctx->pc != 0x178668u) { return; }
    ctx->pc = 0x178668u;
    // 0x178668: 0xc051554
    ctx->pc = 0x178668u;
    SET_GPR_U32(ctx, 31, 0x178670u);
    ctx->pc = 0x17866Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178670u; }
        else if (ctx->pc != 0x178670u) { ctx->pc = 0x178670u; }
    }
    if (ctx->pc != 0x178670u) { return; }
    ctx->pc = 0x178670u;
    // 0x178670: 0x501021
    ctx->pc = 0x178670u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x178674: 0x2403002f
    ctx->pc = 0x178674u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 47));
    // 0x178678: 0x8044ffff
    ctx->pc = 0x178678u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x17867c: 0x10830003
    ctx->pc = 0x17867Cu;
    {
        const bool branch_taken_0x17867c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x178680u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 92));
        if (branch_taken_0x17867c) {
            ctx->pc = 0x17868Cu;
            goto label_17868c;
        }
    }
    ctx->pc = 0x178684u;
    // 0x178684: 0x14820006
    ctx->pc = 0x178684u;
    {
        const bool branch_taken_0x178684 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x178688u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x178684) {
            ctx->pc = 0x1786A0u;
            goto label_1786a0;
        }
    }
    ctx->pc = 0x17868Cu;
label_17868c:
    // 0x17868c: 0xc051554
    ctx->pc = 0x17868Cu;
    SET_GPR_U32(ctx, 31, 0x178694u);
    ctx->pc = 0x178690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178694u; }
        else if (ctx->pc != 0x178694u) { ctx->pc = 0x178694u; }
    }
    if (ctx->pc != 0x178694u) { return; }
    ctx->pc = 0x178694u;
    // 0x178694: 0x511021
    ctx->pc = 0x178694u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x178698: 0xa040ffff
    ctx->pc = 0x178698u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 0));
label_17869c:
    // 0x17869c: 0xdfbf0020
    ctx->pc = 0x17869cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1786a0:
    // 0x1786a0: 0xdfb10010
    ctx->pc = 0x1786a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1786a4: 0xdfb00000
    ctx->pc = 0x1786a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1786a8: 0x3e00008
    ctx->pc = 0x1786A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1786ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178614u: goto label_178614;
            case 0x178650u: goto label_178650;
            case 0x17865Cu: goto label_17865c;
            case 0x17868Cu: goto label_17868c;
            case 0x17869Cu: goto label_17869c;
            case 0x1786A0u: goto label_1786a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1786B0u;
}
