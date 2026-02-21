#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_initials
// Address: 0x274170 - 0x274510
void get_initials_0x274170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x274170u;

    // 0x274170: 0x27bdff80
    ctx->pc = 0x274170u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x274174: 0xffbf0070
    ctx->pc = 0x274174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x274178: 0xffb50060
    ctx->pc = 0x274178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x27417c: 0xffb40050
    ctx->pc = 0x27417cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x274180: 0xffb30040
    ctx->pc = 0x274180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x274184: 0xffb20030
    ctx->pc = 0x274184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x274188: 0xffb10020
    ctx->pc = 0x274188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27418c: 0xffb00010
    ctx->pc = 0x27418cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x274190: 0x80982d
    ctx->pc = 0x274190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274194: 0x24032b00
    ctx->pc = 0x274194u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x274198: 0x2631818
    ctx->pc = 0x274198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27419c: 0x3c020032
    ctx->pc = 0x27419cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2741a0: 0x24421bc0
    ctx->pc = 0x2741a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2741a4: 0x629021
    ctx->pc = 0x2741a4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2741a8: 0x3c030031
    ctx->pc = 0x2741a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2741ac: 0x24631b90
    ctx->pc = 0x2741acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x2741b0: 0x2402003c
    ctx->pc = 0x2741b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x2741b4: 0x2621018
    ctx->pc = 0x2741b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2741b8: 0x2463000c
    ctx->pc = 0x2741b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12));
    // 0x2741bc: 0x438021
    ctx->pc = 0x2741bcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2741c0: 0xc081c4c
    ctx->pc = 0x2741C0u;
    SET_GPR_U32(ctx, 31, 0x2741C8u);
    ctx->pc = 0x2741C4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x207130u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_menu_accept_0x207130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2741C8u; }
    }
    if (ctx->pc != 0x2741C8u) { return; }
    ctx->pc = 0x2741C8u;
    // 0x2741c8: 0x40882d
    ctx->pc = 0x2741c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2741cc: 0x16200038
    ctx->pc = 0x2741CCu;
    {
        const bool branch_taken_0x2741cc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x2741cc) {
            ctx->pc = 0x2742B0u;
            goto label_2742b0;
        }
    }
    ctx->pc = 0x2741D4u;
    // 0x2741d4: 0x8e020000
    ctx->pc = 0x2741d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2741d8: 0x30420030
    ctx->pc = 0x2741d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 48));
    // 0x2741dc: 0x10400015
    ctx->pc = 0x2741DCu;
    {
        const bool branch_taken_0x2741dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2741E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x2741dc) {
            ctx->pc = 0x274234u;
            goto label_274234;
        }
    }
    ctx->pc = 0x2741E4u;
    // 0x2741e4: 0x8e432ad0
    ctx->pc = 0x2741e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 10960)));
    // 0x2741e8: 0x1062000f
    ctx->pc = 0x2741E8u;
    {
        const bool branch_taken_0x2741e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2741ECu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 65));
        if (branch_taken_0x2741e8) {
            ctx->pc = 0x274228u;
            goto label_274228;
        }
    }
    ctx->pc = 0x2741F0u;
    // 0x2741f0: 0x10400005
    ctx->pc = 0x2741F0u;
    {
        const bool branch_taken_0x2741f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2741F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x2741f0) {
            ctx->pc = 0x274208u;
            goto label_274208;
        }
    }
    ctx->pc = 0x2741F8u;
    // 0x2741f8: 0x5062000c
    ctx->pc = 0x2741F8u;
    {
        const bool branch_taken_0x2741f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2741f8) {
            ctx->pc = 0x2741FCu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
            ctx->pc = 0x27422Cu;
            goto label_27422c;
        }
    }
    ctx->pc = 0x274200u;
    // 0x274200: 0x10000007
    ctx->pc = 0x274200u;
    {
        const bool branch_taken_0x274200 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274204u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10960)));
        if (branch_taken_0x274200) {
            ctx->pc = 0x274220u;
            goto label_274220;
        }
    }
    ctx->pc = 0x274208u;
label_274208:
    // 0x274208: 0x2402005a
    ctx->pc = 0x274208u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 90));
    // 0x27420c: 0x10620007
    ctx->pc = 0x27420Cu;
    {
        const bool branch_taken_0x27420c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x274210u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 95));
        if (branch_taken_0x27420c) {
            ctx->pc = 0x27422Cu;
            goto label_27422c;
        }
    }
    ctx->pc = 0x274214u;
    // 0x274214: 0x50620005
    ctx->pc = 0x274214u;
    {
        const bool branch_taken_0x274214 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x274214) {
            ctx->pc = 0x274218u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
            ctx->pc = 0x27422Cu;
            goto label_27422c;
        }
    }
    ctx->pc = 0x27421Cu;
    // 0x27421c: 0x8e422ad0
    ctx->pc = 0x27421cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10960)));
label_274220:
    // 0x274220: 0x10000002
    ctx->pc = 0x274220u;
    {
        const bool branch_taken_0x274220 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274224u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x274220) {
            ctx->pc = 0x27422Cu;
            goto label_27422c;
        }
    }
    ctx->pc = 0x274228u;
label_274228:
    // 0x274228: 0x24020041
    ctx->pc = 0x274228u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
label_27422c:
    // 0x27422c: 0xc09819a
    ctx->pc = 0x27422Cu;
    SET_GPR_U32(ctx, 31, 0x274234u);
    ctx->pc = 0x274230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10960), GPR_U32(ctx, 2));
    ctx->pc = 0x260668u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCursorV_0x260668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274234u; }
    }
    if (ctx->pc != 0x274234u) { return; }
    ctx->pc = 0x274234u;
label_274234:
    // 0x274234: 0x3c030031
    ctx->pc = 0x274234u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x274238: 0x24631b90
    ctx->pc = 0x274238u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x27423c: 0x2402003c
    ctx->pc = 0x27423cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x274240: 0x2621018
    ctx->pc = 0x274240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x274244: 0x621821
    ctx->pc = 0x274244u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274248: 0x8c62000c
    ctx->pc = 0x274248u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27424c: 0x304200c0
    ctx->pc = 0x27424cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 192));
    // 0x274250: 0x10400017
    ctx->pc = 0x274250u;
    {
        const bool branch_taken_0x274250 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274254u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x274250) {
            ctx->pc = 0x2742B0u;
            goto label_2742b0;
        }
    }
    ctx->pc = 0x274258u;
    // 0x274258: 0x8e432ad0
    ctx->pc = 0x274258u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 10960)));
    // 0x27425c: 0x10620011
    ctx->pc = 0x27425Cu;
    {
        const bool branch_taken_0x27425c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x274260u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 65));
        if (branch_taken_0x27425c) {
            ctx->pc = 0x2742A4u;
            goto label_2742a4;
        }
    }
    ctx->pc = 0x274264u;
    // 0x274264: 0x10400005
    ctx->pc = 0x274264u;
    {
        const bool branch_taken_0x274264 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274268u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x274264) {
            ctx->pc = 0x27427Cu;
            goto label_27427c;
        }
    }
    ctx->pc = 0x27426Cu;
    // 0x27426c: 0x5062000e
    ctx->pc = 0x27426Cu;
    {
        const bool branch_taken_0x27426c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x27426c) {
            ctx->pc = 0x274270u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 95));
            ctx->pc = 0x2742A8u;
            goto label_2742a8;
        }
    }
    ctx->pc = 0x274274u;
    // 0x274274: 0x10000007
    ctx->pc = 0x274274u;
    {
        const bool branch_taken_0x274274 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274278u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10960)));
        if (branch_taken_0x274274) {
            ctx->pc = 0x274294u;
            goto label_274294;
        }
    }
    ctx->pc = 0x27427Cu;
label_27427c:
    // 0x27427c: 0x24020041
    ctx->pc = 0x27427cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
    // 0x274280: 0x10620006
    ctx->pc = 0x274280u;
    {
        const bool branch_taken_0x274280 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x274284u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 95));
        if (branch_taken_0x274280) {
            ctx->pc = 0x27429Cu;
            goto label_27429c;
        }
    }
    ctx->pc = 0x274288u;
    // 0x274288: 0x50620007
    ctx->pc = 0x274288u;
    {
        const bool branch_taken_0x274288 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x274288) {
            ctx->pc = 0x27428Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 90));
            ctx->pc = 0x2742A8u;
            goto label_2742a8;
        }
    }
    ctx->pc = 0x274290u;
    // 0x274290: 0x8e422ad0
    ctx->pc = 0x274290u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10960)));
label_274294:
    // 0x274294: 0x10000004
    ctx->pc = 0x274294u;
    {
        const bool branch_taken_0x274294 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274298u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x274294) {
            ctx->pc = 0x2742A8u;
            goto label_2742a8;
        }
    }
    ctx->pc = 0x27429Cu;
label_27429c:
    // 0x27429c: 0x10000002
    ctx->pc = 0x27429Cu;
    {
        const bool branch_taken_0x27429c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2742A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x27429c) {
            ctx->pc = 0x2742A8u;
            goto label_2742a8;
        }
    }
    ctx->pc = 0x2742A4u;
label_2742a4:
    // 0x2742a4: 0x24020039
    ctx->pc = 0x2742a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
label_2742a8:
    // 0x2742a8: 0xc09819a
    ctx->pc = 0x2742A8u;
    SET_GPR_U32(ctx, 31, 0x2742B0u);
    ctx->pc = 0x2742ACu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10960), GPR_U32(ctx, 2));
    ctx->pc = 0x260668u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCursorV_0x260668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2742B0u; }
    }
    if (ctx->pc != 0x2742B0u) { return; }
    ctx->pc = 0x2742B0u;
label_2742b0:
    // 0x2742b0: 0xc081bf6
    ctx->pc = 0x2742B0u;
    SET_GPR_U32(ctx, 31, 0x2742B8u);
    ctx->pc = 0x2742B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x206FD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_left_0x206fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2742B8u; }
    }
    if (ctx->pc != 0x2742B8u) { return; }
    ctx->pc = 0x2742B8u;
    // 0x2742b8: 0x54400006
    ctx->pc = 0x2742B8u;
    {
        const bool branch_taken_0x2742b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2742b8) {
            ctx->pc = 0x2742BCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10956)));
            ctx->pc = 0x2742D4u;
            goto label_2742d4;
        }
    }
    ctx->pc = 0x2742C0u;
    // 0x2742c0: 0xc081cfc
    ctx->pc = 0x2742C0u;
    SET_GPR_U32(ctx, 31, 0x2742C8u);
    ctx->pc = 0x2742C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2073F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_menu_back_0x2073f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2742C8u; }
    }
    if (ctx->pc != 0x2742C8u) { return; }
    ctx->pc = 0x2742C8u;
    // 0x2742c8: 0x1040000b
    ctx->pc = 0x2742C8u;
    {
        const bool branch_taken_0x2742c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2742c8) {
            ctx->pc = 0x2742F8u;
            goto label_2742f8;
        }
    }
    ctx->pc = 0x2742D0u;
    // 0x2742d0: 0x8e422acc
    ctx->pc = 0x2742d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10956)));
label_2742d4:
    // 0x2742d4: 0x18400008
    ctx->pc = 0x2742D4u;
    {
        const bool branch_taken_0x2742d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2742D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2742d4) {
            ctx->pc = 0x2742F8u;
            goto label_2742f8;
        }
    }
    ctx->pc = 0x2742DCu;
    // 0x2742dc: 0xae422acc
    ctx->pc = 0x2742dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10956), GPR_U32(ctx, 2));
    // 0x2742e0: 0x2643099c
    ctx->pc = 0x2742e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 2460));
    // 0x2742e4: 0x621821
    ctx->pc = 0x2742e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2742e8: 0x80620000
    ctx->pc = 0x2742e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2742ec: 0xae422ad0
    ctx->pc = 0x2742ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10960), GPR_U32(ctx, 2));
    // 0x2742f0: 0xc09819e
    ctx->pc = 0x2742F0u;
    SET_GPR_U32(ctx, 31, 0x2742F8u);
    ctx->pc = 0x2742F4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x260678u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCursorH_0x260678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2742F8u; }
    }
    if (ctx->pc != 0x2742F8u) { return; }
    ctx->pc = 0x2742F8u;
label_2742f8:
    // 0x2742f8: 0x56200006
    ctx->pc = 0x2742F8u;
    {
        const bool branch_taken_0x2742f8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x2742f8) {
            ctx->pc = 0x2742FCu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 10960)));
            ctx->pc = 0x274314u;
            goto label_274314;
        }
    }
    ctx->pc = 0x274300u;
    // 0x274300: 0xc081bfe
    ctx->pc = 0x274300u;
    SET_GPR_U32(ctx, 31, 0x274308u);
    ctx->pc = 0x274304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x206FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_right_0x206ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274308u; }
    }
    if (ctx->pc != 0x274308u) { return; }
    ctx->pc = 0x274308u;
    // 0x274308: 0x10400029
    ctx->pc = 0x274308u;
    {
        const bool branch_taken_0x274308 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27430Cu;
        SET_GPR_U32(ctx, 21, ((uint32_t)255 << 16));
        if (branch_taken_0x274308) {
            ctx->pc = 0x2743B0u;
            goto label_2743b0;
        }
    }
    ctx->pc = 0x274310u;
    // 0x274310: 0x8e432ad0
    ctx->pc = 0x274310u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 10960)));
label_274314:
    // 0x274314: 0x24020040
    ctx->pc = 0x274314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x274318: 0x14620005
    ctx->pc = 0x274318u;
    {
        const bool branch_taken_0x274318 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x27431Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x274318) {
            ctx->pc = 0x274330u;
            goto label_274330;
        }
    }
    ctx->pc = 0x274320u;
    // 0x274320: 0x1620001a
    ctx->pc = 0x274320u;
    {
        const bool branch_taken_0x274320 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x274324u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x274320) {
            ctx->pc = 0x27438Cu;
            goto label_27438c;
        }
    }
    ctx->pc = 0x274328u;
    // 0x274328: 0x10000019
    ctx->pc = 0x274328u;
    {
        const bool branch_taken_0x274328 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27432Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x274328) {
            ctx->pc = 0x274390u;
            goto label_274390;
        }
    }
    ctx->pc = 0x274330u;
label_274330:
    // 0x274330: 0x8e432ad0
    ctx->pc = 0x274330u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 10960)));
    // 0x274334: 0x2402003c
    ctx->pc = 0x274334u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x274338: 0x54620008
    ctx->pc = 0x274338u;
    {
        const bool branch_taken_0x274338 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x274338) {
            ctx->pc = 0x27433Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 10956)));
            ctx->pc = 0x27435Cu;
            goto label_27435c;
        }
    }
    ctx->pc = 0x274340u;
    // 0x274340: 0x8e422acc
    ctx->pc = 0x274340u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10956)));
    // 0x274344: 0x18400012
    ctx->pc = 0x274344u;
    {
        const bool branch_taken_0x274344 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x274348u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x274344) {
            ctx->pc = 0x274390u;
            goto label_274390;
        }
    }
    ctx->pc = 0x27434Cu;
    // 0x27434c: 0xae422acc
    ctx->pc = 0x27434cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10956), GPR_U32(ctx, 2));
    // 0x274350: 0x2421021
    ctx->pc = 0x274350u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x274354: 0x1000000e
    ctx->pc = 0x274354u;
    {
        const bool branch_taken_0x274354 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x274358u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 2460), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x274354) {
            ctx->pc = 0x274390u;
            goto label_274390;
        }
    }
    ctx->pc = 0x27435Cu;
label_27435c:
    // 0x27435c: 0x24620001
    ctx->pc = 0x27435cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
    // 0x274360: 0x28420007
    ctx->pc = 0x274360u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 7));
    // 0x274364: 0x10400007
    ctx->pc = 0x274364u;
    {
        const bool branch_taken_0x274364 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274368u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 2460));
        if (branch_taken_0x274364) {
            ctx->pc = 0x274384u;
            goto label_274384;
        }
    }
    ctx->pc = 0x27436Cu;
    // 0x27436c: 0x831821
    ctx->pc = 0x27436cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x274370: 0x92422ad0
    ctx->pc = 0x274370u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10960)));
    // 0x274374: 0xa0620000
    ctx->pc = 0x274374u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x274378: 0x8e422acc
    ctx->pc = 0x274378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10956)));
    // 0x27437c: 0x441021
    ctx->pc = 0x27437cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x274380: 0xa0400001
    ctx->pc = 0x274380u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_274384:
    // 0x274384: 0x8e422acc
    ctx->pc = 0x274384u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10956)));
    // 0x274388: 0x24420001
    ctx->pc = 0x274388u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_27438c:
    // 0x27438c: 0xae422acc
    ctx->pc = 0x27438cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10956), GPR_U32(ctx, 2));
label_274390:
    // 0x274390: 0x14a00007
    ctx->pc = 0x274390u;
    {
        const bool branch_taken_0x274390 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x274394u;
        SET_GPR_U32(ctx, 21, ((uint32_t)255 << 16));
        if (branch_taken_0x274390) {
            ctx->pc = 0x2743B0u;
            goto label_2743b0;
        }
    }
    ctx->pc = 0x274398u;
    // 0x274398: 0x24020040
    ctx->pc = 0x274398u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x27439c: 0xae422ad0
    ctx->pc = 0x27439cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10960), GPR_U32(ctx, 2));
    // 0x2743a0: 0x260202d
    ctx->pc = 0x2743a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2743a4: 0xc097bf6
    ctx->pc = 0x2743A4u;
    SET_GPR_U32(ctx, 31, 0x2743ACu);
    ctx->pc = 0x2743A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x25EFD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioClick_0x25efd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743ACu; }
    }
    if (ctx->pc != 0x2743ACu) { return; }
    ctx->pc = 0x2743ACu;
    // 0x2743ac: 0x3c1500ff
    ctx->pc = 0x2743acu;
    SET_GPR_U32(ctx, 21, ((uint32_t)255 << 16));
label_2743b0:
    // 0x2743b0: 0x36b5ffff
    ctx->pc = 0x2743b0u;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 21), 65535));
    // 0x2743b4: 0x3c030034
    ctx->pc = 0x2743b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x2743b8: 0x2463fa68
    ctx->pc = 0x2743b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965864));
    // 0x2743bc: 0x131040
    ctx->pc = 0x2743bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 19), 1));
    // 0x2743c0: 0x431021
    ctx->pc = 0x2743c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2743c4: 0x94420000
    ctx->pc = 0x2743c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2743c8: 0x2442ffe2
    ctx->pc = 0x2743c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967266));
    // 0x2743cc: 0x3051ffff
    ctx->pc = 0x2743ccu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2743d0: 0xa3a00001
    ctx->pc = 0x2743d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2743d4: 0x8e422acc
    ctx->pc = 0x2743d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10956)));
    // 0x2743d8: 0x18400019
    ctx->pc = 0x2743D8u;
    {
        const bool branch_taken_0x2743d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2743DCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2743d8) {
            ctx->pc = 0x274440u;
            goto label_274440;
        }
    }
    ctx->pc = 0x2743E0u;
    // 0x2743e0: 0x2654099c
    ctx->pc = 0x2743e0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 18), 2460));
    // 0x2743e4: 0x3c020034
    ctx->pc = 0x2743e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2743e8: 0x2442fa78
    ctx->pc = 0x2743e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965880));
    // 0x2743ec: 0x131880
    ctx->pc = 0x2743ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x2743f0: 0x629821
    ctx->pc = 0x2743f0u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2743f4: 0x2901021
    ctx->pc = 0x2743f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_2743f8:
    // 0x2743f8: 0x90420000
    ctx->pc = 0x2743f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2743fc: 0xa3a20000
    ctx->pc = 0x2743fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x274400: 0x2624fffc
    ctx->pc = 0x274400u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x274404: 0x24050154
    ctx->pc = 0x274404u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 340));
    // 0x274408: 0x24060007
    ctx->pc = 0x274408u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x27440c: 0x8e670000
    ctx->pc = 0x27440cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x274410: 0x3c013f66
    ctx->pc = 0x274410u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16230 << 16));
    // 0x274414: 0x34216666
    ctx->pc = 0x274414u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
    // 0x274418: 0x44816000
    ctx->pc = 0x274418u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27441c: 0xc080510
    ctx->pc = 0x27441Cu;
    SET_GPR_U32(ctx, 31, 0x274424u);
    ctx->pc = 0x274420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274424u; }
    }
    if (ctx->pc != 0x274424u) { return; }
    ctx->pc = 0x274424u;
    // 0x274424: 0x26100001
    ctx->pc = 0x274424u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x274428: 0x26220012
    ctx->pc = 0x274428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 18));
    // 0x27442c: 0x3051ffff
    ctx->pc = 0x27442cu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 2), 65535));
    // 0x274430: 0x8e422acc
    ctx->pc = 0x274430u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10956)));
    // 0x274434: 0x202102a
    ctx->pc = 0x274434u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x274438: 0x1440ffef
    ctx->pc = 0x274438u;
    {
        const bool branch_taken_0x274438 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27443Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        if (branch_taken_0x274438) {
            ctx->pc = 0x2743F8u;
            goto label_2743f8;
        }
    }
    ctx->pc = 0x274440u;
label_274440:
    // 0x274440: 0x2a020006
    ctx->pc = 0x274440u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 6));
    // 0x274444: 0x10400012
    ctx->pc = 0x274444u;
    {
        const bool branch_taken_0x274444 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x274448u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x274444) {
            ctx->pc = 0x274490u;
            goto label_274490;
        }
    }
    ctx->pc = 0x27444Cu;
    // 0x27444c: 0x8c4322f8
    ctx->pc = 0x27444cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8952)));
    // 0x274450: 0x30630010
    ctx->pc = 0x274450u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16));
    // 0x274454: 0x3c070040
    ctx->pc = 0x274454u;
    SET_GPR_U32(ctx, 7, ((uint32_t)64 << 16));
    // 0x274458: 0x34e74040
    ctx->pc = 0x274458u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 16448));
    // 0x27445c: 0x92422ad0
    ctx->pc = 0x27445cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10960)));
    // 0x274460: 0xa3a20000
    ctx->pc = 0x274460u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x274464: 0x2624fffc
    ctx->pc = 0x274464u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x274468: 0x24050154
    ctx->pc = 0x274468u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 340));
    // 0x27446c: 0x24060007
    ctx->pc = 0x27446cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x274470: 0x2a3380b
    ctx->pc = 0x274470u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 21));
    // 0x274474: 0x3c013f66
    ctx->pc = 0x274474u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16230 << 16));
    // 0x274478: 0x34216666
    ctx->pc = 0x274478u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
    // 0x27447c: 0x44816000
    ctx->pc = 0x27447cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x274480: 0xc080510
    ctx->pc = 0x274480u;
    SET_GPR_U32(ctx, 31, 0x274488u);
    ctx->pc = 0x274484u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274488u; }
    }
    if (ctx->pc != 0x274488u) { return; }
    ctx->pc = 0x274488u;
    // 0x274488: 0x26220012
    ctx->pc = 0x274488u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 18));
    // 0x27448c: 0x3051ffff
    ctx->pc = 0x27448cu;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 2), 65535));
label_274490:
    // 0x274490: 0x26100001
    ctx->pc = 0x274490u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x274494: 0x2a020006
    ctx->pc = 0x274494u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 6));
    // 0x274498: 0x10400011
    ctx->pc = 0x274498u;
    {
        const bool branch_taken_0x274498 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27449Cu;
        SET_GPR_U32(ctx, 19, ((uint32_t)59 << 16));
        if (branch_taken_0x274498) {
            ctx->pc = 0x2744E0u;
            goto label_2744e0;
        }
    }
    ctx->pc = 0x2744A0u;
    // 0x2744a0: 0x2624fffc
    ctx->pc = 0x2744a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x2744a4: 0x0
    ctx->pc = 0x2744a4u;
    // NOP
label_2744a8:
    // 0x2744a8: 0x24050154
    ctx->pc = 0x2744a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 340));
    // 0x2744ac: 0x24060007
    ctx->pc = 0x2744acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2744b0: 0x2a0382d
    ctx->pc = 0x2744b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2744b4: 0x3c013f66
    ctx->pc = 0x2744b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16230 << 16));
    // 0x2744b8: 0x34216666
    ctx->pc = 0x2744b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26214));
    // 0x2744bc: 0x44816000
    ctx->pc = 0x2744bcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2744c0: 0xc080510
    ctx->pc = 0x2744C0u;
    SET_GPR_U32(ctx, 31, 0x2744C8u);
    ctx->pc = 0x2744C4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 19), 4294944736));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2744C8u; }
    }
    if (ctx->pc != 0x2744C8u) { return; }
    ctx->pc = 0x2744C8u;
    // 0x2744c8: 0x26100001
    ctx->pc = 0x2744c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2744cc: 0x26220012
    ctx->pc = 0x2744ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 18));
    // 0x2744d0: 0x3051ffff
    ctx->pc = 0x2744d0u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 2), 65535));
    // 0x2744d4: 0x2a020006
    ctx->pc = 0x2744d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 6));
    // 0x2744d8: 0x1440fff3
    ctx->pc = 0x2744D8u;
    {
        const bool branch_taken_0x2744d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2744DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4294967292));
        if (branch_taken_0x2744d8) {
            ctx->pc = 0x2744A8u;
            goto label_2744a8;
        }
    }
    ctx->pc = 0x2744E0u;
label_2744e0:
    // 0x2744e0: 0x8e422acc
    ctx->pc = 0x2744e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 10956)));
    // 0x2744e4: 0x28420006
    ctx->pc = 0x2744e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 6));
    // 0x2744e8: 0x38420001
    ctx->pc = 0x2744e8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x2744ec: 0xdfbf0070
    ctx->pc = 0x2744ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2744f0: 0xdfb50060
    ctx->pc = 0x2744f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2744f4: 0xdfb40050
    ctx->pc = 0x2744f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2744f8: 0xdfb30040
    ctx->pc = 0x2744f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2744fc: 0xdfb20030
    ctx->pc = 0x2744fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274500: 0xdfb10020
    ctx->pc = 0x274500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274504: 0xdfb00010
    ctx->pc = 0x274504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274508: 0x3e00008
    ctx->pc = 0x274508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27450Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274208u: goto label_274208;
            case 0x274220u: goto label_274220;
            case 0x274228u: goto label_274228;
            case 0x27422Cu: goto label_27422c;
            case 0x274234u: goto label_274234;
            case 0x27427Cu: goto label_27427c;
            case 0x274294u: goto label_274294;
            case 0x27429Cu: goto label_27429c;
            case 0x2742A4u: goto label_2742a4;
            case 0x2742A8u: goto label_2742a8;
            case 0x2742B0u: goto label_2742b0;
            case 0x2742D4u: goto label_2742d4;
            case 0x2742F8u: goto label_2742f8;
            case 0x274314u: goto label_274314;
            case 0x274330u: goto label_274330;
            case 0x27435Cu: goto label_27435c;
            case 0x274384u: goto label_274384;
            case 0x27438Cu: goto label_27438c;
            case 0x274390u: goto label_274390;
            case 0x2743B0u: goto label_2743b0;
            case 0x2743F8u: goto label_2743f8;
            case 0x274440u: goto label_274440;
            case 0x274490u: goto label_274490;
            case 0x2744A8u: goto label_2744a8;
            case 0x2744E0u: goto label_2744e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x274510u;
}
